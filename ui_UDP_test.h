/********************************************************************************
** Form generated from reading UI file 'UDP_test.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDP_TEST_H
#define UI_UDP_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EMA_V2Class
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QPushButton *TextEdit_Clear;
    QPushButton *STM_IP;
    QPushButton *Info;
    QTextEdit *textEdit;
    QPushButton *Read;
    QPushButton *Write;
    QProgressBar *progressBar;
    QPushButton *Start;
    QHBoxLayout *horizontalLayout_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EMA_V2Class)
    {
        if (EMA_V2Class->objectName().isEmpty())
            EMA_V2Class->setObjectName(QString::fromUtf8("EMA_V2Class"));
        EMA_V2Class->setEnabled(true);
        EMA_V2Class->resize(379, 428);
        centralwidget = new QWidget(EMA_V2Class);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        TextEdit_Clear = new QPushButton(centralwidget);
        TextEdit_Clear->setObjectName(QString::fromUtf8("TextEdit_Clear"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, TextEdit_Clear);


        verticalLayout->addLayout(formLayout_2);

        STM_IP = new QPushButton(centralwidget);
        STM_IP->setObjectName(QString::fromUtf8("STM_IP"));

        verticalLayout->addWidget(STM_IP);

        Info = new QPushButton(centralwidget);
        Info->setObjectName(QString::fromUtf8("Info"));
        Info->setEnabled(false);

        verticalLayout->addWidget(Info);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        Read = new QPushButton(centralwidget);
        Read->setObjectName(QString::fromUtf8("Read"));
        Read->setEnabled(false);

        verticalLayout->addWidget(Read);

        Write = new QPushButton(centralwidget);
        Write->setObjectName(QString::fromUtf8("Write"));
        Write->setEnabled(false);

        verticalLayout->addWidget(Write);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        Start = new QPushButton(centralwidget);
        Start->setObjectName(QString::fromUtf8("Start"));
        Start->setEnabled(false);

        verticalLayout->addWidget(Start);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout);

        EMA_V2Class->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EMA_V2Class);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 379, 21));
        EMA_V2Class->setMenuBar(menubar);
        statusbar = new QStatusBar(EMA_V2Class);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EMA_V2Class->setStatusBar(statusbar);

        retranslateUi(EMA_V2Class);

        QMetaObject::connectSlotsByName(EMA_V2Class);
    } // setupUi

    void retranslateUi(QMainWindow *EMA_V2Class)
    {
        EMA_V2Class->setWindowTitle(QApplication::translate("EMA_V2Class", "Module", nullptr));
        TextEdit_Clear->setText(QApplication::translate("EMA_V2Class", "TextEdit_Clear", nullptr));
        STM_IP->setText(QApplication::translate("EMA_V2Class", "STM IP Change", nullptr));
        Info->setText(QApplication::translate("EMA_V2Class", "Info", nullptr));
        Read->setText(QApplication::translate("EMA_V2Class", "Read", nullptr));
        Write->setText(QApplication::translate("EMA_V2Class", "Write", nullptr));
        Start->setText(QApplication::translate("EMA_V2Class", "START", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EMA_V2Class: public Ui_EMA_V2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDP_TEST_H
