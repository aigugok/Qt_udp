/********************************************************************************
** Form generated from reading UI file 'stm_ip_dop_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STM_IP_DOP_WINDOW_H
#define UI_STM_IP_DOP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_STM_IP
{
public:
    QPushButton *OK;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ip_edit;

    void setupUi(QDialog *STM_IP)
    {
        if (STM_IP->objectName().isEmpty())
            STM_IP->setObjectName(QString::fromUtf8("STM_IP"));
        STM_IP->resize(308, 105);
        OK = new QPushButton(STM_IP);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(200, 70, 75, 23));
        layoutWidget = new QWidget(STM_IP);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 267, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        ip_edit = new QLineEdit(layoutWidget);
        ip_edit->setObjectName(QString::fromUtf8("ip_edit"));

        horizontalLayout->addWidget(ip_edit);


        retranslateUi(STM_IP);

        QMetaObject::connectSlotsByName(STM_IP);
    } // setupUi

    void retranslateUi(QDialog *STM_IP)
    {
        STM_IP->setWindowTitle(QApplication::translate("STM_IP", "STM_IP", nullptr));
        OK->setText(QApplication::translate("STM_IP", "OK", nullptr));
        label->setText(QApplication::translate("STM_IP", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 IP \320\277\320\273\320\260\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class STM_IP: public Ui_STM_IP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STM_IP_DOP_WINDOW_H
