#include "daccurve.h"
#include "ui_daccurve.h"

#include <QHeaderView>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QPushButton>
#include <QSettings>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QFile>
#include <QSaveFile>
#include <QDir>
#include <QCoreApplication>
#include <QDebug>
#include <QVBoxLayout>
#include <QWidget>
#include <QList>
#include <algorithm>
#include <cmath>
#include "settings.h"
#include "DataFile.h"
#include "Audio.h"
#include "matrix_keypad.h"

short int channelCnt=0, GateCnt=0;
static int AudioLevel =0;
static QVector<double> DACx, DACy;
static int DAC_CP=1;
DacCurveDialog::DacCurveDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::DacCurveDialog), m_plotWidget(nullptr)
{
    ui->setupUi(this);

    // Connect the Save button by its visible text or object name.
    // for (QPushButton *button : findChildren<QPushButton*>()) {
    //     if (button->text().contains("save", Qt::CaseInsensitive) ||
    //         button->objectName().contains("save", Qt::CaseInsensitive)) {
    //         connect(button, &QPushButton::clicked,
    //                 this, &DacCurveDialog::saveDACCurve);
    //         break;
    //     }
    // }

    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    resize(640, 480);

    DACx.resize(10);
    DACy.resize(10);

    g1border = ui->Plot->addGraph();
    g2border = ui->Plot->addGraph();
    g1Line      = ui->Plot->addGraph();
    g2Line      = ui->Plot->addGraph();
    waveformGraph = ui->Plot->addGraph();
    DACline = ui->Plot->addGraph();
    plotUpdateTimer = new QTimer(this);

    AudioLevel = settings::audioLevel();

    if (AudioLevel < 0)
        AudioLevel = 0;

    if (AudioLevel > 100)
        AudioLevel = 100;

    const int duty = AudioLevel * 10000;

    BuzzerDuty(duty);

    setupPlotAppearance();
    loadSavedConfig();
    autoRunConfig();
    updateGridInterval();
    onApplyGainClicked();

    connect(plotUpdateTimer, &QTimer::timeout, this,[this]() {
        waveformGraph->setLineStyle(QCPGraph::lsLine);
        updateGraphWithData();
    });
    plotUpdateTimer->start(20);      //20msec
    g1border->setPen(QPen(QColor("#008080"), 6));
    g1border->setVisible(false);
    DACline->setLineStyle(QCPGraph::lsLine);
    DACline->setPen(QPen(Qt::darkGreen, 2));


    ui->label_G2ST->setVisible(false);
    ui->label_G2ED->setVisible(false);
    ui->label_TH2->setVisible(false);
    ui->lineEdit_TH2->setVisible(false);
    ui->lineEdit_G2ED->setVisible(false);
    ui->lineEdit_G2ST->setVisible(false);

    ui->lineEdit_DacPH->setVisible(false);
    ui->lineEdit_DacBP->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    ui->lineEdit_DacSD->setVisible(false);

    inputStates[ui->lineEdit_calset] = KeyPressState();
    inputStates[ui->lineEdit]        = KeyPressState();
    inputStates[ui->lineEdit_Gain]   = KeyPressState();
    inputStates[ui->lineEdit_Range]  = KeyPressState();
    inputStates[ui->lineEdit_Delay]  = KeyPressState();
    inputStates[ui->lineEdit_Reject] = KeyPressState();
    inputStates[ui->lineEdit_Angle]  = KeyPressState();
    inputStates[ui->lineEdit_G1ST]   = KeyPressState();
    inputStates[ui->lineEdit_G1ED]   = KeyPressState();
    inputStates[ui->lineEdit_TH1]    = KeyPressState();
    inputStates[ui->lineEdit_G2ST]   = KeyPressState();
    inputStates[ui->lineEdit_G2ED]   = KeyPressState();
    inputStates[ui->lineEdit_TH2]    = KeyPressState();


}
void DacCurveDialog::handleSocketKey(int key){

    switch (key) {
    case SAVE:
        saveDACCurve();
        break;

    case UP:
        if(gate1_focus)
        {
            HandleGateUpDownLift(1);
        }
        else{
            navigateFocusVertical(-1);
        }
        break;

    case DOWN:
        if(gate1_focus)
        {
            HandleGateUpDownLift( -1);
        }
        else{
            navigateFocusVertical(+1);
        }
        break;
    case RIGHT:
        if(gate1_focus){
            HandleGateShift(+1);
        }
        break;

    case LEFT:
        if(gate1_focus){
            HandleGateShift(-1);
        }
        break;
    case CHANNEL:
        channelCnt+=1;
        if(channelCnt == 1){
            ui->lineEdit_ch->setText("1");
            config.channel = 1;
            autoRunConfig();
            onApplyGainClicked();

        }
        else if(channelCnt == 2){
            ui->lineEdit_ch->setText("2");
            config.channel = 2;
            autoRunConfig();
            onApplyGainClicked();
            channelCnt=0;
        }
        break;

    case BACKSPACE:
        handleBackspaceInput();
        break;

    case INC:
        SaveDACPar();
        // if (DAC_CP>3){
        //     DrawDACCurve();
        // }
        break;

    case DEC:
        removeLastDACPoint();
        break;

    case GATE:
        GateCnt+=1;
        if(GateCnt == 1){
            if (m_currentLogicalFocus)
            {
                m_currentLogicalFocus->setStyleSheet("");
                m_currentLogicalFocus = nullptr;
            }

            // Remove actual Qt focus
            QWidget *focusedWidget = this->focusWidget();

            if (focusedWidget)
            {
                if (QLineEdit *lineEdit =
                    qobject_cast<QLineEdit *>(focusedWidget))
                {
                    lineEdit->clearFocus();
                }
            }

            gate1_focus=true;
            g1border->setVisible(true);
            //g2border->setVisible(false);
            focusGate1(1);
        }
        else{
            gate1_focus=false;
            g1border->setVisible(false);
            // g2border->setVisible(false);
            g1border->data()->clear();
            //g2border->data()->clear();
            ui->Plot->replot();
            GateCnt = 0;
        }

        break;


    default:
        // 🔹 Decide based on current screen whether we want digits or alphas
        QLineEdit* focused = qobject_cast<QLineEdit*>(this->focusWidget());

        if (focused)
        {
            // Example: numeric-only fields
            if (focused == ui->lineEdit_calset ||
                focused == ui->lineEdit        ||
                focused == ui->lineEdit_Gain   ||
                focused == ui->lineEdit_Range  ||
                focused == ui->lineEdit_Delay  ||
                focused == ui->lineEdit_Reject ||
                focused == ui->lineEdit_Angle  ||
                focused == ui->lineEdit_G1ST   ||
                focused == ui->lineEdit_G1ED   ||
                focused == ui->lineEdit_TH1    ||
                focused == ui->lineEdit_G2ST   ||
                focused == ui->lineEdit_G2ED   ||
                focused == ui->lineEdit_TH2)
            {
                int mapped = normalizeKeyForNumeric(key);
                if (mapped != -1)
                {

                    handleDigitInput(mapped - '0');  // '1' -> 1
                    // saveTo_entry();
                    autoRunConfig();
                    onApplyGainClicked();

                }
                else
                {
                    //qDebug() << "Ignored non-numeric key:" << (char)key;
                }
            }
        }
        break;
    }
    return;
}
int DacCurveDialog::normalizeKeyForNumeric(uint8_t key)
{
    //qDebug() << "normalfun\n";
    if (key >= '0' && key <= '9') {
        return key;  // already digit
    }

    switch (key)
    {

    case 'A': case 'B': case 'C': return '1';
    case 'D': case 'E': case 'F': return '2';
    case 'G': case 'H': case 'I': return '3';
    case 'J': case 'K': case 'L': return '4';
    case 'M': case 'N': case 'O': return '5';
    case 'P': case 'Q': case 'R': case 'S': return '6';
    case 'T': case 'U': case 'V': return '7';
    case 'W': case 'X': case 'Y': case 'Z': return '8';
    case '-': return '9';  // if you want '-' as 9

    }

    return -1;  // invalid
}
void DacCurveDialog::HandleGateUpDownLift(int lift){

    QLineEdit* Th;
    auto adjustlift = [&](auto& field, int minVal, int maxVal) {
        using T = std::decay_t<decltype(field)>;
        T current = static_cast<T>(Th->text().toDouble());
        T newValue = qBound(static_cast<T>(minVal), current + static_cast<T>(lift * 5), static_cast<T>(maxVal));
        field = newValue;
        Th->setText(QString::number(newValue, 'f', std::is_floating_point<T>::value ? 1 : 0));
    };

    if(gate1_focus)
    {
        Th = ui->lineEdit_TH1;
        adjustlift(config.th1,5,99);
        plotGate1(1,10);
    }

}
void DacCurveDialog::HandleGateShift(int shift){

    auto adjustshift = [&](auto& field, int minVal, int maxVal,QLineEdit* L,int k) {
        using T = std::decay_t<decltype(field)>;
        T current = static_cast<T>(L->text().toDouble());
        T newValue = qBound(static_cast<T>(minVal), current + static_cast<T>(shift * k), static_cast<T>(maxVal));
        field = newValue;
        L->setText(QString::number(newValue, 'f', std::is_floating_point<T>::value ? 1 : 0));
    };
    // int width1 = g1_end-g1_start;
    // int width2 = g2_end-g2_start;
    // if(gate1_focus)
    // {
    if(shift == -1 && config.g1_start == 3) //if gate reaches starting point return
        return;

    if(shift == 1 && config.g1_end == 99)  //if gate reaches ending point return
        return;

    if (shift==-1 && config.g1_start<10){
        int k=(config.g1_start-3)%5;
        adjustshift(config.g1_start,3,99,ui->lineEdit_G1ST,k);
        adjustshift(config.g1_end,3,99,ui->lineEdit_G1ED,k);
        plotGate1(1,10);
        return;
    }

    if(shift == 1 && config.g1_end>94){
        int k = (99-config.g1_end)%5 ;
        adjustshift(config.g1_start,3,99,ui->lineEdit_G1ST,k);
        adjustshift(config.g1_end,3,99,ui->lineEdit_G1ED,k);
        plotGate1(1,10);
        return;
    }

    adjustshift(config.g1_start,3,99,ui->lineEdit_G1ST,5);
    adjustshift(config.g1_end,3,99,ui->lineEdit_G1ED,5);
    plotGate1(1,10);

    //}
    // else
    // {
    //     if(shift == -1 && config.g2_start == 3) //if gate reaches starting point return
    //         return;

    //     if(shift == 1 && config.g2_end == 99)  //if gate reaches ending point return
    //         return;

    //     if (shift==-1 && config.g2_start<10){
    //         int k =(config.g2_start-3)%5;
    //         adjustshift(config.g2_start,3,99,ui->lineEdit_G2ST,k);
    //         adjustshift(config.g2_end,3,99,ui->lineEdit_G2ED,k);
    //         plotGate2(1,10);
    //         return;
    //     }

    //     if(shift == 1 && config.g2_end>94){
    //         int k =(99-config.g2_end)%5;
    //         adjustshift(config.g2_start,3,99,ui->lineEdit_G2ST,k);
    //         adjustshift(config.g2_end,3,99,ui->lineEdit_G2ED,k);
    //         plotGate2(1,10);
    //         return;
    //     }

    //     adjustshift(config.g2_start,3,99,ui->lineEdit_G2ST,5);
    //     adjustshift(config.g2_end,3,99,ui->lineEdit_G2ED,5);
    //     plotGate2(1,10);
    // }

}
void DacCurveDialog::handleDigitInput(int digit)
{
    qDebug() << "handle Digit input:" << digit;

    QLineEdit* focused = qobject_cast<QLineEdit*>(this->focusWidget());
    if (!focused || !focused->isEnabled())
        return;

    if (!inputStates.contains(focused))
        return;

    KeyPressState &state = inputStates[focused];

    // Reset buffer if idle for more than 3 seconds
    if (!state.timer.isValid() || state.timer.elapsed() > 3000)
        state.inputBuffer.clear();

    // Append new digit
    state.inputBuffer += QString::number(digit);

    bool ok = false;
    int value = state.inputBuffer.toInt(&ok);
    if (!ok)
        return;

    // ---------- Determine limits ----------
    int min = 0, max = 999;

    if      (focused == ui->lineEdit_calset)   { min = 1;  max = 50; }
    else if (focused == ui->lineEdit)          { min = 0;  max = 9999; }
    else if (focused == ui->lineEdit_Gain)     { min = 0;  max = 80; }
    else if (focused == ui->lineEdit_Range)    { min = 50;  max = 1000; }
    else if (focused == ui->lineEdit_Delay)    { min = 0;  max = 200; }
    else if (focused == ui->lineEdit_Reject)   { min = 0;  max = 99; }
    else if (focused == ui->lineEdit_Angle)    { min = 0;  max = 90; }
    else if (focused == ui->lineEdit_G1ST ||
             focused == ui->lineEdit_G1ED ||
             focused == ui->lineEdit_G2ST ||
             focused == ui->lineEdit_G2ED )
    {
        min = 3;
        max = 99;
    }
    else if (focused == ui->lineEdit_TH1  ||
             focused == ui->lineEdit_TH2)
    {
        min = 5;
        max = 99;
    }

    // ---------- Allow partial typing ----------
    int maxDigits = QString::number(max).length();

    if (state.inputBuffer.length() > maxDigits || value > max)
    {
        state.inputBuffer.chop(1);
        return;
    }

    // Show exactly what user typed
    focused->setText(state.inputBuffer);
    state.timer.restart();

    // ---------- Update entry only if valid final range ----------

    if (value >max)
        value = max;


    if (value < min)
        value = min;


    if(focused == ui->lineEdit_calset)
    {
        config.calset   = value;
        ui->lineEdit_calset->setText(QString::number(value, 'd', 0));

    }
    else if (focused == ui->lineEdit)
    {
        config.velocity = value;
        //UserVelocity = value;

        // if (value != 0)
        //     RANGE_FACTOR = 20000.0 / value;
    }
    else if (focused == ui->lineEdit_Gain)     config.Gain     = value;
    else if (focused == ui->lineEdit_Range)    config.range    = value;
    else if (focused == ui->lineEdit_Delay)    config.delay    = value;
    else if (focused == ui->lineEdit_Reject)   config.reject   = value;
    else if (focused == ui->lineEdit_Angle)    config.Angle    = value;
    else if (focused == ui->lineEdit_G1ST)     config.g1_start = value;
    else if (focused == ui->lineEdit_G1ED)     config.g1_end   = value;
    else if (focused == ui->lineEdit_TH1)      config.th1      = value;
    else if (focused == ui->lineEdit_G2ST)     config.g2_start = value;
    else if (focused == ui->lineEdit_G2ED)     config.g2_end   = value;
    else if (focused == ui->lineEdit_TH2)      config.th2      = value;
}

