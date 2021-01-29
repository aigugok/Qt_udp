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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EMA_V2Class
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *STM_IP;
    QPushButton *Read;
    QPushButton *Write;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *stm_serais;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *version;
    QProgressBar *progressBar;
    QPushButton *Start;
    QLabel *not_connected;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EMA_V2Class)
    {
        if (EMA_V2Class->objectName().isEmpty())
            EMA_V2Class->setObjectName(QString::fromUtf8("EMA_V2Class"));
        EMA_V2Class->setEnabled(true);
        EMA_V2Class->resize(250, 266);
        centralwidget = new QWidget(EMA_V2Class);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 224, 214));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        STM_IP = new QPushButton(layoutWidget);
        STM_IP->setObjectName(QString::fromUtf8("STM_IP"));

        verticalLayout->addWidget(STM_IP);

        Read = new QPushButton(layoutWidget);
        Read->setObjectName(QString::fromUtf8("Read"));
        Read->setEnabled(false);

        verticalLayout->addWidget(Read);

        Write = new QPushButton(layoutWidget);
        Write->setObjectName(QString::fromUtf8("Write"));
        Write->setEnabled(false);

        verticalLayout->addWidget(Write);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);

        horizontalLayout->addWidget(label);

        stm_serais = new QLineEdit(layoutWidget);
        stm_serais->setObjectName(QString::fromUtf8("stm_serais"));
        stm_serais->setEnabled(false);
        stm_serais->setMinimumSize(QSize(87, 20));

        horizontalLayout->addWidget(stm_serais);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        version = new QLineEdit(layoutWidget);
        version->setObjectName(QString::fromUtf8("version"));
        version->setEnabled(false);

        horizontalLayout_2->addWidget(version);


        verticalLayout->addLayout(horizontalLayout_2);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        Start = new QPushButton(layoutWidget);
        Start->setObjectName(QString::fromUtf8("Start"));
        Start->setEnabled(false);

        verticalLayout->addWidget(Start);

        not_connected = new QLabel(layoutWidget);
        not_connected->setObjectName(QString::fromUtf8("not_connected"));
        not_connected->setEnabled(false);

        verticalLayout->addWidget(not_connected);

        EMA_V2Class->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EMA_V2Class);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 250, 21));
        EMA_V2Class->setMenuBar(menubar);
        statusbar = new QStatusBar(EMA_V2Class);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EMA_V2Class->setStatusBar(statusbar);

        retranslateUi(EMA_V2Class);

        QMetaObject::connectSlotsByName(EMA_V2Class);
    } // setupUi

    void retranslateUi(QMainWindow *EMA_V2Class)
    {
        EMA_V2Class->setWindowTitle(QApplication::translate("EMA_V2Class", "Oktanta", nullptr));
        STM_IP->setText(QApplication::translate("EMA_V2Class", "STM IP Change", nullptr));
        Read->setText(QApplication::translate("EMA_V2Class", "Read", nullptr));
        Write->setText(QApplication::translate("EMA_V2Class", "Write", nullptr));
        label->setText(QApplication::translate("EMA_V2Class", " STM serias         ", nullptr));
        label_2->setText(QApplication::translate("EMA_V2Class", " Program version", nullptr));
        Start->setText(QApplication::translate("EMA_V2Class", "Leave bootloader mode", nullptr));
        not_connected->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EMA_V2Class: public Ui_EMA_V2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDP_TEST_H
