#include "stm_ip_dop_window.h"
#include "ui_stm_ip.h"
#include <QDebug>
#include <QMessageBox>

STM_IP::STM_IP(QWidget *parent) :
    QDialog(parent),
    stm_ip_window(new Ui::STM_IP)
{
    stm_ip_window->setupUi(this);
    QWidget::setWhatsThis("Запись  Ip должна удовлетворять следующему регулярному выражению ХХХ.ХХХ.Х(Х(Х)).Х(Х(Х))\n");
}

STM_IP::~STM_IP()
{
    delete stm_ip_window;
}

void STM_IP::get_info(QString msg){
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Warning);
    msgBox.setText(msg);
    msgBox.exec();

}


void STM_IP::on_OK_clicked()
{
    bool ok;
    QString ip =stm_ip_window->ip_edit->text();

    QRegExp rx("[0-9]{3}\\.[0-9]{3}\\.[0-9]{1,3}\\.[0-9]{1,3}");
    if(!rx.exactMatch(ip)){
         get_info("Введите корректный ip");}
    else{
        emit ip_change(ip);}

}
