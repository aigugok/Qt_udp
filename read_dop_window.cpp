#include "read_dop_window.h"
#include "ui_read_dop_window.h"
#include <QDebug>
#include <QMessageBox>
#include <QFile>


Read_dop_window::Read_dop_window(QWidget *parent) :
    QDialog(parent),
    read_dop(new Ui::Read_dop_window)
{
    read_dop->setupUi(this);
    QWidget::setWhatsThis("Значение размера должно быть > 0, адреса >=0.\n"
                          "Не указывайте в названии файла расширение \n .hex устанавливается автоматически");
}

Read_dop_window::~Read_dop_window()
{
    delete read_dop;
}

void Read_dop_window::get_info(QString msg){
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setText(msg);
    msgBox.exec();

}


void Read_dop_window::on_pushButton_clicked()
{
        bool ok;
        uint32_t adress=0,size=0;

        QString file_name =read_dop->file->text();
        file_name.append(".hex");

        QRegExp rx("[0-9]+");
        if(!rx.exactMatch(read_dop->adress->text())){
             adress=read_dop->adress->text().toUInt(&ok, 16);}
        else{adress=read_dop->adress->text().toUInt(&ok, 10);}

        if(!rx.exactMatch(read_dop->size->text())){
             size=read_dop->size->text().toUInt(&ok, 16);}
        else{size=read_dop->size->text().toUInt(&ok, 10);}


    if((adress<0) || size<=0 || read_dop->adress->text()[0]=="-"){
        get_info("Введите корректные значения");}
    else{
        qDebug()<<file_name<<adress<<size;
       emit read_flash(adress,size,file_name);


    }
}


