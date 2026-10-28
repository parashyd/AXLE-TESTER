/********************************************************************************
** Form generated from reading UI file 'testdetail0.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTDETAIL0_H
#define UI_TESTDETAIL0_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testdetail0
{
public:
    QPushButton *TestButton;
    QFrame *frameMain;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *unitEdit;
    QLineEdit *modelEdit;
    QComboBox *lineCombo;
    QLineEdit *opEdit;
    QLabel *label_line;
    QLabel *label_date;
    QLineEdit *dateEdit;
    QLabel *label_model;
    QLabel *label_unit;
    QLabel *label_sec;
    QLabel *label_op;
    QLineEdit *divEdit;
    QLineEdit *secEdit;
    QLabel *label_time;
    QLineEdit *timeEdit;
    QLabel *label_div;
    QLineEdit *lineothersEdit;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_weldtype;
    QComboBox *weldTypeCombo;
    QLabel *label_testtype;
    QComboBox *testTypeCombo;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_km;
    QLineEdit *weldNoEdit;
    QLineEdit *mtrEdit;
    QLabel *label_mtr;
    QLabel *label_weldno;
    QLineEdit *kmEdit;
    QLabel *label_Rail;
    QComboBox *RailcomboBox;
    QFrame *frameHeader;
    QLabel *label_Title;

    void setupUi(QWidget *testdetail0)
    {
        if (testdetail0->objectName().isEmpty())
            testdetail0->setObjectName("testdetail0");
        testdetail0->resize(640, 480);
        TestButton = new QPushButton(testdetail0);
        TestButton->setObjectName("TestButton");
        TestButton->setGeometry(QRect(270, 450, 94, 26));
        frameMain = new QFrame(testdetail0);
        frameMain->setObjectName("frameMain");
        frameMain->setGeometry(QRect(20, 60, 611, 381));
        frameMain->setFrameShape(QFrame::Shape::StyledPanel);
        frameMain->setFrameShadow(QFrame::Shadow::Raised);
        gridLayoutWidget = new QWidget(frameMain);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 20, 591, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        unitEdit = new QLineEdit(gridLayoutWidget);
        unitEdit->setObjectName("unitEdit");
        unitEdit->setReadOnly(true);

        gridLayout->addWidget(unitEdit, 1, 1, 1, 1);

        modelEdit = new QLineEdit(gridLayoutWidget);
        modelEdit->setObjectName("modelEdit");
        modelEdit->setReadOnly(true);

        gridLayout->addWidget(modelEdit, 1, 0, 1, 1);

        lineCombo = new QComboBox(gridLayoutWidget);
        lineCombo->addItem(QString());
        lineCombo->addItem(QString());
        lineCombo->addItem(QString());
        lineCombo->addItem(QString());
        lineCombo->addItem(QString());
        lineCombo->addItem(QString());
        lineCombo->addItem(QString());
        lineCombo->addItem(QString());
        lineCombo->setObjectName("lineCombo");
        lineCombo->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(lineCombo, 3, 3, 1, 1);

        opEdit = new QLineEdit(gridLayoutWidget);
        opEdit->setObjectName("opEdit");

        gridLayout->addWidget(opEdit, 3, 0, 1, 1);

        label_line = new QLabel(gridLayoutWidget);
        label_line->setObjectName("label_line");
        label_line->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout->addWidget(label_line, 2, 3, 1, 1);

        label_date = new QLabel(gridLayoutWidget);
        label_date->setObjectName("label_date");
        label_date->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout->addWidget(label_date, 0, 2, 1, 1);

        dateEdit = new QLineEdit(gridLayoutWidget);
        dateEdit->setObjectName("dateEdit");

        gridLayout->addWidget(dateEdit, 1, 2, 1, 1);

        label_model = new QLabel(gridLayoutWidget);
        label_model->setObjectName("label_model");
        label_model->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout->addWidget(label_model, 0, 0, 1, 1);

        label_unit = new QLabel(gridLayoutWidget);
        label_unit->setObjectName("label_unit");
        label_unit->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout->addWidget(label_unit, 0, 1, 1, 1);

        label_sec = new QLabel(gridLayoutWidget);
        label_sec->setObjectName("label_sec");
        label_sec->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout->addWidget(label_sec, 2, 2, 1, 1);

        label_op = new QLabel(gridLayoutWidget);
        label_op->setObjectName("label_op");
        label_op->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout->addWidget(label_op, 2, 0, 1, 1);

        divEdit = new QLineEdit(gridLayoutWidget);
        divEdit->setObjectName("divEdit");

        gridLayout->addWidget(divEdit, 3, 1, 1, 1);

        secEdit = new QLineEdit(gridLayoutWidget);
        secEdit->setObjectName("secEdit");

        gridLayout->addWidget(secEdit, 3, 2, 1, 1);

        label_time = new QLabel(gridLayoutWidget);
        label_time->setObjectName("label_time");
        label_time->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout->addWidget(label_time, 0, 3, 1, 1);

        timeEdit = new QLineEdit(gridLayoutWidget);
        timeEdit->setObjectName("timeEdit");

        gridLayout->addWidget(timeEdit, 1, 3, 1, 1);

        label_div = new QLabel(gridLayoutWidget);
        label_div->setObjectName("label_div");
        label_div->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout->addWidget(label_div, 2, 1, 1, 1);

        lineothersEdit = new QLineEdit(frameMain);
        lineothersEdit->setObjectName("lineothersEdit");
        lineothersEdit->setEnabled(true);
        lineothersEdit->setGeometry(QRect(460, 170, 141, 26));
        gridLayoutWidget_3 = new QWidget(frameMain);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(130, 200, 271, 52));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_weldtype = new QLabel(gridLayoutWidget_3);
        label_weldtype->setObjectName("label_weldtype");
        label_weldtype->setMinimumSize(QSize(120, 0));
        label_weldtype->setMaximumSize(QSize(120, 16777215));
        label_weldtype->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout_3->addWidget(label_weldtype, 0, 0, 1, 1);

        weldTypeCombo = new QComboBox(gridLayoutWidget_3);
        weldTypeCombo->addItem(QString());
        weldTypeCombo->addItem(QString());
        weldTypeCombo->addItem(QString());
        weldTypeCombo->addItem(QString());
        weldTypeCombo->addItem(QString());
        weldTypeCombo->addItem(QString());
        weldTypeCombo->addItem(QString());
        weldTypeCombo->setObjectName("weldTypeCombo");

        gridLayout_3->addWidget(weldTypeCombo, 1, 0, 1, 1);

        label_testtype = new QLabel(gridLayoutWidget_3);
        label_testtype->setObjectName("label_testtype");
        label_testtype->setMinimumSize(QSize(120, 0));
        label_testtype->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout_3->addWidget(label_testtype, 0, 1, 1, 1);

        testTypeCombo = new QComboBox(gridLayoutWidget_3);
        testTypeCombo->addItem(QString());
        testTypeCombo->addItem(QString());
        testTypeCombo->addItem(QString());
        testTypeCombo->addItem(QString());
        testTypeCombo->setObjectName("testTypeCombo");

        gridLayout_3->addWidget(testTypeCombo, 1, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(frameMain);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(10, 280, 581, 80));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_km = new QLabel(gridLayoutWidget_4);
        label_km->setObjectName("label_km");
        label_km->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout_4->addWidget(label_km, 1, 0, 1, 1);

        weldNoEdit = new QLineEdit(gridLayoutWidget_4);
        weldNoEdit->setObjectName("weldNoEdit");

        gridLayout_4->addWidget(weldNoEdit, 2, 3, 1, 1);

        mtrEdit = new QLineEdit(gridLayoutWidget_4);
        mtrEdit->setObjectName("mtrEdit");

        gridLayout_4->addWidget(mtrEdit, 2, 1, 1, 1);

        label_mtr = new QLabel(gridLayoutWidget_4);
        label_mtr->setObjectName("label_mtr");
        label_mtr->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout_4->addWidget(label_mtr, 1, 1, 1, 1);

        label_weldno = new QLabel(gridLayoutWidget_4);
        label_weldno->setObjectName("label_weldno");
        label_weldno->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        gridLayout_4->addWidget(label_weldno, 1, 3, 1, 1);

        kmEdit = new QLineEdit(gridLayoutWidget_4);
        kmEdit->setObjectName("kmEdit");

        gridLayout_4->addWidget(kmEdit, 2, 0, 1, 1);

        label_Rail = new QLabel(gridLayoutWidget_4);
        label_Rail->setObjectName("label_Rail");

        gridLayout_4->addWidget(label_Rail, 1, 2, 1, 1);

        RailcomboBox = new QComboBox(gridLayoutWidget_4);
        RailcomboBox->addItem(QString());
        RailcomboBox->addItem(QString());
        RailcomboBox->addItem(QString());
        RailcomboBox->setObjectName("RailcomboBox");

        gridLayout_4->addWidget(RailcomboBox, 2, 2, 1, 1);

        frameHeader = new QFrame(testdetail0);
        frameHeader->setObjectName("frameHeader");
        frameHeader->setGeometry(QRect(20, 10, 611, 41));
        frameHeader->setFrameShape(QFrame::Shape::StyledPanel);
        frameHeader->setFrameShadow(QFrame::Shadow::Raised);
        label_Title = new QLabel(frameHeader);
        label_Title->setObjectName("label_Title");
        label_Title->setGeometry(QRect(220, 8, 151, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_Title->setFont(font);

        retranslateUi(testdetail0);

        QMetaObject::connectSlotsByName(testdetail0);
    } // setupUi

    void retranslateUi(QWidget *testdetail0)
    {
        TestButton->setText(QCoreApplication::translate("testdetail0", "Test", nullptr));
        modelEdit->setText(QCoreApplication::translate("testdetail0", "WT-2311D", nullptr));
        lineCombo->setItemText(0, QCoreApplication::translate("testdetail0", "DN", nullptr));
        lineCombo->setItemText(1, QCoreApplication::translate("testdetail0", "UP", nullptr));
        lineCombo->setItemText(2, QCoreApplication::translate("testdetail0", "SL", nullptr));
        lineCombo->setItemText(3, QCoreApplication::translate("testdetail0", "UD", nullptr));
        lineCombo->setItemText(4, QCoreApplication::translate("testdetail0", "ByPass UP", nullptr));
        lineCombo->setItemText(5, QCoreApplication::translate("testdetail0", "ByPass DN", nullptr));
        lineCombo->setItemText(6, QCoreApplication::translate("testdetail0", "ByPass SL", nullptr));
        lineCombo->setItemText(7, QCoreApplication::translate("testdetail0", "Others", nullptr));

        label_line->setText(QCoreApplication::translate("testdetail0", "Line", nullptr));
        label_date->setText(QCoreApplication::translate("testdetail0", "Date", nullptr));
        label_model->setText(QCoreApplication::translate("testdetail0", "Model", nullptr));
        label_unit->setText(QCoreApplication::translate("testdetail0", "Unit No", nullptr));
        label_sec->setText(QCoreApplication::translate("testdetail0", "Sec", nullptr));
        label_op->setText(QCoreApplication::translate("testdetail0", "O/P Name", nullptr));
        label_time->setText(QCoreApplication::translate("testdetail0", "Time", nullptr));
        label_div->setText(QCoreApplication::translate("testdetail0", "Div", nullptr));
        label_weldtype->setText(QCoreApplication::translate("testdetail0", "Weld Type", nullptr));
        weldTypeCombo->setItemText(0, QCoreApplication::translate("testdetail0", "AT Weld", nullptr));
        weldTypeCombo->setItemText(1, QCoreApplication::translate("testdetail0", "FB Weld", nullptr));
        weldTypeCombo->setItemText(2, QCoreApplication::translate("testdetail0", "COMB Weld", nullptr));
        weldTypeCombo->setItemText(3, QCoreApplication::translate("testdetail0", "SEJ ", nullptr));
        weldTypeCombo->setItemText(4, QCoreApplication::translate("testdetail0", "P & C", nullptr));
        weldTypeCombo->setItemText(5, QCoreApplication::translate("testdetail0", "RAIL", nullptr));
        weldTypeCombo->setItemText(6, QCoreApplication::translate("testdetail0", "Gas Pressure Weld", nullptr));

        label_testtype->setText(QCoreApplication::translate("testdetail0", "Test Type", nullptr));
        testTypeCombo->setItemText(0, QCoreApplication::translate("testdetail0", "Periodic", nullptr));
        testTypeCombo->setItemText(1, QCoreApplication::translate("testdetail0", "1st Periodic", nullptr));
        testTypeCombo->setItemText(2, QCoreApplication::translate("testdetail0", "Initial", nullptr));
        testTypeCombo->setItemText(3, QCoreApplication::translate("testdetail0", "General", nullptr));

        label_km->setText(QCoreApplication::translate("testdetail0", "Km", nullptr));
        label_mtr->setText(QCoreApplication::translate("testdetail0", "Mtr", nullptr));
        label_weldno->setText(QCoreApplication::translate("testdetail0", "Weld No", nullptr));
        label_Rail->setText(QCoreApplication::translate("testdetail0", "Rail", nullptr));
        RailcomboBox->setItemText(0, QCoreApplication::translate("testdetail0", "LH", nullptr));
        RailcomboBox->setItemText(1, QCoreApplication::translate("testdetail0", "RH", nullptr));
        RailcomboBox->setItemText(2, QCoreApplication::translate("testdetail0", "LH/RH", nullptr));

        label_Title->setText(QCoreApplication::translate("testdetail0", "TEST DETAILS", nullptr));
        (void)testdetail0;
    } // retranslateUi

};

namespace Ui {
    class testdetail0: public Ui_testdetail0 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTDETAIL0_H
