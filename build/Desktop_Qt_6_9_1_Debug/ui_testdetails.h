/********************************************************************************
** Form generated from reading UI file 'testdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDETAILS_H
#define UI_TESTDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestDetails
{
public:
    QLabel *label_OthersObservations;
    QPushButton *pushButton_Preview;
    QLineEdit *lineEdit_OtherObservation;
    QLabel *label_DefectDetails;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_UnitNo;
    QLabel *label_Model;
    QLabel *label_UnitNO;
    QLabel *label_Date;
    QLineEdit *lineEdit_Model;
    QLineEdit *lineEdit_Date;
    QLabel *label_Time;
    QLineEdit *lineEdit_Time;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_TP;
    QLineEdit *lineEdit_Km;
    QLineEdit *lineEdit_Mtr;
    QLabel *label_WeldType;
    QLabel *label_KM;
    QLineEdit *lineEdit_Stations;
    QLabel *label_TP;
    QLabel *label_Mtr;
    QComboBox *comboBox_WeldType;
    QLabel *label_Stations;
    QLabel *label_Rail;
    QComboBox *comboBox_Rail;
    QLabel *label_Weldno;
    QLineEdit *lineEdit_Weldno;
    QLabel *label_CH;
    QLineEdit *lineEdit_CH;
    QLabel *label_Calset;
    QLineEdit *lineEdit_Calset;
    QLabel *label_Probe;
    QComboBox *comboBox_Probe;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox_Rollmark1;
    QComboBox *comboBox_Month;
    QLabel *label_Rollingmark;
    QComboBox *comboBox_kg;
    QLineEdit *lineEdit_Rollmarkyear;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_Mode;
    QComboBox *comboBox_Type;
    QComboBox *comboBox_Class;
    QLabel *label_Class;
    QLabel *label_Type;
    QLabel *label_LocOfDefect;
    QComboBox *comboBox_Mode;
    QComboBox *comboBox_LocOfDefect;
    QLabel *label_FP;
    QComboBox *comboBox_FP;
    QLabel *label_Prevdefectdetails;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_PrevHM;
    QLineEdit *lineEdit_PrevPH;
    QComboBox *comboBox;

    void setupUi(QDialog *TestDetails)
    {
        if (TestDetails->objectName().isEmpty())
            TestDetails->setObjectName("TestDetails");
        TestDetails->resize(640, 480);
        TestDetails->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        TestDetails->setAcceptDrops(true);
        label_OthersObservations = new QLabel(TestDetails);
        label_OthersObservations->setObjectName("label_OthersObservations");
        label_OthersObservations->setGeometry(QRect(10, 440, 171, 20));
        pushButton_Preview = new QPushButton(TestDetails);
        pushButton_Preview->setObjectName("pushButton_Preview");
        pushButton_Preview->setGeometry(QRect(540, 450, 93, 29));
        lineEdit_OtherObservation = new QLineEdit(TestDetails);
        lineEdit_OtherObservation->setObjectName("lineEdit_OtherObservation");
        lineEdit_OtherObservation->setGeometry(QRect(180, 435, 341, 41));
        lineEdit_OtherObservation->setAcceptDrops(false);
        label_DefectDetails = new QLabel(TestDetails);
        label_DefectDetails->setObjectName("label_DefectDetails");
        label_DefectDetails->setGeometry(QRect(230, 20, 161, 18));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_DefectDetails->setFont(font);
        gridLayoutWidget = new QWidget(TestDetails);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 50, 621, 52));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_UnitNo = new QLineEdit(gridLayoutWidget);
        lineEdit_UnitNo->setObjectName("lineEdit_UnitNo");
        lineEdit_UnitNo->setReadOnly(true);

        gridLayout->addWidget(lineEdit_UnitNo, 1, 1, 1, 1);

        label_Model = new QLabel(gridLayoutWidget);
        label_Model->setObjectName("label_Model");
        QFont font1;
        font1.setBold(true);
        label_Model->setFont(font1);

        gridLayout->addWidget(label_Model, 0, 0, 1, 1);

        label_UnitNO = new QLabel(gridLayoutWidget);
        label_UnitNO->setObjectName("label_UnitNO");
        label_UnitNO->setFont(font1);

        gridLayout->addWidget(label_UnitNO, 0, 1, 1, 1);

        label_Date = new QLabel(gridLayoutWidget);
        label_Date->setObjectName("label_Date");
        label_Date->setFont(font1);

        gridLayout->addWidget(label_Date, 0, 2, 1, 1);

        lineEdit_Model = new QLineEdit(gridLayoutWidget);
        lineEdit_Model->setObjectName("lineEdit_Model");
        lineEdit_Model->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Model, 1, 0, 1, 1);

        lineEdit_Date = new QLineEdit(gridLayoutWidget);
        lineEdit_Date->setObjectName("lineEdit_Date");

        gridLayout->addWidget(lineEdit_Date, 1, 2, 1, 1);

        label_Time = new QLabel(gridLayoutWidget);
        label_Time->setObjectName("label_Time");
        label_Time->setFont(font1);

        gridLayout->addWidget(label_Time, 0, 3, 1, 1);

        lineEdit_Time = new QLineEdit(gridLayoutWidget);
        lineEdit_Time->setObjectName("lineEdit_Time");

        gridLayout->addWidget(lineEdit_Time, 1, 3, 1, 1);

        gridLayoutWidget_2 = new QWidget(TestDetails);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 110, 621, 121));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_TP = new QLineEdit(gridLayoutWidget_2);
        lineEdit_TP->setObjectName("lineEdit_TP");

        gridLayout_2->addWidget(lineEdit_TP, 2, 2, 1, 1);

        lineEdit_Km = new QLineEdit(gridLayoutWidget_2);
        lineEdit_Km->setObjectName("lineEdit_Km");

        gridLayout_2->addWidget(lineEdit_Km, 2, 0, 1, 1);

        lineEdit_Mtr = new QLineEdit(gridLayoutWidget_2);
        lineEdit_Mtr->setObjectName("lineEdit_Mtr");

        gridLayout_2->addWidget(lineEdit_Mtr, 2, 1, 1, 1);

        label_WeldType = new QLabel(gridLayoutWidget_2);
        label_WeldType->setObjectName("label_WeldType");
        label_WeldType->setFont(font1);

        gridLayout_2->addWidget(label_WeldType, 0, 3, 1, 1);

        label_KM = new QLabel(gridLayoutWidget_2);
        label_KM->setObjectName("label_KM");
        label_KM->setFont(font1);

        gridLayout_2->addWidget(label_KM, 0, 0, 1, 1);

        lineEdit_Stations = new QLineEdit(gridLayoutWidget_2);
        lineEdit_Stations->setObjectName("lineEdit_Stations");

        gridLayout_2->addWidget(lineEdit_Stations, 2, 4, 1, 1);

        label_TP = new QLabel(gridLayoutWidget_2);
        label_TP->setObjectName("label_TP");
        label_TP->setFont(font1);

        gridLayout_2->addWidget(label_TP, 0, 2, 1, 1);

        label_Mtr = new QLabel(gridLayoutWidget_2);
        label_Mtr->setObjectName("label_Mtr");
        label_Mtr->setFont(font1);

        gridLayout_2->addWidget(label_Mtr, 0, 1, 1, 1);

        comboBox_WeldType = new QComboBox(gridLayoutWidget_2);
        comboBox_WeldType->addItem(QString());
        comboBox_WeldType->addItem(QString());
        comboBox_WeldType->addItem(QString());
        comboBox_WeldType->addItem(QString());
        comboBox_WeldType->addItem(QString());
        comboBox_WeldType->addItem(QString());
        comboBox_WeldType->setObjectName("comboBox_WeldType");
        comboBox_WeldType->setMinimumSize(QSize(100, 0));

        gridLayout_2->addWidget(comboBox_WeldType, 2, 3, 1, 1);

        label_Stations = new QLabel(gridLayoutWidget_2);
        label_Stations->setObjectName("label_Stations");
        label_Stations->setFont(font1);

        gridLayout_2->addWidget(label_Stations, 0, 4, 1, 1);

        label_Rail = new QLabel(gridLayoutWidget_2);
        label_Rail->setObjectName("label_Rail");
        label_Rail->setFont(font1);

        gridLayout_2->addWidget(label_Rail, 3, 0, 1, 1);

        comboBox_Rail = new QComboBox(gridLayoutWidget_2);
        comboBox_Rail->addItem(QString());
        comboBox_Rail->addItem(QString());
        comboBox_Rail->setObjectName("comboBox_Rail");

        gridLayout_2->addWidget(comboBox_Rail, 4, 0, 1, 1);

        label_Weldno = new QLabel(gridLayoutWidget_2);
        label_Weldno->setObjectName("label_Weldno");
        label_Weldno->setFont(font1);

        gridLayout_2->addWidget(label_Weldno, 3, 1, 1, 1);

        lineEdit_Weldno = new QLineEdit(gridLayoutWidget_2);
        lineEdit_Weldno->setObjectName("lineEdit_Weldno");

        gridLayout_2->addWidget(lineEdit_Weldno, 4, 1, 1, 1);

        label_CH = new QLabel(gridLayoutWidget_2);
        label_CH->setObjectName("label_CH");
        label_CH->setFont(font1);

        gridLayout_2->addWidget(label_CH, 3, 2, 1, 1);

        lineEdit_CH = new QLineEdit(gridLayoutWidget_2);
        lineEdit_CH->setObjectName("lineEdit_CH");
        lineEdit_CH->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_CH, 4, 2, 1, 1);

        label_Calset = new QLabel(gridLayoutWidget_2);
        label_Calset->setObjectName("label_Calset");
        label_Calset->setFont(font1);

        gridLayout_2->addWidget(label_Calset, 3, 3, 1, 1);

        lineEdit_Calset = new QLineEdit(gridLayoutWidget_2);
        lineEdit_Calset->setObjectName("lineEdit_Calset");
        lineEdit_Calset->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Calset, 4, 3, 1, 1);

        label_Probe = new QLabel(gridLayoutWidget_2);
        label_Probe->setObjectName("label_Probe");
        label_Probe->setFont(font1);

        gridLayout_2->addWidget(label_Probe, 3, 4, 1, 1);

        comboBox_Probe = new QComboBox(gridLayoutWidget_2);
        comboBox_Probe->addItem(QString());
        comboBox_Probe->addItem(QString());
        comboBox_Probe->addItem(QString());
        comboBox_Probe->addItem(QString());
        comboBox_Probe->addItem(QString());
        comboBox_Probe->addItem(QString());
        comboBox_Probe->addItem(QString());
        comboBox_Probe->setObjectName("comboBox_Probe");

        gridLayout_2->addWidget(comboBox_Probe, 4, 4, 1, 1);

        gridLayoutWidget_3 = new QWidget(TestDetails);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(140, 230, 321, 59));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox_Rollmark1 = new QComboBox(gridLayoutWidget_3);
        comboBox_Rollmark1->addItem(QString());
        comboBox_Rollmark1->addItem(QString());
        comboBox_Rollmark1->addItem(QString());
        comboBox_Rollmark1->addItem(QString());
        comboBox_Rollmark1->addItem(QString());
        comboBox_Rollmark1->addItem(QString());
        comboBox_Rollmark1->setObjectName("comboBox_Rollmark1");
        comboBox_Rollmark1->setMinimumSize(QSize(0, 25));

        gridLayout_3->addWidget(comboBox_Rollmark1, 1, 0, 1, 1);

        comboBox_Month = new QComboBox(gridLayoutWidget_3);
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->addItem(QString());
        comboBox_Month->setObjectName("comboBox_Month");

        gridLayout_3->addWidget(comboBox_Month, 1, 2, 1, 1);

        label_Rollingmark = new QLabel(gridLayoutWidget_3);
        label_Rollingmark->setObjectName("label_Rollingmark");
        label_Rollingmark->setMinimumSize(QSize(0, 25));
        label_Rollingmark->setFont(font1);

        gridLayout_3->addWidget(label_Rollingmark, 0, 0, 1, 1);

        comboBox_kg = new QComboBox(gridLayoutWidget_3);
        comboBox_kg->addItem(QString());
        comboBox_kg->addItem(QString());
        comboBox_kg->addItem(QString());
        comboBox_kg->addItem(QString());
        comboBox_kg->setObjectName("comboBox_kg");

        gridLayout_3->addWidget(comboBox_kg, 1, 1, 1, 1);

        lineEdit_Rollmarkyear = new QLineEdit(gridLayoutWidget_3);
        lineEdit_Rollmarkyear->setObjectName("lineEdit_Rollmarkyear");

        gridLayout_3->addWidget(lineEdit_Rollmarkyear, 1, 3, 1, 1);

        gridLayoutWidget_4 = new QWidget(TestDetails);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(10, 290, 621, 61));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_Mode = new QLabel(gridLayoutWidget_4);
        label_Mode->setObjectName("label_Mode");
        label_Mode->setFont(font1);

        gridLayout_4->addWidget(label_Mode, 0, 0, 1, 1);

        comboBox_Type = new QComboBox(gridLayoutWidget_4);
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->setObjectName("comboBox_Type");

        gridLayout_4->addWidget(comboBox_Type, 1, 2, 1, 1);

        comboBox_Class = new QComboBox(gridLayoutWidget_4);
        comboBox_Class->addItem(QString());
        comboBox_Class->addItem(QString());
        comboBox_Class->addItem(QString());
        comboBox_Class->addItem(QString());
        comboBox_Class->addItem(QString());
        comboBox_Class->addItem(QString());
        comboBox_Class->addItem(QString());
        comboBox_Class->addItem(QString());
        comboBox_Class->addItem(QString());
        comboBox_Class->setObjectName("comboBox_Class");

        gridLayout_4->addWidget(comboBox_Class, 1, 3, 1, 1);

        label_Class = new QLabel(gridLayoutWidget_4);
        label_Class->setObjectName("label_Class");
        label_Class->setFont(font1);

        gridLayout_4->addWidget(label_Class, 0, 3, 1, 1);

        label_Type = new QLabel(gridLayoutWidget_4);
        label_Type->setObjectName("label_Type");
        label_Type->setFont(font1);

        gridLayout_4->addWidget(label_Type, 0, 2, 1, 1);

        label_LocOfDefect = new QLabel(gridLayoutWidget_4);
        label_LocOfDefect->setObjectName("label_LocOfDefect");

        gridLayout_4->addWidget(label_LocOfDefect, 0, 1, 1, 1);

        comboBox_Mode = new QComboBox(gridLayoutWidget_4);
        comboBox_Mode->addItem(QString());
        comboBox_Mode->addItem(QString());
        comboBox_Mode->setObjectName("comboBox_Mode");

        gridLayout_4->addWidget(comboBox_Mode, 1, 0, 1, 1);

        comboBox_LocOfDefect = new QComboBox(gridLayoutWidget_4);
        comboBox_LocOfDefect->addItem(QString());
        comboBox_LocOfDefect->addItem(QString());
        comboBox_LocOfDefect->addItem(QString());
        comboBox_LocOfDefect->addItem(QString());
        comboBox_LocOfDefect->setObjectName("comboBox_LocOfDefect");

        gridLayout_4->addWidget(comboBox_LocOfDefect, 1, 1, 1, 1);

        label_FP = new QLabel(gridLayoutWidget_4);
        label_FP->setObjectName("label_FP");
        label_FP->setFont(font1);

        gridLayout_4->addWidget(label_FP, 0, 4, 1, 1);

        comboBox_FP = new QComboBox(gridLayoutWidget_4);
        comboBox_FP->addItem(QString());
        comboBox_FP->addItem(QString());
        comboBox_FP->addItem(QString());
        comboBox_FP->addItem(QString());
        comboBox_FP->addItem(QString());
        comboBox_FP->setObjectName("comboBox_FP");

        gridLayout_4->addWidget(comboBox_FP, 1, 4, 1, 1);

        label_Prevdefectdetails = new QLabel(TestDetails);
        label_Prevdefectdetails->setObjectName("label_Prevdefectdetails");
        label_Prevdefectdetails->setGeometry(QRect(10, 360, 201, 17));
        label_Prevdefectdetails->setFont(font1);
        gridLayoutWidget_5 = new QWidget(TestDetails);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(20, 380, 601, 50));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget_5);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        gridLayout_5->addWidget(label_3, 0, 2, 1, 1);

        label = new QLabel(gridLayoutWidget_5);
        label->setObjectName("label");
        label->setFont(font1);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_5);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout_5->addWidget(label_2, 0, 1, 1, 1);

        lineEdit_PrevHM = new QLineEdit(gridLayoutWidget_5);
        lineEdit_PrevHM->setObjectName("lineEdit_PrevHM");

        gridLayout_5->addWidget(lineEdit_PrevHM, 1, 0, 1, 1);

        lineEdit_PrevPH = new QLineEdit(gridLayoutWidget_5);
        lineEdit_PrevPH->setObjectName("lineEdit_PrevPH");

        gridLayout_5->addWidget(lineEdit_PrevPH, 1, 1, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget_5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(115, 0));

        gridLayout_5->addWidget(comboBox, 1, 2, 1, 1);


        retranslateUi(TestDetails);

        QMetaObject::connectSlotsByName(TestDetails);
    } // setupUi

    void retranslateUi(QDialog *TestDetails)
    {
        label_OthersObservations->setText(QCoreApplication::translate("TestDetails", "Remarks / Observations :", nullptr));
        pushButton_Preview->setText(QCoreApplication::translate("TestDetails", "Preview", nullptr));
        lineEdit_OtherObservation->setText(QString());
        label_DefectDetails->setText(QCoreApplication::translate("TestDetails", "DEFECT DETAILS", nullptr));
        label_Model->setText(QCoreApplication::translate("TestDetails", "Model :", nullptr));
        label_UnitNO->setText(QCoreApplication::translate("TestDetails", "Unit No :", nullptr));
        label_Date->setText(QCoreApplication::translate("TestDetails", "Date:", nullptr));
        lineEdit_Model->setText(QCoreApplication::translate("TestDetails", "WT-2311D", nullptr));
        lineEdit_Date->setText(QString());
        label_Time->setText(QCoreApplication::translate("TestDetails", "Time:", nullptr));
        lineEdit_Time->setText(QString());
        lineEdit_Km->setText(QString());
        label_WeldType->setText(QCoreApplication::translate("TestDetails", "Weld Type :", nullptr));
        label_KM->setText(QCoreApplication::translate("TestDetails", "KM :", nullptr));
        label_TP->setText(QCoreApplication::translate("TestDetails", "TP :", nullptr));
        label_Mtr->setText(QCoreApplication::translate("TestDetails", "Mtr :", nullptr));
        comboBox_WeldType->setItemText(0, QCoreApplication::translate("TestDetails", "AT Weld", nullptr));
        comboBox_WeldType->setItemText(1, QCoreApplication::translate("TestDetails", "FB Weld", nullptr));
        comboBox_WeldType->setItemText(2, QCoreApplication::translate("TestDetails", "SEJ", nullptr));
        comboBox_WeldType->setItemText(3, QCoreApplication::translate("TestDetails", "Points", nullptr));
        comboBox_WeldType->setItemText(4, QCoreApplication::translate("TestDetails", "Rail", nullptr));
        comboBox_WeldType->setItemText(5, QCoreApplication::translate("TestDetails", "Gas Pressure Weld", nullptr));

        label_Stations->setText(QCoreApplication::translate("TestDetails", "Stations :", nullptr));
        label_Rail->setText(QCoreApplication::translate("TestDetails", "Rail :", nullptr));
        comboBox_Rail->setItemText(0, QCoreApplication::translate("TestDetails", "LH", nullptr));
        comboBox_Rail->setItemText(1, QCoreApplication::translate("TestDetails", "RH", nullptr));

        label_Weldno->setText(QCoreApplication::translate("TestDetails", "Weld  No. :", nullptr));
        label_CH->setText(QCoreApplication::translate("TestDetails", "CH. :", nullptr));
        label_Calset->setText(QCoreApplication::translate("TestDetails", "Calset :", nullptr));
        label_Probe->setText(QCoreApplication::translate("TestDetails", "Probe :", nullptr));
        comboBox_Probe->setItemText(0, QCoreApplication::translate("TestDetails", "0\302\260", nullptr));
        comboBox_Probe->setItemText(1, QCoreApplication::translate("TestDetails", "17.5\302\260", nullptr));
        comboBox_Probe->setItemText(2, QCoreApplication::translate("TestDetails", "37\302\260", nullptr));
        comboBox_Probe->setItemText(3, QCoreApplication::translate("TestDetails", "45\302\260", nullptr));
        comboBox_Probe->setItemText(4, QCoreApplication::translate("TestDetails", "70\302\260", nullptr));
        comboBox_Probe->setItemText(5, QCoreApplication::translate("TestDetails", "2x70", nullptr));
        comboBox_Probe->setItemText(6, QCoreApplication::translate("TestDetails", "2x45", nullptr));

        comboBox_Rollmark1->setItemText(0, QCoreApplication::translate("TestDetails", "880 O SAIL", nullptr));
        comboBox_Rollmark1->setItemText(1, QCoreApplication::translate("TestDetails", "R260 O SAIL", nullptr));
        comboBox_Rollmark1->setItemText(2, QCoreApplication::translate("TestDetails", "710 O SAIL", nullptr));
        comboBox_Rollmark1->setItemText(3, QCoreApplication::translate("TestDetails", "British Steel", nullptr));
        comboBox_Rollmark1->setItemText(4, QCoreApplication::translate("TestDetails", "MM IRS HSB", nullptr));
        comboBox_Rollmark1->setItemText(5, QCoreApplication::translate("TestDetails", "UIC O SAIL", nullptr));

        comboBox_Month->setItemText(0, QCoreApplication::translate("TestDetails", "I", nullptr));
        comboBox_Month->setItemText(1, QCoreApplication::translate("TestDetails", "II", nullptr));
        comboBox_Month->setItemText(2, QCoreApplication::translate("TestDetails", "III", nullptr));
        comboBox_Month->setItemText(3, QCoreApplication::translate("TestDetails", "IV", nullptr));
        comboBox_Month->setItemText(4, QCoreApplication::translate("TestDetails", "V", nullptr));
        comboBox_Month->setItemText(5, QCoreApplication::translate("TestDetails", "VI", nullptr));
        comboBox_Month->setItemText(6, QCoreApplication::translate("TestDetails", "VII", nullptr));
        comboBox_Month->setItemText(7, QCoreApplication::translate("TestDetails", "VIII", nullptr));
        comboBox_Month->setItemText(8, QCoreApplication::translate("TestDetails", "IX", nullptr));
        comboBox_Month->setItemText(9, QCoreApplication::translate("TestDetails", "X", nullptr));
        comboBox_Month->setItemText(10, QCoreApplication::translate("TestDetails", "XI", nullptr));
        comboBox_Month->setItemText(11, QCoreApplication::translate("TestDetails", "XII", nullptr));

        label_Rollingmark->setText(QCoreApplication::translate("TestDetails", "Rolling Mark :", nullptr));
        comboBox_kg->setItemText(0, QCoreApplication::translate("TestDetails", "60", nullptr));
        comboBox_kg->setItemText(1, QCoreApplication::translate("TestDetails", "52", nullptr));
        comboBox_kg->setItemText(2, QCoreApplication::translate("TestDetails", "90R", nullptr));
        comboBox_kg->setItemText(3, QCoreApplication::translate("TestDetails", "36", nullptr));

        label_Mode->setText(QCoreApplication::translate("TestDetails", "Mode :", nullptr));
        comboBox_Type->setItemText(0, QCoreApplication::translate("TestDetails", "HLC", nullptr));
        comboBox_Type->setItemText(1, QCoreApplication::translate("TestDetails", "VTC", nullptr));
        comboBox_Type->setItemText(2, QCoreApplication::translate("TestDetails", "VLC", nullptr));

        comboBox_Class->setItemText(0, QCoreApplication::translate("TestDetails", "DFWO", nullptr));
        comboBox_Class->setItemText(1, QCoreApplication::translate("TestDetails", "DFWR", nullptr));
        comboBox_Class->setItemText(2, QCoreApplication::translate("TestDetails", "DFWN", nullptr));
        comboBox_Class->setItemText(3, QCoreApplication::translate("TestDetails", "GW", nullptr));
        comboBox_Class->setItemText(4, QCoreApplication::translate("TestDetails", "NR", nullptr));
        comboBox_Class->setItemText(5, QCoreApplication::translate("TestDetails", "OBS", nullptr));
        comboBox_Class->setItemText(6, QCoreApplication::translate("TestDetails", "OBSW", nullptr));
        comboBox_Class->setItemText(7, QCoreApplication::translate("TestDetails", "IMRW", nullptr));
        comboBox_Class->setItemText(8, QCoreApplication::translate("TestDetails", "No Defect", nullptr));

        label_Class->setText(QCoreApplication::translate("TestDetails", "Class :", nullptr));
        label_Type->setText(QCoreApplication::translate("TestDetails", "Type :", nullptr));
        label_LocOfDefect->setText(QCoreApplication::translate("TestDetails", "Location of Defect :", nullptr));
        comboBox_Mode->setItemText(0, QCoreApplication::translate("TestDetails", "SC", nullptr));
        comboBox_Mode->setItemText(1, QCoreApplication::translate("TestDetails", "DC", nullptr));

        comboBox_LocOfDefect->setItemText(0, QCoreApplication::translate("TestDetails", "Head", nullptr));
        comboBox_LocOfDefect->setItemText(1, QCoreApplication::translate("TestDetails", "Web", nullptr));
        comboBox_LocOfDefect->setItemText(2, QCoreApplication::translate("TestDetails", "Flange", nullptr));
        comboBox_LocOfDefect->setItemText(3, QCoreApplication::translate("TestDetails", "Foot", nullptr));

        label_FP->setText(QCoreApplication::translate("TestDetails", "Jog Plate :", nullptr));
        comboBox_FP->setItemText(0, QCoreApplication::translate("TestDetails", "YES", nullptr));
        comboBox_FP->setItemText(1, QCoreApplication::translate("TestDetails", "NO", nullptr));
        comboBox_FP->setItemText(2, QCoreApplication::translate("TestDetails", "FP/B", nullptr));
        comboBox_FP->setItemText(3, QCoreApplication::translate("TestDetails", "FP/C", nullptr));
        comboBox_FP->setItemText(4, QCoreApplication::translate("TestDetails", "NFP", nullptr));

        label_Prevdefectdetails->setText(QCoreApplication::translate("TestDetails", "Previous Defect Details :", nullptr));
        label_3->setText(QCoreApplication::translate("TestDetails", "Class :", nullptr));
        label->setText(QCoreApplication::translate("TestDetails", "HM/BP :", nullptr));
        label_2->setText(QCoreApplication::translate("TestDetails", "PH :", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("TestDetails", "GW", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TestDetails", "DFWN", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("TestDetails", "DFWR", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("TestDetails", "DFWO", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("TestDetails", "DFWNR", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("TestDetails", "OBSW", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("TestDetails", "IMRW", nullptr));

        (void)TestDetails;
    } // retranslateUi

};

namespace Ui {
    class TestDetails: public Ui_TestDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDETAILS_H
