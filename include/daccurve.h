#ifndef DACCURVE_H
#define DACCURVE_H

#include <QDialog>
#include <QList>
#include <QPointF>
#include <QString>
#include "qcustomplot.h"
#include "DataFile.h"

namespace Ui { class DacCurveDialog; }
class QWidget;

class DacCurveDialog : public QDialog
{
    Q_OBJECT
public:
    explicit DacCurveDialog(QWidget *parent = nullptr);
    void handleSocketKey(int key);
    ~DacCurveDialog() override;

private slots:
    void setupPlotAppearance();
    void updateGridInterval();
    void updateGraphWithData();
    inline void focusGate1(int replotRequired);
    // inline void focusGate2(int replotRequired);
    inline void plotGate1(int replotRequired, int ParamCalc);
    //inline void plotGate2(int replotRequired, int ParamCalc);
    void loadSavedConfig();
    void autoRunConfig();
    void navigateFocusVertical(int direction);
    void setLogicalFocus(QWidget* widget);
    void onApplyGainClicked();
    void handleBackspaceInput();
    int normalizeKeyForNumeric(uint8_t key);
    void handleDigitInput(int digit);
    void HandleGateUpDownLift(int lift);
    void HandleGateShift(int shift);
    void SaveDACPar();
    void DrawDACCurve();
    void loadDACCurve();
    void saveDACCurve();
    void removeLastDACPoint();
    void updateDACCurveDisplay();
    QString dacCurveFilePath() const;







    // void addPoint();
    // void removePoint();
    // void updatePreview();
    // void saveCurve();

private:
    Ui::DacCurveDialog *ui;

    struct KeyPressState {
        QElapsedTimer timer;
        int pressCount = 0;
        QString inputBuffer;   // Full committed string
        quint8 lastKey = 0;   // last key pressed
        QString lastChar;      // Current character being cycled
    };



    QMap<QLineEdit*, KeyPressState> inputStates;

    enum class InputMode {
        Numeric,
        Alphabetic,
        Alphanumeric,
        None   // no input allowed
    };


    QMap<QLineEdit*, InputMode> inputModes;
    int userinput_prv[3] = {0};
    QWidget *m_plotWidget;
    QCPGraph *g1Line;
    QCPGraph *g2Line;
    QCPGraph *waveformGraph;
    QCPGraph *DACline;
    QCPGraph *g1border;
    QCPGraph *g2border;
    QTimer *plotUpdateTimer;
    ConfigEntry config;
    QVector<double> xAxData,xAxNorm, yAxData;
    volatile int peakIndex =-1;
    double phValue = 0, xPeakIndex=-1,maxX, maxY;
    bool gate1_focus= false;
    QWidget *m_currentFocusedWidget = nullptr;
    QWidget* m_currentLogicalFocus = nullptr;
    bool readPoints(QList<QPointF> &points, QString *errorMessage = nullptr) const;
};

#endif // DACCURVE_H

