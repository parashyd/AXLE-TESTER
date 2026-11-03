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
    // void addPoint();
    // void removePoint();
    // void updatePreview();
    // void saveCurve();

private:
    Ui::DacCurveDialog *ui;
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
    int peakIndex =-1;
    double phValue = 0, xPeakIndex=-1,maxX, maxY;
    bool gate1_focus= false;

    bool readPoints(QList<QPointF> &points, QString *errorMessage = nullptr) const;
};

#endif // DACCURVE_H

