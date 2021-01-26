/********************************************************************************
** Form generated from reading UI file 'write_dop_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITE_DOP_WINDOW_H
#define UI_WRITE_DOP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_write_dop_window
{
public:
    QPushButton *last_file;
    QPushButton *Change_file;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *fileName_;
    QPushButton *OK;

    void setupUi(QDialog *write_dop_window)
    {
        if (write_dop_window->objectName().isEmpty())
            write_dop_window->setObjectName(QString::fromUtf8("write_dop_window"));
        write_dop_window->resize(334, 119);
        last_file = new QPushButton(write_dop_window);
        last_file->setObjectName(QString::fromUtf8("last_file"));
        last_file->setGeometry(QRect(120, 50, 75, 23));
        Change_file = new QPushButton(write_dop_window);
        Change_file->setObjectName(QString::fromUtf8("Change_file"));
        Change_file->setGeometry(QRect(220, 50, 75, 23));
        layoutWidget = new QWidget(write_dop_window);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 291, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        fileName_ = new QLineEdit(layoutWidget);
        fileName_->setObjectName(QString::fromUtf8("fileName_"));

        horizontalLayout->addWidget(fileName_);

        OK = new QPushButton(write_dop_window);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(220, 80, 75, 23));

        retranslateUi(write_dop_window);

        QMetaObject::connectSlotsByName(write_dop_window);
    } // setupUi

    void retranslateUi(QDialog *write_dop_window)
    {
        write_dop_window->setWindowTitle(QApplication::translate("write_dop_window", "Write_Flash", nullptr));
        last_file->setText(QApplication::translate("write_dop_window", "Last File", nullptr));
        Change_file->setText(QApplication::translate("write_dop_window", "Choose file", nullptr));
        label->setText(QApplication::translate("write_dop_window", "\320\244\320\260\320\271\320\273:", nullptr));
        OK->setText(QApplication::translate("write_dop_window", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class write_dop_window: public Ui_write_dop_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITE_DOP_WINDOW_H
