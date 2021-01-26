#include "start_dop_window.h"
#include "ui_start_dop_window.h"
#include <QDebug>
#include <QMessageBox>


typedef struct  {
    uint32_t size;
    uint32_t header;
    uint32_t command;
    uint32_t addr;
    uint8_t data[256];

}data_struct;

Start_dop_window::Start_dop_window(QWidget *parent) :
    QDialog(parent),
    start_dop_win(new Ui::Start_dop_window)
{
    start_dop_win->setupUi(this);
    QWidget::setWhatsThis("Значение адреса должно быть >=0x08010000.\n");
}

Start_dop_window::~Start_dop_window()
{
    delete start_dop_win;
}

void Start_dop_window::get_info(QString msg){
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setText(msg);
    msgBox.exec();

}

void Start_dop_window::on_OK_clicked()
{
    uint32_t adress=0;
    bool ok;
    QRegExp rx("[0-9]+");
    if(!rx.exactMatch(start_dop_win->adress->text())){
         adress=start_dop_win->adress->text().toUInt(&ok, 16);}
    else{adress=start_dop_win->adress->text().toUInt(&ok, 10);}

    if (adress<0x08010000){get_info("Значение адреса меньше 0x08010000 или содержит некорректные символы");}
    else{
    data_struct main_programm;
    main_programm.command=0011;
    main_programm.addr=adress;
    qDebug()<<hex<<main_programm.addr<<main_programm.command;
    emit send_start_pack((char*) &main_programm, sizeof(main_programm));}
}

//0x08010000
