/********************************************************************************
** Form generated from reading UI file 'testscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSCREEN_H
#define UI_TESTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_TestScreen
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *Header_2;
    QHBoxLayout *Header;
    QLabel *label_Machine;
    QLabel *label_Machine_Val;
    QLabel *label_calset;
    QLineEdit *lineEdit_calset;
    QLabel *label_Velocity;
    QLineEdit *lineEdit_Velocity;
    QLabel *label_meter;
    QLabel *label_Mode;
    QLineEdit *lineEdit_Mode;
    QLabel *label_battery;
    QLabel *label_audioIndicator;
    QSpacerItem *horizontalSpacer;
    QLabel *label_pause;
    QLabel *label_freeze;
    QLabel *label_record;
    QFrame *Main_2;
    QHBoxLayout *Main;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *Plot;
    QLabel *label_latitude;
    QLabel *label_logitude;
    QLabel *label_Lat;
    QLabel *label_2;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_PH;
    QLineEdit *lineEdit_PH1;
    QLineEdit *lineEdit_PH2;
    QLabel *label_BP;
    QLineEdit *lineEdit_BP1;
    QLineEdit *lineEdit_BP2;
    QLabel *label_D;
    QLineEdit *lineEdit_D1;
    QLineEdit *lineEdit_D2;
    QLabel *label_SD;
    QLineEdit *lineEdit_SD1;
    QLineEdit *lineEdit_SD2;
    QLabel *label_P2P;
    QLineEdit *lineEdit;
    QFrame *formFrame;
    QFormLayout *formLayout;
    QLabel *label_ch;
    QLineEdit *lineEdit_ch;
    QLabel *label_offset;
    QLabel *label_gain;
    QLineEdit *lineEdit_Gain;
    QLabel *label_Range;
    QLineEdit *lineEdit_Range;
    QLabel *label_Delay;
    QLineEdit *lineEdit_Delay;
    QLabel *label_Reject;
    QLineEdit *lineEdit_Reject;
    QLabel *label_Angle;
    QLineEdit *lineEdit_Angle;
    QLabel *label_G1ST;
    QLineEdit *lineEdit_G1ST;
    QLabel *label_G1ED;
    QLineEdit *lineEdit_G1ED;
    QLabel *label_TH1;
    QLineEdit *lineEdit_TH1;
    QLabel *label_G2ST;
    QLineEdit *lineEdit_G2ST;
    QLabel *label_G2ED;
    QLineEdit *lineEdit_G2ED;
    QLabel *label_TH2;
    QLineEdit *lineEdit_TH2;
    QLabel *label_DAC;
    QLineEdit *lineEdit_CP;

    void setupUi(QMainWindow *TestScreen)
    {
        if (TestScreen->objectName().isEmpty())
            TestScreen->setObjectName("TestScreen");
        TestScreen->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TestScreen->sizePolicy().hasHeightForWidth());
        TestScreen->setSizePolicy(sizePolicy);
        TestScreen->setMinimumSize(QSize(640, 480));
        centralwidget = new QWidget(TestScreen);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(640, 480));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        Header_2 = new QFrame(centralwidget);
        Header_2->setObjectName("Header_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(Header_2->sizePolicy().hasHeightForWidth());
        Header_2->setSizePolicy(sizePolicy1);
        Header_2->setMinimumSize(QSize(40, 35));
        Header_2->setFrameShape(QFrame::Shape::Box);
        Header = new QHBoxLayout(Header_2);
        Header->setObjectName("Header");
        Header->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        label_Machine = new QLabel(Header_2);
        label_Machine->setObjectName("label_Machine");

        Header->addWidget(label_Machine);

        label_Machine_Val = new QLabel(Header_2);
        label_Machine_Val->setObjectName("label_Machine_Val");

        Header->addWidget(label_Machine_Val);

        label_calset = new QLabel(Header_2);
        label_calset->setObjectName("label_calset");

        Header->addWidget(label_calset);

        lineEdit_calset = new QLineEdit(Header_2);
        lineEdit_calset->setObjectName("lineEdit_calset");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_calset->sizePolicy().hasHeightForWidth());
        lineEdit_calset->setSizePolicy(sizePolicy2);
        lineEdit_calset->setMinimumSize(QSize(40, 0));

        Header->addWidget(lineEdit_calset);

        label_Velocity = new QLabel(Header_2);
        label_Velocity->setObjectName("label_Velocity");

        Header->addWidget(label_Velocity);

        lineEdit_Velocity = new QLineEdit(Header_2);
        lineEdit_Velocity->setObjectName("lineEdit_Velocity");
        sizePolicy2.setHeightForWidth(lineEdit_Velocity->sizePolicy().hasHeightForWidth());
        lineEdit_Velocity->setSizePolicy(sizePolicy2);
        lineEdit_Velocity->setMinimumSize(QSize(40, 0));

        Header->addWidget(lineEdit_Velocity);

        label_meter = new QLabel(Header_2);
        label_meter->setObjectName("label_meter");

        Header->addWidget(label_meter);

        label_Mode = new QLabel(Header_2);
        label_Mode->setObjectName("label_Mode");

        Header->addWidget(label_Mode);

        lineEdit_Mode = new QLineEdit(Header_2);
        lineEdit_Mode->setObjectName("lineEdit_Mode");
        sizePolicy.setHeightForWidth(lineEdit_Mode->sizePolicy().hasHeightForWidth());
        lineEdit_Mode->setSizePolicy(sizePolicy);
        lineEdit_Mode->setMinimumSize(QSize(40, 0));

        Header->addWidget(lineEdit_Mode);

        label_battery = new QLabel(Header_2);
        label_battery->setObjectName("label_battery");
        sizePolicy.setHeightForWidth(label_battery->sizePolicy().hasHeightForWidth());
        label_battery->setSizePolicy(sizePolicy);
        label_battery->setMinimumSize(QSize(51, 21));
        label_battery->setPixmap(QPixmap(QString::fromUtf8(":/images/battery_outline.svg")));
        label_battery->setScaledContents(true);

        Header->addWidget(label_battery);

        label_audioIndicator = new QLabel(Header_2);
        label_audioIndicator->setObjectName("label_audioIndicator");
        sizePolicy.setHeightForWidth(label_audioIndicator->sizePolicy().hasHeightForWidth());
        label_audioIndicator->setSizePolicy(sizePolicy);
        label_audioIndicator->setMinimumSize(QSize(41, 31));
        label_audioIndicator->setPixmap(QPixmap(QString::fromUtf8(":/images/After(1).jpg")));
        label_audioIndicator->setScaledContents(true);

        Header->addWidget(label_audioIndicator);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        Header->addItem(horizontalSpacer);

        label_pause = new QLabel(Header_2);
        label_pause->setObjectName("label_pause");
        sizePolicy.setHeightForWidth(label_pause->sizePolicy().hasHeightForWidth());
        label_pause->setSizePolicy(sizePolicy);
        label_pause->setMinimumSize(QSize(30, 30));
        label_pause->setCursor(QCursor(Qt::CursorShape::BlankCursor));
        label_pause->setFrameShape(QFrame::Shape::NoFrame);
        label_pause->setPixmap(QPixmap(QString::fromUtf8(":/images/pause.svg")));
        label_pause->setScaledContents(true);
        label_pause->setAlignment(Qt::AlignmentFlag::AlignCenter);

        Header->addWidget(label_pause);

        label_freeze = new QLabel(Header_2);
        label_freeze->setObjectName("label_freeze");
        sizePolicy.setHeightForWidth(label_freeze->sizePolicy().hasHeightForWidth());
        label_freeze->setSizePolicy(sizePolicy);
        label_freeze->setMinimumSize(QSize(23, 23));
        label_freeze->setFrameShape(QFrame::Shape::Box);

        Header->addWidget(label_freeze);

        label_record = new QLabel(Header_2);
        label_record->setObjectName("label_record");
        sizePolicy.setHeightForWidth(label_record->sizePolicy().hasHeightForWidth());
        label_record->setSizePolicy(sizePolicy);
        label_record->setMinimumSize(QSize(30, 30));
        label_record->setPixmap(QPixmap(QString::fromUtf8(":/images/record-button-svgrepo-com.svg")));
        label_record->setScaledContents(true);

        Header->addWidget(label_record);


        verticalLayout->addWidget(Header_2);

        Main_2 = new QFrame(centralwidget);
        Main_2->setObjectName("Main_2");
        sizePolicy.setHeightForWidth(Main_2->sizePolicy().hasHeightForWidth());
        Main_2->setSizePolicy(sizePolicy);
        Main_2->setMinimumSize(QSize(0, 420));
        Main_2->setFrameShape(QFrame::Shape::NoFrame);
        Main = new QHBoxLayout(Main_2);
        Main->setObjectName("Main");
        verticalFrame = new QFrame(Main_2);
        verticalFrame->setObjectName("verticalFrame");
        verticalFrame->setMinimumSize(QSize(500, 405));
        verticalFrame->setFrameShape(QFrame::Shape::Box);
        verticalLayout_2 = new QVBoxLayout(verticalFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Plot = new QCustomPlot(verticalFrame);
        Plot->setObjectName("Plot");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Plot->sizePolicy().hasHeightForWidth());
        Plot->setSizePolicy(sizePolicy3);
        Plot->setMinimumSize(QSize(485, 335));
        label_latitude = new QLabel(Plot);
        label_latitude->setObjectName("label_latitude");
        label_latitude->setGeometry(QRect(80, 0, 111, 18));
        label_logitude = new QLabel(Plot);
        label_logitude->setObjectName("label_logitude");
        label_logitude->setGeometry(QRect(270, 0, 111, 20));
        label_Lat = new QLabel(Plot);
        label_Lat->setObjectName("label_Lat");
        label_Lat->setGeometry(QRect(40, 0, 31, 18));
        label_2 = new QLabel(Plot);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 0, 31, 18));

        verticalLayout_2->addWidget(Plot);

        horizontalFrame = new QFrame(verticalFrame);
        horizontalFrame->setObjectName("horizontalFrame");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(horizontalFrame->sizePolicy().hasHeightForWidth());
        horizontalFrame->setSizePolicy(sizePolicy4);
        horizontalFrame->setMinimumSize(QSize(0, 28));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        label_PH = new QLabel(horizontalFrame);
        label_PH->setObjectName("label_PH");

        horizontalLayout->addWidget(label_PH);

        lineEdit_PH1 = new QLineEdit(horizontalFrame);
        lineEdit_PH1->setObjectName("lineEdit_PH1");
        sizePolicy2.setHeightForWidth(lineEdit_PH1->sizePolicy().hasHeightForWidth());
        lineEdit_PH1->setSizePolicy(sizePolicy2);
        lineEdit_PH1->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(lineEdit_PH1);

        lineEdit_PH2 = new QLineEdit(horizontalFrame);
        lineEdit_PH2->setObjectName("lineEdit_PH2");
        sizePolicy2.setHeightForWidth(lineEdit_PH2->sizePolicy().hasHeightForWidth());
        lineEdit_PH2->setSizePolicy(sizePolicy2);
        lineEdit_PH2->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(lineEdit_PH2);

        label_BP = new QLabel(horizontalFrame);
        label_BP->setObjectName("label_BP");

        horizontalLayout->addWidget(label_BP);

        lineEdit_BP1 = new QLineEdit(horizontalFrame);
        lineEdit_BP1->setObjectName("lineEdit_BP1");
        sizePolicy2.setHeightForWidth(lineEdit_BP1->sizePolicy().hasHeightForWidth());
        lineEdit_BP1->setSizePolicy(sizePolicy2);
        lineEdit_BP1->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(lineEdit_BP1);

        lineEdit_BP2 = new QLineEdit(horizontalFrame);
        lineEdit_BP2->setObjectName("lineEdit_BP2");
        sizePolicy2.setHeightForWidth(lineEdit_BP2->sizePolicy().hasHeightForWidth());
        lineEdit_BP2->setSizePolicy(sizePolicy2);
        lineEdit_BP2->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(lineEdit_BP2);

        label_D = new QLabel(horizontalFrame);
        label_D->setObjectName("label_D");

        horizontalLayout->addWidget(label_D);

        lineEdit_D1 = new QLineEdit(horizontalFrame);
        lineEdit_D1->setObjectName("lineEdit_D1");
        sizePolicy2.setHeightForWidth(lineEdit_D1->sizePolicy().hasHeightForWidth());
        lineEdit_D1->setSizePolicy(sizePolicy2);
        lineEdit_D1->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(lineEdit_D1);

        lineEdit_D2 = new QLineEdit(horizontalFrame);
        lineEdit_D2->setObjectName("lineEdit_D2");
        sizePolicy2.setHeightForWidth(lineEdit_D2->sizePolicy().hasHeightForWidth());
        lineEdit_D2->setSizePolicy(sizePolicy2);
        lineEdit_D2->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(lineEdit_D2);

        label_SD = new QLabel(horizontalFrame);
        label_SD->setObjectName("label_SD");

        horizontalLayout->addWidget(label_SD);

        lineEdit_SD1 = new QLineEdit(horizontalFrame);
        lineEdit_SD1->setObjectName("lineEdit_SD1");
        sizePolicy2.setHeightForWidth(lineEdit_SD1->sizePolicy().hasHeightForWidth());
        lineEdit_SD1->setSizePolicy(sizePolicy2);
        lineEdit_SD1->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(lineEdit_SD1);

        lineEdit_SD2 = new QLineEdit(horizontalFrame);
        lineEdit_SD2->setObjectName("lineEdit_SD2");
        sizePolicy2.setHeightForWidth(lineEdit_SD2->sizePolicy().hasHeightForWidth());
        lineEdit_SD2->setSizePolicy(sizePolicy2);
        lineEdit_SD2->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(lineEdit_SD2);

        label_P2P = new QLabel(horizontalFrame);
        label_P2P->setObjectName("label_P2P");

        horizontalLayout->addWidget(label_P2P);

        lineEdit = new QLineEdit(horizontalFrame);
        lineEdit->setObjectName("lineEdit");
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addWidget(horizontalFrame);


        Main->addWidget(verticalFrame);

        formFrame = new QFrame(Main_2);
        formFrame->setObjectName("formFrame");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(formFrame->sizePolicy().hasHeightForWidth());
        formFrame->setSizePolicy(sizePolicy5);
        formFrame->setMinimumSize(QSize(100, 405));
        formFrame->setFrameShape(QFrame::Shape::Box);
        formLayout = new QFormLayout(formFrame);
        formLayout->setObjectName("formLayout");
        label_ch = new QLabel(formFrame);
        label_ch->setObjectName("label_ch");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_ch);

        lineEdit_ch = new QLineEdit(formFrame);
        lineEdit_ch->setObjectName("lineEdit_ch");
        sizePolicy.setHeightForWidth(lineEdit_ch->sizePolicy().hasHeightForWidth());
        lineEdit_ch->setSizePolicy(sizePolicy);
        lineEdit_ch->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit_ch);

        label_offset = new QLabel(formFrame);
        label_offset->setObjectName("label_offset");

        formLayout->setWidget(1, QFormLayout::ItemRole::SpanningRole, label_offset);

        label_gain = new QLabel(formFrame);
        label_gain->setObjectName("label_gain");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_gain);

        lineEdit_Gain = new QLineEdit(formFrame);
        lineEdit_Gain->setObjectName("lineEdit_Gain");
        sizePolicy2.setHeightForWidth(lineEdit_Gain->sizePolicy().hasHeightForWidth());
        lineEdit_Gain->setSizePolicy(sizePolicy2);
        lineEdit_Gain->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lineEdit_Gain);

        label_Range = new QLabel(formFrame);
        label_Range->setObjectName("label_Range");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_Range);

        lineEdit_Range = new QLineEdit(formFrame);
        lineEdit_Range->setObjectName("lineEdit_Range");
        sizePolicy2.setHeightForWidth(lineEdit_Range->sizePolicy().hasHeightForWidth());
        lineEdit_Range->setSizePolicy(sizePolicy2);
        lineEdit_Range->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, lineEdit_Range);

        label_Delay = new QLabel(formFrame);
        label_Delay->setObjectName("label_Delay");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_Delay);

        lineEdit_Delay = new QLineEdit(formFrame);
        lineEdit_Delay->setObjectName("lineEdit_Delay");
        sizePolicy2.setHeightForWidth(lineEdit_Delay->sizePolicy().hasHeightForWidth());
        lineEdit_Delay->setSizePolicy(sizePolicy2);
        lineEdit_Delay->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, lineEdit_Delay);

        label_Reject = new QLabel(formFrame);
        label_Reject->setObjectName("label_Reject");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_Reject);

        lineEdit_Reject = new QLineEdit(formFrame);
        lineEdit_Reject->setObjectName("lineEdit_Reject");
        sizePolicy2.setHeightForWidth(lineEdit_Reject->sizePolicy().hasHeightForWidth());
        lineEdit_Reject->setSizePolicy(sizePolicy2);
        lineEdit_Reject->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, lineEdit_Reject);

        label_Angle = new QLabel(formFrame);
        label_Angle->setObjectName("label_Angle");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_Angle);

        lineEdit_Angle = new QLineEdit(formFrame);
        lineEdit_Angle->setObjectName("lineEdit_Angle");
        sizePolicy2.setHeightForWidth(lineEdit_Angle->sizePolicy().hasHeightForWidth());
        lineEdit_Angle->setSizePolicy(sizePolicy2);
        lineEdit_Angle->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, lineEdit_Angle);

        label_G1ST = new QLabel(formFrame);
        label_G1ST->setObjectName("label_G1ST");

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_G1ST);

        lineEdit_G1ST = new QLineEdit(formFrame);
        lineEdit_G1ST->setObjectName("lineEdit_G1ST");
        sizePolicy2.setHeightForWidth(lineEdit_G1ST->sizePolicy().hasHeightForWidth());
        lineEdit_G1ST->setSizePolicy(sizePolicy2);
        lineEdit_G1ST->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, lineEdit_G1ST);

        label_G1ED = new QLabel(formFrame);
        label_G1ED->setObjectName("label_G1ED");

        formLayout->setWidget(8, QFormLayout::ItemRole::LabelRole, label_G1ED);

        lineEdit_G1ED = new QLineEdit(formFrame);
        lineEdit_G1ED->setObjectName("lineEdit_G1ED");
        sizePolicy2.setHeightForWidth(lineEdit_G1ED->sizePolicy().hasHeightForWidth());
        lineEdit_G1ED->setSizePolicy(sizePolicy2);
        lineEdit_G1ED->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, lineEdit_G1ED);

        label_TH1 = new QLabel(formFrame);
        label_TH1->setObjectName("label_TH1");

        formLayout->setWidget(9, QFormLayout::ItemRole::LabelRole, label_TH1);

        lineEdit_TH1 = new QLineEdit(formFrame);
        lineEdit_TH1->setObjectName("lineEdit_TH1");
        sizePolicy2.setHeightForWidth(lineEdit_TH1->sizePolicy().hasHeightForWidth());
        lineEdit_TH1->setSizePolicy(sizePolicy2);
        lineEdit_TH1->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(9, QFormLayout::ItemRole::FieldRole, lineEdit_TH1);

        label_G2ST = new QLabel(formFrame);
        label_G2ST->setObjectName("label_G2ST");

        formLayout->setWidget(10, QFormLayout::ItemRole::LabelRole, label_G2ST);

        lineEdit_G2ST = new QLineEdit(formFrame);
        lineEdit_G2ST->setObjectName("lineEdit_G2ST");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lineEdit_G2ST->sizePolicy().hasHeightForWidth());
        lineEdit_G2ST->setSizePolicy(sizePolicy6);
        lineEdit_G2ST->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(10, QFormLayout::ItemRole::FieldRole, lineEdit_G2ST);

        label_G2ED = new QLabel(formFrame);
        label_G2ED->setObjectName("label_G2ED");

        formLayout->setWidget(11, QFormLayout::ItemRole::LabelRole, label_G2ED);

        lineEdit_G2ED = new QLineEdit(formFrame);
        lineEdit_G2ED->setObjectName("lineEdit_G2ED");
        sizePolicy2.setHeightForWidth(lineEdit_G2ED->sizePolicy().hasHeightForWidth());
        lineEdit_G2ED->setSizePolicy(sizePolicy2);
        lineEdit_G2ED->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(11, QFormLayout::ItemRole::FieldRole, lineEdit_G2ED);

        label_TH2 = new QLabel(formFrame);
        label_TH2->setObjectName("label_TH2");

        formLayout->setWidget(12, QFormLayout::ItemRole::LabelRole, label_TH2);

        lineEdit_TH2 = new QLineEdit(formFrame);
        lineEdit_TH2->setObjectName("lineEdit_TH2");
        sizePolicy2.setHeightForWidth(lineEdit_TH2->sizePolicy().hasHeightForWidth());
        lineEdit_TH2->setSizePolicy(sizePolicy2);
        lineEdit_TH2->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(12, QFormLayout::ItemRole::FieldRole, lineEdit_TH2);

        label_DAC = new QLabel(formFrame);
        label_DAC->setObjectName("label_DAC");

        formLayout->setWidget(14, QFormLayout::ItemRole::LabelRole, label_DAC);

        lineEdit_CP = new QLineEdit(formFrame);
        lineEdit_CP->setObjectName("lineEdit_CP");
        sizePolicy2.setHeightForWidth(lineEdit_CP->sizePolicy().hasHeightForWidth());
        lineEdit_CP->setSizePolicy(sizePolicy2);
        lineEdit_CP->setMinimumSize(QSize(40, 0));

        formLayout->setWidget(14, QFormLayout::ItemRole::FieldRole, lineEdit_CP);


        Main->addWidget(formFrame);


        verticalLayout->addWidget(Main_2);

        TestScreen->setCentralWidget(centralwidget);

        retranslateUi(TestScreen);

        QMetaObject::connectSlotsByName(TestScreen);
    } // setupUi

    void retranslateUi(QMainWindow *TestScreen)
    {
        TestScreen->setWindowTitle(QCoreApplication::translate("TestScreen", "TestScreen", nullptr));
        label_Machine->setText(QCoreApplication::translate("TestScreen", "MC No.", nullptr));
        label_Machine_Val->setText(QCoreApplication::translate("TestScreen", "0000", nullptr));
        label_calset->setText(QCoreApplication::translate("TestScreen", "CalSet", nullptr));
        label_Velocity->setText(QCoreApplication::translate("TestScreen", "Velocity", nullptr));
        label_meter->setText(QCoreApplication::translate("TestScreen", "m/s", nullptr));
        label_Mode->setText(QCoreApplication::translate("TestScreen", "Mode", nullptr));
        label_battery->setText(QString());
        label_audioIndicator->setText(QString());
        label_pause->setText(QString());
        label_freeze->setText(QCoreApplication::translate("TestScreen", "F", nullptr));
        label_record->setText(QString());
        label_latitude->setText(QString());
        label_logitude->setText(QString());
        label_Lat->setText(QCoreApplication::translate("TestScreen", "Lat :", nullptr));
        label_2->setText(QCoreApplication::translate("TestScreen", "Lon :", nullptr));
        label_PH->setText(QCoreApplication::translate("TestScreen", "PH", nullptr));
        label_BP->setText(QCoreApplication::translate("TestScreen", "BP", nullptr));
        label_D->setText(QCoreApplication::translate("TestScreen", "D", nullptr));
        lineEdit_D1->setText(QString());
        label_SD->setText(QCoreApplication::translate("TestScreen", "SD", nullptr));
        label_P2P->setText(QCoreApplication::translate("TestScreen", "P2P", nullptr));
        label_ch->setText(QCoreApplication::translate("TestScreen", "Ch No", nullptr));
        label_offset->setText(QCoreApplication::translate("TestScreen", "offset :", nullptr));
        label_gain->setText(QCoreApplication::translate("TestScreen", "Gain", nullptr));
        label_Range->setText(QCoreApplication::translate("TestScreen", "Range", nullptr));
        label_Delay->setText(QCoreApplication::translate("TestScreen", "Delay", nullptr));
        label_Reject->setText(QCoreApplication::translate("TestScreen", "Reject", nullptr));
        label_Angle->setText(QCoreApplication::translate("TestScreen", "Angle", nullptr));
        label_G1ST->setText(QCoreApplication::translate("TestScreen", "G1ST", nullptr));
        label_G1ED->setText(QCoreApplication::translate("TestScreen", "G1ED", nullptr));
        label_TH1->setText(QCoreApplication::translate("TestScreen", "TH1", nullptr));
        label_G2ST->setText(QCoreApplication::translate("TestScreen", "G2ST", nullptr));
        label_G2ED->setText(QCoreApplication::translate("TestScreen", "G2ED", nullptr));
        label_TH2->setText(QCoreApplication::translate("TestScreen", "TH2", nullptr));
        label_DAC->setText(QCoreApplication::translate("TestScreen", "DAC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestScreen: public Ui_TestScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSCREEN_H
