/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_test;
    QLabel *label_config;
    QLabel *label_open;
    QLabel *label_openlog;
    QLabel *label_settings;
    QLabel *label_logo;
    QLabel *label_UnitNo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(640, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 330, 621, 141));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_test = new QLabel(horizontalLayoutWidget);
        label_test->setObjectName("label_test");
        label_test->setMaximumSize(QSize(16777215, 16777215));
        label_test->setFrameShape(QFrame::Shape::Panel);
        label_test->setFrameShadow(QFrame::Shadow::Plain);
        label_test->setPixmap(QPixmap(QString::fromUtf8(":/images/Pasted image.png")));
        label_test->setScaledContents(true);
        label_test->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_test);

        label_config = new QLabel(horizontalLayoutWidget);
        label_config->setObjectName("label_config");
        label_config->setFrameShape(QFrame::Shape::Panel);
        label_config->setPixmap(QPixmap(QString::fromUtf8(":/images/Pasted image (2).png")));
        label_config->setScaledContents(true);
        label_config->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_config);

        label_open = new QLabel(horizontalLayoutWidget);
        label_open->setObjectName("label_open");
        label_open->setFrameShape(QFrame::Shape::Panel);
        label_open->setPixmap(QPixmap(QString::fromUtf8(":/images/Pasted image (3).png")));
        label_open->setScaledContents(true);
        label_open->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_open);

        label_openlog = new QLabel(horizontalLayoutWidget);
        label_openlog->setObjectName("label_openlog");
        label_openlog->setFrameShape(QFrame::Shape::Panel);
        label_openlog->setPixmap(QPixmap(QString::fromUtf8(":/images/Pasted image (4).png")));
        label_openlog->setScaledContents(true);
        label_openlog->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_openlog);

        label_settings = new QLabel(horizontalLayoutWidget);
        label_settings->setObjectName("label_settings");
        label_settings->setFrameShape(QFrame::Shape::Panel);
        label_settings->setPixmap(QPixmap(QString::fromUtf8(":/images/Pasted image (5).png")));
        label_settings->setScaledContents(true);
        label_settings->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_settings);

        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName("label_logo");
        label_logo->setGeometry(QRect(190, 0, 241, 241));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_logo->sizePolicy().hasHeightForWidth());
        label_logo->setSizePolicy(sizePolicy);
        label_logo->setMaximumSize(QSize(300, 300));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/images/canvas4.png")));
        label_logo->setScaledContents(true);
        label_UnitNo = new QLabel(centralwidget);
        label_UnitNo->setObjectName("label_UnitNo");
        label_UnitNo->setGeometry(QRect(200, 250, 221, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label_UnitNo->setFont(font);
        label_UnitNo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_test->setText(QString());
        label_config->setText(QString());
        label_open->setText(QString());
        label_openlog->setText(QString());
        label_settings->setText(QString());
        label_logo->setText(QString());
        label_UnitNo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
