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
#include <QVBoxLayout>
#include <QWidget>
#include <QList>
#include <algorithm>
#include <cmath>
#include "settings.h"
#include "DataFile.h"
#include "Audio.h"


DacCurveDialog::DacCurveDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::DacCurveDialog), m_plotWidget(nullptr)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    resize(640, 480);

    g1border = ui->Plot->addGraph();
    g2border = ui->Plot->addGraph();
    g1Line      = ui->Plot->addGraph();
    g2Line      = ui->Plot->addGraph();
    waveformGraph = ui->Plot->addGraph();
    DACline = ui->Plot->addGraph();
    plotUpdateTimer = new QTimer(this);


    setupPlotAppearance();
    loadSavedConfig();
    autoRunConfig();
    updateGridInterval();
    connect(plotUpdateTimer, &QTimer::timeout, this,[this]() {
        waveformGraph->setLineStyle(QCPGraph::lsLine);
        updateGraphWithData();
    });
    plotUpdateTimer->start(20);      //20msec


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
    if(g1buzon )
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
    g2border->data()->clear();
    g1border->setData(QVector<double>{g1Start, g1End},
                      QVector<double>{(double)config.th1, (double)config.th1});
    if(replotRequired)
        ui->Plot->replot();
}

DacCurveDialog::~DacCurveDialog() { delete ui; }








