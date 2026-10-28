/********************************************************************************
** Form generated from reading UI file 'openlog1.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENLOG1_H
#define UI_OPENLOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenLog1
{
public:
    QFrame *frameButtons;
    QHBoxLayout *buttonLayout;
    QPushButton *copyButton;
    QPushButton *copyAllButton;
    QPushButton *deleteButton;
    QPushButton *deleteAllButton;
    QFrame *frameFiles;
    QVBoxLayout *filesLayout;
    QLabel *labelFiles;
    QListWidget *fileList;
    QFrame *frameWeldFolders;
    QVBoxLayout *weldLayout;
    QLabel *labelWeldFolders;
    QListWidget *weldFolderList;
    QFrame *frameDateFolders;
    QVBoxLayout *dateLayout;
    QLabel *labelDateFolders;
    QListWidget *dateFolderList;
    QLabel *label;

    void setupUi(QWidget *OpenLog1)
    {
        if (OpenLog1->objectName().isEmpty())
            OpenLog1->setObjectName("OpenLog1");
        OpenLog1->resize(640, 480);
        frameButtons = new QFrame(OpenLog1);
        frameButtons->setObjectName("frameButtons");
        frameButtons->setGeometry(QRect(9, 411, 611, 60));
        frameButtons->setMinimumSize(QSize(0, 60));
        buttonLayout = new QHBoxLayout(frameButtons);
        buttonLayout->setObjectName("buttonLayout");
        copyButton = new QPushButton(frameButtons);
        copyButton->setObjectName("copyButton");

        buttonLayout->addWidget(copyButton);

        copyAllButton = new QPushButton(frameButtons);
        copyAllButton->setObjectName("copyAllButton");

        buttonLayout->addWidget(copyAllButton);

        deleteButton = new QPushButton(frameButtons);
        deleteButton->setObjectName("deleteButton");

        buttonLayout->addWidget(deleteButton);

        deleteAllButton = new QPushButton(frameButtons);
        deleteAllButton->setObjectName("deleteAllButton");

        buttonLayout->addWidget(deleteAllButton);

        frameFiles = new QFrame(OpenLog1);
        frameFiles->setObjectName("frameFiles");
        frameFiles->setGeometry(QRect(309, 23, 321, 381));
        filesLayout = new QVBoxLayout(frameFiles);
        filesLayout->setObjectName("filesLayout");
        labelFiles = new QLabel(frameFiles);
        labelFiles->setObjectName("labelFiles");

        filesLayout->addWidget(labelFiles);

        fileList = new QListWidget(frameFiles);
        fileList->setObjectName("fileList");

        filesLayout->addWidget(fileList);

        frameWeldFolders = new QFrame(OpenLog1);
        frameWeldFolders->setObjectName("frameWeldFolders");
        frameWeldFolders->setGeometry(QRect(140, 23, 171, 381));
        weldLayout = new QVBoxLayout(frameWeldFolders);
        weldLayout->setObjectName("weldLayout");
        labelWeldFolders = new QLabel(frameWeldFolders);
        labelWeldFolders->setObjectName("labelWeldFolders");

        weldLayout->addWidget(labelWeldFolders);

        weldFolderList = new QListWidget(frameWeldFolders);
        weldFolderList->setObjectName("weldFolderList");

        weldLayout->addWidget(weldFolderList);

        frameDateFolders = new QFrame(OpenLog1);
        frameDateFolders->setObjectName("frameDateFolders");
        frameDateFolders->setGeometry(QRect(10, 23, 131, 381));
        dateLayout = new QVBoxLayout(frameDateFolders);
        dateLayout->setObjectName("dateLayout");
        labelDateFolders = new QLabel(frameDateFolders);
        labelDateFolders->setObjectName("labelDateFolders");

        dateLayout->addWidget(labelDateFolders);

        dateFolderList = new QListWidget(frameDateFolders);
        dateFolderList->setObjectName("dateFolderList");

        dateLayout->addWidget(dateFolderList);

        label = new QLabel(OpenLog1);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 391, 18));

        retranslateUi(OpenLog1);

        QMetaObject::connectSlotsByName(OpenLog1);
    } // setupUi

    void retranslateUi(QWidget *OpenLog1)
    {
        OpenLog1->setWindowTitle(QCoreApplication::translate("OpenLog1", "Open Log Widget", nullptr));
        copyButton->setText(QCoreApplication::translate("OpenLog1", "Copy", nullptr));
        copyAllButton->setText(QCoreApplication::translate("OpenLog1", "Copy All", nullptr));
        deleteButton->setText(QCoreApplication::translate("OpenLog1", "Delete", nullptr));
        deleteAllButton->setText(QCoreApplication::translate("OpenLog1", "Delete All", nullptr));
        labelFiles->setText(QCoreApplication::translate("OpenLog1", "Log Files", nullptr));
        labelWeldFolders->setText(QCoreApplication::translate("OpenLog1", "Weld Folders", nullptr));
        labelDateFolders->setText(QCoreApplication::translate("OpenLog1", "Date Folders", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OpenLog1: public Ui_OpenLog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENLOG1_H