void DacCurveDialog::loadSavedConfig()
{
    // QFile file("/run/media/mmcblk1p1/config_saved.json");
    QFile file("config_saved.json");

    if (!file.exists() || !file.open(QIODevice::ReadOnly)) return;

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    QJsonObject config = doc.object();
    int channel,calset;
    double velocity;
    if((config["channel"].toInt() != 0) && (config["calset"].toInt() != 0) && (config["velocity"].toDouble() != 0))
    {
        channel = config["channel"].toInt();
        calset  = config["calset"].toInt();
        velocity = config["velocity"].toDouble();
    }

    else
    {
        channel = 2;
        calset  = 1;
        velocity = 3230;

    }

    // Update any internal fields or UI if necessary
    ui->lineEdit_ch->setText(QString::number(channel));
    ui->lineEdit_calset->setText(QString::number(calset));
    ui->lineEdit ->setText(QString::number(velocity));
}

void DacCurveDialog::autoRunConfig()
{
    qDebug() << "Entered into auto config";

    int Userinputs_pre[3];

    Userinputs_pre[0] = ui->lineEdit_ch->text().toInt();        // channel
    Userinputs_pre[1] = ui->lineEdit_calset->text().toInt();    // calset

    if (Userinputs_pre[0] != userinput_prv[0] || Userinputs_pre[1] != userinput_prv[1])
    {
        getconfig(Userinputs_pre[1], Userinputs_pre[0], &config);

        qDebug() << "Changed config inputs";
        qDebug() << "pre Ch" << Userinputs_pre[0] << "pre Cal" << Userinputs_pre[1];
        qDebug() << "prv Ch" << userinput_prv[0] << "prv Cal" << userinput_prv[1];

        // Update previous
        userinput_prv[0] = Userinputs_pre[0];
        userinput_prv[1] = Userinputs_pre[1];

        // Load the curve belonging to the newly selected channel/calset.
        loadDACCurve();
    }


    //config.reject = config.reject / REJECT_FACTOR;
    //config.Gain   = config.Gain / GAIN_FACTOR;

    ui->lineEdit_Range->setText(QString::number(config.range, 'd', 0));
    ui->lineEdit_Delay->setText(QString::number(config.delay, 'd', 0));
    ui->lineEdit_Reject->setText(QString::number(config.reject, 'd', 0));
    ui->lineEdit_Gain->setText(QString::number(config.Gain));
    ui->lineEdit_Angle->setText(QString::number(config.Angle));

    ui->lineEdit_G1ST->setText(QString::number(config.g1_start));
    ui->lineEdit_G1ED->setText(QString::number(config.g1_end));
    ui->lineEdit_TH1->setText(QString::number(config.th1));

    ui->lineEdit_G2ST->setText(QString::number(config.g2_start));
    ui->lineEdit_G2ED->setText(QString::number(config.g2_end));
    ui->lineEdit_TH2->setText(QString::number(config.th2));
    //ui->lineEdit_Velocity->setText(QString::number(UserVelocity, 'd', 0));
    if (config.Angle>=30){
        ui->lineEdit->setText("3230");
    }
    else{
        ui->lineEdit->setText("5920");
    }

    QString savedPosition = QString::fromLocal8Bit(config.position).trimmed();


    ui->Plot->xAxis->setRange(0, config.range);  // optional
    ui->Plot->yAxis->setRange(0, 100);
    qDebug() << "autorunconfig completed" ;

}

