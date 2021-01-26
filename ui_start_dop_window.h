/********************************************************************************
** Form generated from reading UI file 'start_dop_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_DOP_WINDOW_H
#define UI_START_DOP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Start_dop_window
{
public:
    QLabel *label_2;
    QPushButton *OK;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *adress;

    void setupUi(QDialog *Start_dop_window)
    {
        if (Start_dop_window->objectName().isEmpty())
            Start_dop_window->setObjectName(QString::fromUtf8("Start_dop_window"));
        Start_dop_window->resize(251, 79);
        label_2 = new QLabel(Start_dop_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 40, 47, 13));
        OK = new QPushButton(Start_dop_window);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(140, 50, 75, 23));
        widget = new QWidget(Start_dop_window);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 220, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        adress = new QLineEdit(widget);
        adress->setObjectName(QString::fromUtf8("adress"));

        horizontalLayout->addWidget(adress);


        retranslateUi(Start_dop_window);

        QMetaObject::connectSlotsByName(Start_dop_window);
    } // setupUi

    void retranslateUi(QDialog *Start_dop_window)
    {
        Start_dop_window->setWindowTitle(QApplication::translate("Start_dop_window", "Dialog", nullptr));
        label_2->setText(QString());
        OK->setText(QApplication::translate("Start_dop_window", "OK", nullptr));
        label->setText(QApplication::translate("Start_dop_window", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\260\320\264\321\200\320\265\321\201 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Start_dop_window: public Ui_Start_dop_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_DOP_WINDOW_H
