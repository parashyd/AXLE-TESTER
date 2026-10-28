/********************************************************************************
** Form generated from reading UI file 'configscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGSCREEN_H
#define UI_CONFIGSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigScreen
{
public:
    QLabel *titleLabel;
    QTableWidget *configTable;
    QTableWidget *configTable_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *statuslabel;

    void setupUi(QWidget *ConfigScreen)
    {
        if (ConfigScreen->objectName().isEmpty())
            ConfigScreen->setObjectName("ConfigScreen");
        ConfigScreen->resize(640, 480);
        titleLabel = new QLabel(ConfigScreen);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(180, 3, 265, 18));
        configTable = new QTableWidget(ConfigScreen);
        if (configTable->columnCount() < 11)
            configTable->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        configTable->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        if (configTable->rowCount() < 50)
            configTable->setRowCount(50);
        configTable->setObjectName("configTable");
        configTable->setGeometry(QRect(0, 40, 641, 211));
        QFont font;
        font.setPointSize(9);
        configTable->setFont(font);
        configTable->setFrameShape(QFrame::Shape::StyledPanel);
        configTable->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        configTable->setRowCount(50);
        configTable->setColumnCount(11);
        configTable->horizontalHeader()->setMinimumSectionSize(20);
        configTable->horizontalHeader()->setDefaultSectionSize(55);
        configTable->verticalHeader()->setMinimumSectionSize(15);
        configTable->verticalHeader()->setDefaultSectionSize(19);
        configTable_2 = new QTableWidget(ConfigScreen);
        if (configTable_2->columnCount() < 11)
            configTable_2->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(7, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(8, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(9, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        configTable_2->setHorizontalHeaderItem(10, __qtablewidgetitem21);
        if (configTable_2->rowCount() < 50)
            configTable_2->setRowCount(50);
        configTable_2->setObjectName("configTable_2");
        configTable_2->setGeometry(QRect(0, 270, 641, 214));
        configTable_2->setFont(font);
        configTable_2->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        configTable_2->setRowCount(50);
        configTable_2->setColumnCount(11);
        configTable_2->horizontalHeader()->setVisible(true);
        configTable_2->horizontalHeader()->setMinimumSectionSize(20);
        configTable_2->horizontalHeader()->setDefaultSectionSize(55);
        configTable_2->verticalHeader()->setVisible(true);
        configTable_2->verticalHeader()->setMinimumSectionSize(15);
        configTable_2->verticalHeader()->setDefaultSectionSize(19);
        label = new QLabel(ConfigScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 20, 66, 18));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        label->setFont(font1);
        label_2 = new QLabel(ConfigScreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 250, 66, 18));
        QFont font2;
        font2.setBold(true);
        font2.setUnderline(true);
        label_2->setFont(font2);
        statuslabel = new QLabel(ConfigScreen);
        statuslabel->setObjectName("statuslabel");
        statuslabel->setGeometry(QRect(430, 20, 201, 20));

        retranslateUi(ConfigScreen);

        QMetaObject::connectSlotsByName(ConfigScreen);
    } // setupUi

    void retranslateUi(QWidget *ConfigScreen)
    {
        titleLabel->setText(QCoreApplication::translate("ConfigScreen", "CONFIGURATION - ALL CALSETS (1 - 50)", nullptr));
        QTableWidgetItem *___qtablewidgetitem = configTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ConfigScreen", "Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = configTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ConfigScreen", "Delay", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = configTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ConfigScreen", "Range", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = configTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ConfigScreen", "RJ", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = configTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ConfigScreen", "G1ST", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = configTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ConfigScreen", "G1ED", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = configTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ConfigScreen", "TH1", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = configTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ConfigScreen", "G2ST", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = configTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("ConfigScreen", "G2ED", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = configTable->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("ConfigScreen", "TH2", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = configTable->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("ConfigScreen", "ANG", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = configTable_2->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("ConfigScreen", "Gain", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = configTable_2->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("ConfigScreen", "Delay", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = configTable_2->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("ConfigScreen", "Range", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = configTable_2->horizontalHeaderItem(3);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("ConfigScreen", "RJ", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = configTable_2->horizontalHeaderItem(4);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("ConfigScreen", "G1ST", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = configTable_2->horizontalHeaderItem(5);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("ConfigScreen", "G1ED", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = configTable_2->horizontalHeaderItem(6);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("ConfigScreen", "TH1", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = configTable_2->horizontalHeaderItem(7);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("ConfigScreen", "G2ST", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = configTable_2->horizontalHeaderItem(8);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("ConfigScreen", "G2ED", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = configTable_2->horizontalHeaderItem(9);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("ConfigScreen", "TH2", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = configTable_2->horizontalHeaderItem(10);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("ConfigScreen", "ANG", nullptr));
        label->setText(QCoreApplication::translate("ConfigScreen", "CH: 1", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigScreen", "CH: 2", nullptr));
        statuslabel->setText(QString());
        (void)ConfigScreen;
    } // retranslateUi

};

namespace Ui {
    class ConfigScreen: public Ui_ConfigScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGSCREEN_H