void DacCurveDialog::setupPlotAppearance()
{
    ui->Plot->setOpenGl(true);
    ui->Plot->setFixedSize(485, 335);

    const bool light =
        settings::theme().compare("Light", Qt::CaseInsensitive) == 0;

    QColor plotBackground;
    QColor axisColor;
    QColor gridColor;
    QColor subGridColor;

    if (light)
    {
        // LIGHT THEME
        plotBackground = QColor("#FFFFFF");
        axisColor      = QColor("#202020");
        gridColor      = QColor("#B8C0C8");
        subGridColor   = QColor("#E0E5EA");
    }
    else
    {
        // DARK THEME
        plotBackground = QColor("#000000");
        axisColor      = QColor("#FFFFFF");
        gridColor      = QColor("#666666");
        subGridColor   = QColor("#303030");
    }

    ui->Plot->setBackground(plotBackground);

    // ---------------- X AXIS ----------------

    QSharedPointer<QCPAxisTickerFixed> xTicker(
        new QCPAxisTickerFixed
        );

    xTicker->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    ui->Plot->xAxis->setTicker(xTicker);

    ui->Plot->xAxis->setBasePen(
        QPen(axisColor)
        );

    ui->Plot->xAxis->setTickPen(
        QPen(axisColor)
        );

    ui->Plot->xAxis->setTickLabelColor(
        axisColor
        );

    ui->Plot->xAxis->grid()->setPen(
        QPen(gridColor)
        );

    ui->Plot->xAxis->grid()->setSubGridPen(
        QPen(subGridColor)
        );

    ui->Plot->xAxis->setTickLabelSide(
        QCPAxis::lsOutside
        );


    // ---------------- Y AXIS ----------------

    QSharedPointer<QCPAxisTickerFixed> yTicker(
        new QCPAxisTickerFixed
        );

    yTicker->setScaleStrategy(QCPAxisTickerFixed::ssNone);

    ui->Plot->yAxis->setTicker(yTicker);

    ui->Plot->yAxis->setBasePen(
        QPen(axisColor)
        );

    ui->Plot->yAxis->setTickPen(
        QPen(axisColor)
        );

    ui->Plot->yAxis->setTickLabelColor(
        axisColor
        );

    ui->Plot->yAxis->grid()->setPen(
        QPen(gridColor)
        );

    ui->Plot->yAxis->grid()->setSubGridPen(
        QPen(subGridColor)
        );

    ui->Plot->yAxis->setTickLabelSide(
        QCPAxis::lsOutside
        );


    // ---------------- RANGE CHANGE ----------------

    connect(
        ui->Plot->xAxis,
        SIGNAL(rangeChanged(QCPRange)),
        this,
        SLOT(updateGridInterval())
        );

    connect(
        ui->Plot->yAxis,
        SIGNAL(rangeChanged(QCPRange)),
        this,
        SLOT(updateGridInterval())
        );


    ui->Plot->xAxis->setRange(0, 100);
    ui->Plot->yAxis->setRange(0, 100);

    ui->Plot->replot();
}
void DacCurveDialog::updateGridInterval()
{
    // Update X-axis
    double xLower = ui->Plot->xAxis->range().lower;
    double xUpper = ui->Plot->xAxis->range().upper;
    double xStep = (xUpper - xLower) / 10; // 10 intervals

    QSharedPointer<QCPAxisTickerFixed> xTicker = ui->Plot->xAxis->ticker().staticCast<QCPAxisTickerFixed>();
    xTicker->setTickStep(xStep);

    // Update Y-axis
    double yLower = ui->Plot->yAxis->range().lower;
    double yUpper = ui->Plot->yAxis->range().upper;
    double yStep = (yUpper - yLower) / 10; // 10 intervals

    QSharedPointer<QCPAxisTickerFixed> yTicker = ui->Plot->yAxis->ticker().staticCast<QCPAxisTickerFixed>();
    yTicker->setTickStep(yStep);

    ui->Plot->replot();
}


