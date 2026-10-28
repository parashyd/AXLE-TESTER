/********************************************************************************
** Form generated from reading UI file 'Openlog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENLOG_H
#define UI_OPENLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Openlog
{
public:
    QWidget *Left;
    QLabel *label_Folder;
    QListWidget *listWidget_Folder;
    QWidget *Right;
    QLabel *label_Images;
    QListWidget *listWidget_Images;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *CopyButton;
    QPushButton *CopyAllButton;
    QPushButton *DeleteButton;
    QPushButton *DeleteAllButton;
    QLabel *label;

    void setupUi(QDialog *Openlog)
    {
        if (Openlog->objectName().isEmpty())
            Openlog->setObjectName("Openlog");
        Openlog->setWindowModality(Qt::WindowModality::ApplicationModal);
        Openlog->resize(640, 480);
        Left = new QWidget(Openlog);
        Left->setObjectName("Left");
        Left->setGeometry(QRect(9, 29, 308, 391));
        label_Folder = new QLabel(Left);
        label_Folder->setObjectName("label_Folder");
        label_Folder->setGeometry(QRect(10, 10, 291, 20));
        QFont font;
        font.setBold(true);
        label_Folder->setFont(font);
        label_Folder->setAlignment(Qt::AlignmentFlag::AlignCenter);
        listWidget_Folder = new QListWidget(Left);
        listWidget_Folder->setObjectName("listWidget_Folder");
        listWidget_Folder->setGeometry(QRect(10, 40, 291, 331));
        Right = new QWidget(Openlog);
        Right->setObjectName("Right");
        Right->setGeometry(QRect(323, 29, 308, 391));
        label_Images = new QLabel(Right);
        label_Images->setObjectName("label_Images");
        label_Images->setGeometry(QRect(10, 10, 291, 20));
        label_Images->setFont(font);
        label_Images->setAlignment(Qt::AlignmentFlag::AlignCenter);
        listWidget_Images = new QListWidget(Right);
        listWidget_Images->setObjectName("listWidget_Images");
        listWidget_Images->setGeometry(QRect(0, 40, 291, 331));
        horizontalLayoutWidget = new QWidget(Openlog);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 440, 561, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CopyButton = new QPushButton(horizontalLayoutWidget);
        CopyButton->setObjectName("CopyButton");

        horizontalLayout->addWidget(CopyButton);

        CopyAllButton = new QPushButton(horizontalLayoutWidget);
        CopyAllButton->setObjectName("CopyAllButton");

        horizontalLayout->addWidget(CopyAllButton);

        DeleteButton = new QPushButton(horizontalLayoutWidget);
        DeleteButton->setObjectName("DeleteButton");

        horizontalLayout->addWidget(DeleteButton);

        DeleteAllButton = new QPushButton(horizontalLayoutWidget);
        DeleteAllButton->setObjectName("DeleteAllButton");

        horizontalLayout->addWidget(DeleteAllButton);

        label = new QLabel(Openlog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 371, 18));

        retranslateUi(Openlog);

        QMetaObject::connectSlotsByName(Openlog);
    } // setupUi

    void retranslateUi(QDialog *Openlog)
    {
        Openlog->setWindowTitle(QCoreApplication::translate("Openlog", "Form", nullptr));
        label_Folder->setText(QCoreApplication::translate("Openlog", "Date Folders", nullptr));
        label_Images->setText(QCoreApplication::translate("Openlog", "Files", nullptr));
        CopyButton->setText(QCoreApplication::translate("Openlog", "Copy", nullptr));
        CopyAllButton->setText(QCoreApplication::translate("Openlog", "Copy All", nullptr));
        DeleteButton->setText(QCoreApplication::translate("Openlog", "Delete", nullptr));
        DeleteAllButton->setText(QCoreApplication::translate("Openlog", "Delete All", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Openlog: public Ui_Openlog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENLOG_H
