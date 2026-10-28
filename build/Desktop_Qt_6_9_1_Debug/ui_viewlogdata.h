/********************************************************************************
** Form generated from reading UI file 'viewlogdata.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWLOGDATA_H
#define UI_VIEWLOGDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_viewLogData
{
public:
    QLabel *label_Time;
    QPushButton *btn_PlayPause;
    QSlider *slider_Scrub;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_PH;
    QLabel *label_BP;
    QLineEdit *lineEdit;
    QLabel *label_D;
    QLineEdit *lineEdit_D;
    QLabel *label_Sd;
    QLineEdit *lineEdit_SD;
    QCustomPlot *PLOT;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLabel *label_WeldTypVal;
    QLabel *label_10;
    QLabel *label_TstTypVal;
    QLabel *label_9;
    QLabel *label_KmVal;
    QLabel *label_11;
    QLabel *label_MtrVal;
    QLabel *label_13;
    QLabel *label_RailVal;
    QLabel *label_12;
    QLabel *label_14;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_OpNameVal;
    QLabel *label_4;
    QLabel *label_DivVal;
    QLabel *label_6;
    QLabel *label_SecVal;
    QLabel *label_7;
    QLabel *label_LineVal;
    QLabel *label_5;
    QLabel *label_DateVal;
    QLabel *label_18;
    QLabel *label_TimeVal;
    QLabel *label_15;
    QLabel *label_LatVal;
    QLabel *label_17;
    QLabel *label_LonVal;
    QWidget *layoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label_calset;
    QLabel *label_calsetval;
    QLabel *label_ch;
    QLabel *label_chval;
    QLabel *label_gain;
    QLabel *label_gainval;
    QLabel *label_range;
    QLabel *label_Delay;
    QLabel *label_DelayVal;
    QLabel *label_Reject;
    QLabel *label_Rejectval;
    QLabel *label_Angle;
    QLabel *label_Angleval;
    QLabel *label_GTST;
    QLineEdit *lineEdit_GTST;
    QLabel *label_2;
    QLineEdit *lineEdit_GTED;
    QLabel *label_TH;
    QLineEdit *lineEdit_TH;
    QLabel *label_rangeval;

    void setupUi(QDialog *viewLogData)
    {
        if (viewLogData->objectName().isEmpty())
            viewLogData->setObjectName("viewLogData");
        viewLogData->resize(640, 480);
        label_Time = new QLabel(viewLogData);
        label_Time->setObjectName("label_Time");
        label_Time->setGeometry(QRect(410, 440, 81, 18));
        QFont font;
        font.setBold(true);
        label_Time->setFont(font);
        btn_PlayPause = new QPushButton(viewLogData);
        btn_PlayPause->setObjectName("btn_PlayPause");
        btn_PlayPause->setGeometry(QRect(10, 440, 61, 21));
        slider_Scrub = new QSlider(viewLogData);
        slider_Scrub->setObjectName("slider_Scrub");
        slider_Scrub->setGeometry(QRect(80, 440, 321, 20));
        slider_Scrub->setOrientation(Qt::Orientation::Horizontal);
        horizontalLayoutWidget = new QWidget(viewLogData);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 410, 481, 28));
        horizontalLayoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit_PH = new QLineEdit(horizontalLayoutWidget);
        lineEdit_PH->setObjectName("lineEdit_PH");

        horizontalLayout->addWidget(lineEdit_PH);

        label_BP = new QLabel(horizontalLayoutWidget);
        label_BP->setObjectName("label_BP");
        label_BP->setFont(font);

        horizontalLayout->addWidget(label_BP);

        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        label_D = new QLabel(horizontalLayoutWidget);
        label_D->setObjectName("label_D");
        label_D->setFont(font);

        horizontalLayout->addWidget(label_D);

        lineEdit_D = new QLineEdit(horizontalLayoutWidget);
        lineEdit_D->setObjectName("lineEdit_D");

        horizontalLayout->addWidget(lineEdit_D);

        label_Sd = new QLabel(horizontalLayoutWidget);
        label_Sd->setObjectName("label_Sd");
        label_Sd->setFont(font);

        horizontalLayout->addWidget(label_Sd);

        lineEdit_SD = new QLineEdit(horizontalLayoutWidget);
        lineEdit_SD->setObjectName("lineEdit_SD");

        horizontalLayout->addWidget(lineEdit_SD);

        PLOT = new QCustomPlot(viewLogData);
        PLOT->setObjectName("PLOT");
        PLOT->setGeometry(QRect(10, 70, 471, 321));
        formLayoutWidget = new QWidget(viewLogData);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(500, 40, 211, 176));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_8);

        label_WeldTypVal = new QLabel(formLayoutWidget);
        label_WeldTypVal->setObjectName("label_WeldTypVal");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_WeldTypVal);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_10);

        label_TstTypVal = new QLabel(formLayoutWidget);
        label_TstTypVal->setObjectName("label_TstTypVal");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, label_TstTypVal);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_9);

        label_KmVal = new QLabel(formLayoutWidget);
        label_KmVal->setObjectName("label_KmVal");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_KmVal);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_11);

        label_MtrVal = new QLabel(formLayoutWidget);
        label_MtrVal->setObjectName("label_MtrVal");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, label_MtrVal);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName("label_13");
        label_13->setFont(font);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_13);

        label_RailVal = new QLabel(formLayoutWidget);
        label_RailVal->setObjectName("label_RailVal");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, label_RailVal);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_12);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName("label_14");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, label_14);

        horizontalLayoutWidget_2 = new QWidget(viewLogData);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 621, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        label_OpNameVal = new QLabel(horizontalLayoutWidget_2);
        label_OpNameVal->setObjectName("label_OpNameVal");

        horizontalLayout_2->addWidget(label_OpNameVal);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        label_DivVal = new QLabel(horizontalLayoutWidget_2);
        label_DivVal->setObjectName("label_DivVal");

        horizontalLayout_2->addWidget(label_DivVal);

        label_6 = new QLabel(horizontalLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        horizontalLayout_2->addWidget(label_6);

        label_SecVal = new QLabel(horizontalLayoutWidget_2);
        label_SecVal->setObjectName("label_SecVal");

        horizontalLayout_2->addWidget(label_SecVal);

        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        horizontalLayout_2->addWidget(label_7);

        label_LineVal = new QLabel(horizontalLayoutWidget_2);
        label_LineVal->setObjectName("label_LineVal");

        horizontalLayout_2->addWidget(label_LineVal);

        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        label_DateVal = new QLabel(horizontalLayoutWidget_2);
        label_DateVal->setObjectName("label_DateVal");

        horizontalLayout_2->addWidget(label_DateVal);

        label_18 = new QLabel(horizontalLayoutWidget_2);
        label_18->setObjectName("label_18");
        label_18->setFont(font);

        horizontalLayout_2->addWidget(label_18);

        label_TimeVal = new QLabel(horizontalLayoutWidget_2);
        label_TimeVal->setObjectName("label_TimeVal");

        horizontalLayout_2->addWidget(label_TimeVal);

        label_15 = new QLabel(viewLogData);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 50, 71, 18));
        label_15->setFont(font);
        label_LatVal = new QLabel(viewLogData);
        label_LatVal->setObjectName("label_LatVal");
        label_LatVal->setGeometry(QRect(100, 50, 111, 18));
        label_17 = new QLabel(viewLogData);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(220, 50, 81, 18));
        label_17->setFont(font);
        label_LonVal = new QLabel(viewLogData);
        label_LonVal->setObjectName("label_LonVal");
        label_LonVal->setGeometry(QRect(305, 50, 110, 18));
        layoutWidget = new QWidget(viewLogData);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(500, 220, 131, 290));
        formLayout_2 = new QFormLayout(layoutWidget);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_calset = new QLabel(layoutWidget);
        label_calset->setObjectName("label_calset");
        label_calset->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_calset);

        label_calsetval = new QLabel(layoutWidget);
        label_calsetval->setObjectName("label_calsetval");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, label_calsetval);

        label_ch = new QLabel(layoutWidget);
        label_ch->setObjectName("label_ch");
        label_ch->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_ch);

        label_chval = new QLabel(layoutWidget);
        label_chval->setObjectName("label_chval");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, label_chval);

        label_gain = new QLabel(layoutWidget);
        label_gain->setObjectName("label_gain");
        label_gain->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_gain);

        label_gainval = new QLabel(layoutWidget);
        label_gainval->setObjectName("label_gainval");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, label_gainval);

        label_range = new QLabel(layoutWidget);
        label_range->setObjectName("label_range");
        label_range->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, label_range);

        label_Delay = new QLabel(layoutWidget);
        label_Delay->setObjectName("label_Delay");
        label_Delay->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::ItemRole::LabelRole, label_Delay);

        label_DelayVal = new QLabel(layoutWidget);
        label_DelayVal->setObjectName("label_DelayVal");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::FieldRole, label_DelayVal);

        label_Reject = new QLabel(layoutWidget);
        label_Reject->setObjectName("label_Reject");
        label_Reject->setFont(font);

        formLayout_2->setWidget(5, QFormLayout::ItemRole::LabelRole, label_Reject);

        label_Rejectval = new QLabel(layoutWidget);
        label_Rejectval->setObjectName("label_Rejectval");

        formLayout_2->setWidget(5, QFormLayout::ItemRole::FieldRole, label_Rejectval);

        label_Angle = new QLabel(layoutWidget);
        label_Angle->setObjectName("label_Angle");
        label_Angle->setFont(font);

        formLayout_2->setWidget(6, QFormLayout::ItemRole::LabelRole, label_Angle);

        label_Angleval = new QLabel(layoutWidget);
        label_Angleval->setObjectName("label_Angleval");

        formLayout_2->setWidget(6, QFormLayout::ItemRole::FieldRole, label_Angleval);

        label_GTST = new QLabel(layoutWidget);
        label_GTST->setObjectName("label_GTST");
        label_GTST->setFont(font);

        formLayout_2->setWidget(7, QFormLayout::ItemRole::LabelRole, label_GTST);

        lineEdit_GTST = new QLineEdit(layoutWidget);
        lineEdit_GTST->setObjectName("lineEdit_GTST");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_GTST->sizePolicy().hasHeightForWidth());
        lineEdit_GTST->setSizePolicy(sizePolicy);
        lineEdit_GTST->setMinimumSize(QSize(40, 0));
        lineEdit_GTST->setMaximumSize(QSize(45, 16777215));

        formLayout_2->setWidget(7, QFormLayout::ItemRole::FieldRole, lineEdit_GTST);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout_2->setWidget(8, QFormLayout::ItemRole::LabelRole, label_2);

        lineEdit_GTED = new QLineEdit(layoutWidget);
        lineEdit_GTED->setObjectName("lineEdit_GTED");
        sizePolicy.setHeightForWidth(lineEdit_GTED->sizePolicy().hasHeightForWidth());
        lineEdit_GTED->setSizePolicy(sizePolicy);
        lineEdit_GTED->setMaximumSize(QSize(45, 16777215));

        formLayout_2->setWidget(8, QFormLayout::ItemRole::FieldRole, lineEdit_GTED);

        label_TH = new QLabel(layoutWidget);
        label_TH->setObjectName("label_TH");
        label_TH->setFont(font);

        formLayout_2->setWidget(9, QFormLayout::ItemRole::LabelRole, label_TH);

        lineEdit_TH = new QLineEdit(layoutWidget);
        lineEdit_TH->setObjectName("lineEdit_TH");
        lineEdit_TH->setMaximumSize(QSize(45, 16777215));

        formLayout_2->setWidget(9, QFormLayout::ItemRole::FieldRole, lineEdit_TH);

        label_rangeval = new QLabel(layoutWidget);
        label_rangeval->setObjectName("label_rangeval");

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, label_rangeval);


        retranslateUi(viewLogData);

        QMetaObject::connectSlotsByName(viewLogData);
    } // setupUi

    void retranslateUi(QDialog *viewLogData)
    {
        viewLogData->setWindowTitle(QCoreApplication::translate("viewLogData", "Dialog", nullptr));
        label_Time->setText(QCoreApplication::translate("viewLogData", "Time", nullptr));
        btn_PlayPause->setText(QCoreApplication::translate("viewLogData", "Play", nullptr));
        label->setText(QCoreApplication::translate("viewLogData", "PH", nullptr));
        label_BP->setText(QCoreApplication::translate("viewLogData", "BP", nullptr));
        label_D->setText(QCoreApplication::translate("viewLogData", "D", nullptr));
        label_Sd->setText(QCoreApplication::translate("viewLogData", "SD", nullptr));
        label_8->setText(QCoreApplication::translate("viewLogData", "Weld Type :", nullptr));
        label_WeldTypVal->setText(QCoreApplication::translate("viewLogData", "WeldTypVal", nullptr));
        label_10->setText(QCoreApplication::translate("viewLogData", "Test Type :", nullptr));
        label_TstTypVal->setText(QCoreApplication::translate("viewLogData", "TstTypVal", nullptr));
        label_9->setText(QCoreApplication::translate("viewLogData", "Km :", nullptr));
        label_KmVal->setText(QCoreApplication::translate("viewLogData", "KmVal", nullptr));
        label_11->setText(QCoreApplication::translate("viewLogData", "Mtr :", nullptr));
        label_MtrVal->setText(QCoreApplication::translate("viewLogData", "MtrVal", nullptr));
        label_13->setText(QCoreApplication::translate("viewLogData", "Rail :", nullptr));
        label_RailVal->setText(QCoreApplication::translate("viewLogData", "RailVal", nullptr));
        label_12->setText(QCoreApplication::translate("viewLogData", "Weld No :", nullptr));
        label_14->setText(QCoreApplication::translate("viewLogData", "WeldNoVal", nullptr));
        label_3->setText(QCoreApplication::translate("viewLogData", "OP Name :", nullptr));
        label_OpNameVal->setText(QCoreApplication::translate("viewLogData", "Op Na", nullptr));
        label_4->setText(QCoreApplication::translate("viewLogData", "Div :", nullptr));
        label_DivVal->setText(QCoreApplication::translate("viewLogData", "DVal", nullptr));
        label_6->setText(QCoreApplication::translate("viewLogData", "Sec :", nullptr));
        label_SecVal->setText(QCoreApplication::translate("viewLogData", "SVal", nullptr));
        label_7->setText(QCoreApplication::translate("viewLogData", "Line :", nullptr));
        label_LineVal->setText(QCoreApplication::translate("viewLogData", "LiVal", nullptr));
        label_5->setText(QCoreApplication::translate("viewLogData", "Date :", nullptr));
        label_DateVal->setText(QCoreApplication::translate("viewLogData", "DateVal", nullptr));
        label_18->setText(QCoreApplication::translate("viewLogData", "Time :", nullptr));
        label_TimeVal->setText(QCoreApplication::translate("viewLogData", "TimeVal", nullptr));
        label_15->setText(QCoreApplication::translate("viewLogData", "Latitude :", nullptr));
        label_LatVal->setText(QCoreApplication::translate("viewLogData", "LatVal", nullptr));
        label_17->setText(QCoreApplication::translate("viewLogData", "Longitude :", nullptr));
        label_LonVal->setText(QCoreApplication::translate("viewLogData", "LonVal", nullptr));
        label_calset->setText(QCoreApplication::translate("viewLogData", "Calset :", nullptr));
        label_calsetval->setText(QCoreApplication::translate("viewLogData", "calsetval", nullptr));
        label_ch->setText(QCoreApplication::translate("viewLogData", "Ch No. :", nullptr));
        label_chval->setText(QCoreApplication::translate("viewLogData", "chval", nullptr));
        label_gain->setText(QCoreApplication::translate("viewLogData", "Gain :", nullptr));
        label_gainval->setText(QCoreApplication::translate("viewLogData", "gainval", nullptr));
        label_range->setText(QCoreApplication::translate("viewLogData", "Range :", nullptr));
        label_Delay->setText(QCoreApplication::translate("viewLogData", "Delay :", nullptr));
        label_DelayVal->setText(QCoreApplication::translate("viewLogData", "DelayVal", nullptr));
        label_Reject->setText(QCoreApplication::translate("viewLogData", "Reject :", nullptr));
        label_Rejectval->setText(QCoreApplication::translate("viewLogData", "Rejectval", nullptr));
        label_Angle->setText(QCoreApplication::translate("viewLogData", "Angle :", nullptr));
        label_Angleval->setText(QCoreApplication::translate("viewLogData", "AngleVAl", nullptr));
        label_GTST->setText(QCoreApplication::translate("viewLogData", "GTST :", nullptr));
        label_2->setText(QCoreApplication::translate("viewLogData", "GTED :", nullptr));
        label_TH->setText(QCoreApplication::translate("viewLogData", "TH :", nullptr));
        label_rangeval->setText(QCoreApplication::translate("viewLogData", "rangeval", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewLogData: public Ui_viewLogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWLOGDATA_H