void DacCurveDialog::updateGraphWithData()
{

    QVector<QPointF> filtered;
    if (getFilteredPoints(config, filtered) == 0)
        return;

    xAxData={0};
    xAxNorm={0};
    yAxData={0};

    xAxData.resize(filtered.size());
    yAxData.resize(filtered.size());
    xAxNorm.resize(filtered.size());

    maxX = 0;
    maxY = 0;
    bool g1buzon=false;


    // Compute G1/G2 range windows
    double g1Start = (config.g1_start * config.range) / 100.0;
    double g1End   = (config.g1_end   * config.range) / 100.0;

    double g2Start = (config.g2_start * config.range) / 100.0;
    double g2End   = (config.g2_end   * config.range) / 100.0;

    // -----------------------------
    // Peak detection
    // -----------------------------
    phValue = 0;
    peakIndex =  -1;

    for (int i = 0; i < filtered.size(); i++)
    {
        double addr = filtered[i].x();
        double val  = (filtered[i].y() / 255.0) * 100.0;

        xAxData[i]  = addr;
        // config.Angle<=30 ? xNorm.append(xData[i] / RANGE_FACTOR_LT30) : xNorm.append(xData[i] / RANGE_FACTOR_GT30);

        config.Angle<=30 ? xAxNorm[i]=(xAxData[i] / RANGE_FACTOR_LT30) :  xAxNorm[i]=(xAxData[i] / RANGE_FACTOR_GT30);
        yAxData[i]  = val;
        //yDataa[i] = static_cast<uint8_t>(val); // one byte, correct value

        if (xAxNorm[i] >= g1Start && xAxNorm[i] <= g1End)
        {
            if(yAxData[i]>config.th1)
            {
                g1buzon=true;
            }
        }

        maxX = qMax<double>(maxX, double(addr));
        maxY = qMax<double>(maxY, val);
    }

    if (xAxData.isEmpty()) return;
    ///qDebug() << "XdataSize"<< xData.size()<<"XnormSize"<< xNorm.size()<<"ydataSize" << yData.size();
    static int k =0;
    if(g1buzon)
    {
        if(!isBuzzerOn()){
            BuzzerOn(true);
            ui->lineEdit_ch->setStyleSheet(        "background-color: red;"
                                           "border: 2px solid black;");
        }
    }
    else{
        if(isBuzzerOn()){
            BuzzerOn(false);
            ui->lineEdit_ch->setStyleSheet("");
        }
    }

    plotGate1(0,k);
    //plotGate2(0,k);//displaying ph values for every 10 iterations (10 * 20ms = 200ms)
    if(k==10)
    {
        k=0;
    }
    else{
        k++;
    }
    DACline->data()->clear();

    if (DAC_CP>3){
        ui->lineEdit_DacPH->setVisible(true);
        ui->lineEdit_DacBP->setVisible(true);
        ui->lineEdit_2->setVisible(true);
        ui->lineEdit_DacSD->setVisible(true);
        DrawDACCurve();
    }
    else{
        ui->lineEdit_DacPH->setVisible(false);
        ui->lineEdit_DacBP->setVisible(false);
        ui->lineEdit_2->setVisible(false);
        ui->lineEdit_DacSD->setVisible(false);
    }



    waveformGraph->data()->clear();

    // -----------------------------
    // Plot Update (no crashes)
    // -----------------------------
    // if(zoom){
    //     ui->Plot->xAxis->setRange(g1Start,g1End);
    //     updateGridInterval();
    //     //ui->Plot->xAxis->setRange(g1_start*RANGE_FACTOR,g1_end*RANGE_FACTOR);
    // }
    // else{
    ui->Plot->xAxis->setRange(0,config.range);
    updateGridInterval();
    // }

    if (config.channel == 1)
    {
        waveformGraph->setPen(
            QPen(settings::channel1Color(), 2)
            );
    }
    else
    {
        waveformGraph->setPen(
            QPen(settings::channel2Color(), 2)
            );
    }

    waveformGraph->setData(xAxNorm, yAxData);

    ui->Plot->replot();
}

