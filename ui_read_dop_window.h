/********************************************************************************
** Form generated from reading UI file 'read_dop_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READ_DOP_WINDOW_H
#define UI_READ_DOP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Read_dop_window
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *adress;
    QLineEdit *size;
    QLineEdit *file;
    QPushButton *pushButton;

    void setupUi(QDialog *Read_dop_window)
    {
        if (Read_dop_window->objectName().isEmpty())
            Read_dop_window->setObjectName(QString::fromUtf8("Read_dop_window"));
        Read_dop_window->setEnabled(true);
        Read_dop_window->resize(279, 178);
        formLayoutWidget = new QWidget(Read_dop_window);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 30, 231, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        adress = new QLineEdit(formLayoutWidget);
        adress->setObjectName(QString::fromUtf8("adress"));

        formLayout->setWidget(0, QFormLayout::FieldRole, adress);

        size = new QLineEdit(formLayoutWidget);
        size->setObjectName(QString::fromUtf8("size"));

        formLayout->setWidget(1, QFormLayout::FieldRole, size);

        file = new QLineEdit(formLayoutWidget);
        file->setObjectName(QString::fromUtf8("file"));

        formLayout->setWidget(2, QFormLayout::FieldRole, file);

        pushButton = new QPushButton(Read_dop_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 130, 75, 23));

        retranslateUi(Read_dop_window);

        QMetaObject::connectSlotsByName(Read_dop_window);
    } // setupUi

    void retranslateUi(QDialog *Read_dop_window)
    {
        Read_dop_window->setWindowTitle(QApplication::translate("Read_dop_window", "Read_Flash", nullptr));
        label->setText(QApplication::translate("Read_dop_window", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_2->setText(QApplication::translate("Read_dop_window", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\262 \320\261\320\260\320\271\321\202\320\260\321\205", nullptr));
        label_3->setText(QApplication::translate("Read_dop_window", "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260", nullptr));
        pushButton->setText(QApplication::translate("Read_dop_window", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Read_dop_window: public Ui_Read_dop_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READ_DOP_WINDOW_H