inline void DacCurveDialog::plotGate1(int replotRequired,int ParamCalc)
{
    phValue = 0;
    peakIndex = -1;
    //xNorm.reserve(xData.size());
    double g1Start = (config.g1_start * config.range) / 100.0;
    double g1End   = (config.g1_end   * config.range) / 100.0;

    for (int i = 0; i < yAxData.size(); i++)
    {
        //config.Angle<=30 ? xNorm.append(xData[i] / RANGE_FACTOR_LT30) : xNorm.append(xData[i] / RANGE_FACTOR_GT30);
        double x = xAxNorm[i];

        if (x >= g1Start && x <= g1End)
        {
            if (yAxData[i] > phValue){
                peakIndex = i;
                xPeakIndex=xAxNorm[i];
            }

            phValue = qMax(phValue, yAxData[i]);
        }
    }

    double bp1 = 0;
    if (peakIndex >= 0)
        for (int i = peakIndex; i >= 0; i--)
            if (yAxData[i] == 0) { bp1 = xAxNorm[i]; break; }


    double ang = config.Angle * M_PI / 180.0;

    double d1  = bp1 * cos(ang);
    double sd1 = bp1 * sin(ang);
    if(ParamCalc == 10){
        ui->lineEdit_PH->setText(QString::number(phValue, 'f', 0));
        ui->lineEdit_BP->setText(QString::number(bp1, 'f', 0));
        ui->lineEdit_D->setText(QString::number(d1, 'f', 0));
        ui->lineEdit_SD->setText(QString::number(sd1, 'f', 0));
    }
    if(gate1_focus){
        focusGate1(0);
    }
    g1Line->data()->clear();
    g1Line->setData(QVector<double>{g1Start, g1End},
                    QVector<double>{(double)config.th1, (double)config.th1});
    if(replotRequired)
        ui->Plot->replot();
}
inline void DacCurveDialog::focusGate1(int replotRequired)
{

    double g1Start = (config.g1_start * config.range) / 100.0;
    double g1End   = (config.g1_end   * config.range) / 100.0;

    g1border->data()->clear();
    //g2border->data()->clear();
    g1border->setData(QVector<double>{g1Start, g1End},
                      QVector<double>{(double)config.th1, (double)config.th1});
    if(replotRequired)
        ui->Plot->replot();
}

void DacCurveDialog::navigateFocusVertical(int direction)
{
    QList<QWidget*> navWidgets = {
        ui->lineEdit_calset,
        //ui->lineEdit,
        ui->lineEdit_Gain,
        ui->lineEdit_Range,
        ui->lineEdit_Delay,
        ui->lineEdit_Reject,
        ui->lineEdit_Angle,
        ui->lineEdit_G1ST,
        ui->lineEdit_G1ED,
        ui->lineEdit_TH1,
    };

    // 🔹 Trust Qt's real focus
    QWidget *current = focusWidget();

    // Fallback only if nothing focused
    if (!current || !navWidgets.contains(current)){
        current = ui->lineEdit_Gain;
        setLogicalFocus(current);
        return;
    }

    setLogicalFocus(current);
    int index = navWidgets.indexOf(current);

    int newIndex = index + direction;
    if (newIndex < 0)
        newIndex = navWidgets.size() - 1;
    else if (newIndex >= navWidgets.size())
        newIndex = 0;

    QWidget *newWidget = navWidgets[newIndex];


    setLogicalFocus(newWidget);


    // newWidget->setFocus(Qt::OtherFocusReason);

    // 🔹 Move cursor for LineEdit
    if (auto le = qobject_cast<QLineEdit*>(newWidget))
        le->setCursorPosition(le->text().length());

    qDebug() << "Moved focus from"
             << current->objectName()
             << "to"
             << newWidget->objectName();
}

void DacCurveDialog::setLogicalFocus(QWidget* widget)
{
    if (!widget) return;

    // 1️ Remove previous highlight
    if (m_currentLogicalFocus && m_currentLogicalFocus != widget) {
        // Reset style to default
        m_currentLogicalFocus->setStyleSheet("");
    }

    // 2️⃣ Apply highlight to the new widget\
    // "background-color: rgb(255,255,150);"
    widget->setStyleSheet(
        "background-color: rgb(120,180,255);"
        "border: 2px solid black;"
        );


    m_currentLogicalFocus = widget;

    // 3️⃣ Optional: attempt to give real Qt focus
    if (widget->isVisible() && widget->isEnabled()) {
        // For Wayland, this may not guarantee OS focus, but it's harmless
        widget->setFocus(Qt::OtherFocusReason);

        // If it's a QLineEdit, put cursor at start
        if (auto le = qobject_cast<QLineEdit*>(widget)) {
            le->setCursorPosition(0);
        }
    }

    // 4️⃣ Debug output
    qDebug() << "[LogicalFocus] Widget:" << widget->objectName()
             << "Visible:" << widget->isVisible()
             << "Enabled:" << widget->isEnabled()
             << "hasFocus:" << widget->hasFocus();
}
void DacCurveDialog::onApplyGainClicked()
{
    ConfigEntry updatedCfg;

    double userGain = ui->lineEdit_Gain->text().toDouble();   // 🔹 CHANGE
    int selectedCh  = ui->lineEdit_ch->text().toInt();
    int calset      = ui->lineEdit_calset->text().toInt();

    if (selectedCh != 1 && selectedCh != 2) {
        qWarning() << "Invalid channel selected";
        return;
    }

    int userGainVal = static_cast<int>(userGain); //  SCALE AFTER DOUBLE

    int gain_ch1 = 0;
    int gain_ch2 = 0;

    ConfigEntry otherCfg;
    ConfigEntry selectedCfg;

    /* -------------------------------------------------
     * 1. Read config for both channels
     * ------------------------------------------------- */
    if (getconfig(calset, 1, &selectedCfg) != 0 ||
        getconfig(calset, 2, &otherCfg) != 0) {
        qWarning() << "Failed to read config file";
        return;
    }

    /* -------------------------------------------------
     * 2. Decide gains
     * ------------------------------------------------- */
    if (selectedCh == 1) {
        gain_ch1 = userGain * GAIN_FACTOR;
        gain_ch2 = static_cast<int>(otherCfg.Gain * GAIN_FACTOR);
    } else {
        gain_ch2 = userGain * GAIN_FACTOR;
        gain_ch1 = static_cast<int>(selectedCfg.Gain * GAIN_FACTOR);
    }

    qDebug() << "Applying gains -> CH1:" << gain_ch1
             << "CH2:" << gain_ch2;

    /* -------------------------------------------------
     * 3. Apply to hardware
     * ------------------------------------------------- */
    OperateGainDual(gain_ch1, gain_ch2);

    /* -------------------------------------------------
     * 4. Update ONLY selected channel in Config.txt
     * ------------------------------------------------- */
    if (getconfig(calset, selectedCh, &updatedCfg) != 0) {
        qWarning() << "Failed to reload selected channel config";
        return;
    }

    updatedCfg.Gain = static_cast<float>(userGain);  // 🔹 keep stored value scaled

}
void DacCurveDialog::handleBackspaceInput()
{
    QLineEdit* focused = qobject_cast<QLineEdit*>(this->focusWidget());
    if (!focused || !focused->isEnabled() || !inputStates.contains(focused))
        return;

    KeyPressState &state = inputStates[focused];

    if (state.inputBuffer.isEmpty())
        return;

    // Remove last digit
    state.inputBuffer.chop(1);

    if (state.inputBuffer.isEmpty())
    {
        focused->clear();
        //return;
    }

    bool ok = false;
    int value = state.inputBuffer.toInt(&ok);
    if (!ok)
        return;

    // ---------- Limits ----------
    int min = 0, max = 999;

    if      (focused == ui->lineEdit_calset)   { min = 1;  max = 50; }
    else if (focused == ui->lineEdit)          { min = 0;  max = 9999; }
    else if (focused == ui->lineEdit_Gain)     { min = 0;  max = 80; }
    else if (focused == ui->lineEdit_Range)    { min = 50; max = 1000; }  // updated
    else if (focused == ui->lineEdit_Delay)    { min = 0;  max = 200; }
    else if (focused == ui->lineEdit_Reject)   { min = 0;  max = 99; }
    else if (focused == ui->lineEdit_Angle)    { min = 0;  max = 90; }
    else if (focused == ui->lineEdit_G1ST ||
             focused == ui->lineEdit_G1ED ||
             focused == ui->lineEdit_G2ST ||
             focused == ui->lineEdit_G2ED )

    {
        min = 3;
        max = 99;
    }

    else if (focused == ui->lineEdit_TH1  ||
             focused == ui->lineEdit_TH2)
    {
        min = 5;
        max = 99;
    }

    // ---------- Allow partial delete ----------
    if (value > max)
    {
        value = max;
        // focused->clear();
        // return;
    }

    // Show what remains
    focused->setText(state.inputBuffer);
    state.timer.restart();

    // Only update entry if within final valid range
    if (value < min)
    {
        value = min;
    }

    if      (focused == ui->lineEdit_calset)
    {
        config.calset   = value;
        ui->lineEdit_calset->setText(QString::number(value, 'd', 0));
    }
    else if (focused == ui->lineEdit)          config.velocity = value;
    else if (focused == ui->lineEdit_Gain)     config.Gain     = value;
    else if (focused == ui->lineEdit_Range)    config.range    = value;
    else if (focused == ui->lineEdit_Delay)    config.delay    = value;
    else if (focused == ui->lineEdit_Reject)   config.reject   = value;
    else if (focused == ui->lineEdit_Angle)    config.Angle    = value;
    else if (focused == ui->lineEdit_G1ST)     config.g1_start = value;
    else if (focused == ui->lineEdit_G1ED)     config.g1_end   = value;
    else if (focused == ui->lineEdit_TH1)      config.th1      = value;
    else if (focused == ui->lineEdit_G2ST)     config.g2_start = value;
    else if (focused == ui->lineEdit_G2ED)     config.g2_end   = value;
    else if (focused == ui->lineEdit_TH2)      config.th2      = value;

}
QString DacCurveDialog::dacCurveFilePath() const
{
    return QDir::current().filePath("dac_curves.json");
}

void DacCurveDialog::loadDACCurve()
{
    DACx = QVector<double>(10, 0.0);
    DACy = QVector<double>(10, 0.0);
    DAC_CP = 1;

    const int channel = ui->lineEdit_ch->text().toInt();
    const int calset = ui->lineEdit_calset->text().toInt();

    if ((channel != 1 && channel != 2) || calset < 1 || calset > 50) {
        updateDACCurveDisplay();
        return;
    }

    QFile file(dacCurveFilePath());
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QJsonParseError parseError;
        const QJsonDocument doc =
            QJsonDocument::fromJson(file.readAll(), &parseError);
        file.close();

        if (parseError.error == QJsonParseError::NoError && doc.isObject()) {
            const QJsonObject root = doc.object();
            const QString channelKey = QString("channel_%1").arg(channel);
            const QString calsetKey = QString("calset_%1").arg(calset);
            const QJsonObject channelObject = root.value(channelKey).toObject();
            const QJsonObject curveObject = channelObject.value(calsetKey).toObject();
            const QJsonArray xArray = curveObject.value("DACx").toArray();
            const QJsonArray yArray = curveObject.value("DACy").toArray();

            const int count = qMin(10, qMin(xArray.size(), yArray.size()));
            for (int i = 0; i < count; ++i) {
                DACx[i] = xArray.at(i).toDouble();
                DACy[i] = yArray.at(i).toDouble();
            }
        } else {
            qWarning() << "Invalid DAC JSON file:" << parseError.errorString();
        }
    }

    int firstUnused = 0;
    while (firstUnused < 10 &&
           (DACx[firstUnused] != 0.0 || DACy[firstUnused] != 0.0))
        ++firstUnused;

    DAC_CP = qMin(firstUnused + 1, 10);
    ui->lineEdit_CP->setText(QString::number(DAC_CP));
    updateDACCurveDisplay();
}

void DacCurveDialog::saveDACCurve()
{
    const int channel = ui->lineEdit_ch->text().toInt();
    const int calset = ui->lineEdit_calset->text().toInt();

    if ((channel != 1 && channel != 2) || calset < 1 || calset > 50) {
        qWarning() <<"DAC Curve"<<
                             "Select a valid channel (1-2) and calset (1-50).";
        return;
    }

    QJsonObject root;
    QFile inputFile(dacCurveFilePath());
    if (inputFile.exists()) {
        if (!inputFile.open(QIODevice::ReadOnly)) {
            qWarning() << "DAC Curve"<<
                                 "Unable to read dac_curves.json.";
            return;
        }

        QJsonParseError parseError;
        const QJsonDocument oldDoc =
            QJsonDocument::fromJson(inputFile.readAll(), &parseError);
        inputFile.close();

        if (parseError.error != QJsonParseError::NoError || !oldDoc.isObject()) {
           qWarning() <<"DAC Curve"<<
                                 "dac_curves.json is invalid. Existing data was not changed.";
            return;
        }
        root = oldDoc.object();
    }

    QJsonArray xArray;
    QJsonArray yArray;
    for (int i = 0; i < 10; ++i) {
        xArray.append(i < DACx.size() ? DACx[i] : 0.0);
        yArray.append(i < DACy.size() ? DACy[i] : 0.0);
    }

    const QString channelKey = QString("channel_%1").arg(channel);
    const QString calsetKey = QString("calset_%1").arg(calset);
    QJsonObject channelObject = root.value(channelKey).toObject();

    QJsonObject curveObject;
    curveObject.insert("DACx", xArray);
    curveObject.insert("DACy", yArray);
    channelObject.insert(calsetKey, curveObject);
    root.insert(channelKey, channelObject);

    QSaveFile outputFile(dacCurveFilePath());
    if (!outputFile.open(QIODevice::WriteOnly)) {
      qWarning() <<"DAC Curve"<<
            "Unable to write dac_curves.json.";
        return;
    }

    const QByteArray json = QJsonDocument(root).toJson(QJsonDocument::Indented);
    if (outputFile.write(json) != json.size() || !outputFile.commit()) {
        qWarning() <<"DAC Curve"<< "Failed to save DAC curve.";
        return;
    }

    qWarning() << "DAC Curve"<<QString("DAC curve saved for Channel %1, Calset %2.").arg(channel).arg(calset);
}

void DacCurveDialog::removeLastDACPoint()
{

    if (DACx.size() != 10 || DACy.size() != 10) {
        DACx = QVector<double>(10, 0.0);
        DACy = QVector<double>(10, 0.0);
    }

    for (int i = 9; i >= 0; --i) {
        if (DACx[i] != 0.0 || DACy[i] != 0.0) {
            DACx[i] = 0.0;
            DACy[i] = 0.0;
            DAC_CP = i + 1;
            updateDACCurveDisplay();
            return;
        }
    }

    DAC_CP = 1;
    updateDACCurveDisplay();
}

void DacCurveDialog::updateDACCurveDisplay()
{
    ui->lineEdit_CP->setText(QString::number(DAC_CP));
    DACline->data()->clear();
    DrawDACCurve();
    ui->Plot->replot();
}

void DacCurveDialog::SaveDACPar()
{
    const int minCP = 1;
    const int maxCP = 10;

    if (DAC_CP < minCP || DAC_CP > maxCP) {
        qWarning() << "SaveDACPar: CP out of allowed range:" << DAC_CP;
        return;
    }

    const int idx = DAC_CP - 1;
    if (idx < 0 || idx >= DACx.size() || idx >= DACy.size()) {
        qWarning() << "SaveDACPar: index out of range:" << idx;
        return;
    }

    if (DACx[idx] != 0.0 || DACy[idx] != 0.0) {
        qWarning() << "All ten DAC points are occupied. Press DEC to remove one.";
        return;
    }

    DACx[idx] = peakIndex + (config.delay * DELAY_FACTOR);
    DACy[idx] = phValue;

    if (DAC_CP < maxCP)
        ++DAC_CP;

    updateDACCurveDisplay();
}
void DacCurveDialog::DrawDACCurve()
{
    // ui->Plot->addGraph();
    // ui->Plot->graph(3)->setData(DACx,DACy);
    // ui->Plot->graph(3)->setLineStyle(QCPGraph::lsLine);
    // ui->Plot->graph(3)->setPen(QPen(Qt::yellow, 2));

    // Ensure DAC arrays exist and have the correct size.
    // Example assumes they are QVector<double> DACx, DACy and size is dacArraySize (10).
    const int dacArraySize = 10;
    // if (DACx.size() != dacArraySize || DACy.size() != dacArraySize)
    // {
    //     qWarning() << "DrawDACCurve: DAC arrays have wrong size:" << DACx.size() << DACy.size();
    //     return;
    // }

    QVector<double> xFiltered;
    QVector<double> yFiltered;

    for (int i = 0; i < DACx.size(); ++i) {
        if (DACy[i] != 0 ) {
            double x = DACx[i]-(config.delay*DELAY_FACTOR);
            config.Angle<=30 ? x=(x / RANGE_FACTOR_LT30) :  x=(x/ RANGE_FACTOR_GT30);
            xFiltered.append(x);
            yFiltered.append(DACy[i]);
        }
    }


    int max =0;
    int DacPkIdx=0;
    for(int i = static_cast<int>(DACx[0]-(config.delay*DELAY_FACTOR));i<static_cast<int>(DACx[DAC_CP]-(config.delay*DELAY_FACTOR));i++){
        if(yAxData[i]>max){
            max=yAxData[i];
            DacPkIdx=i;
        }
    }
    ui->lineEdit_DacPH->setText(QString::number(max));
    int BP =0;
    if (DacPkIdx >= 0)
        for (int i = DacPkIdx; i >= 0; i--)
            if (yAxData[i] == 0) { BP = xAxNorm[i]; break; }

    ui->lineEdit_DacBP->setText(QString::number(BP));
    double ang = config.Angle * M_PI / 180.0;

    double d1  = BP * cos(ang);
    double sd1 = BP * sin(ang);
    ui->lineEdit_2->setText(QString::number(d1));
    ui->lineEdit_DacSD->setText(QString::number(sd1));


    DACline->setData(xFiltered, yFiltered);


    //ui->Plot->replot();
}

DacCurveDialog::~DacCurveDialog() { delete ui; }








