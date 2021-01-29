#include "UDP_test.h"
#include <windows.h>
#include <QFile>
#include <QtCore>
#include <QDebug>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QShortcut>
#include <QTimer>
#include <QTime>
#include "math.h"


UDP_test::UDP_test(QMainWindow *parent) :
    QMainWindow(parent) {
    //графические настройки виджетов
    setWindowIcon(QIcon("icon.PNG"));
    ui.setupUi(this);
    ui.progressBar->setMinimum(0);

    //проверка наличия питания платы
    connect(&timerPower, SIGNAL(timeout()), &plata, SLOT(Send_Check_Power()));
    timerPower.start(500);
    connect(&plata, SIGNAL(buttons_enable(bool)), this, SLOT(Button_Enable(bool)));

    //connect для cмены ip
    connect(&stm_ip_window,SIGNAL(ip_change(QString)),&plata, SLOT(Change_ip(QString)) );

    //connect для передачи сообщений классу GUI
    connect(&plata, SIGNAL(send_info_text(char*)), this, SLOT(get_info_data(char*)));
    connect(&plata, SIGNAL(send_not_connected_text(char*)), this, SLOT(get_not_connected_data(char*)));

    //connect для чтения
    connect(&write_dop_win, SIGNAL(start_read( QString, int)),&hex, SLOT(Start_data_from_HexFile(QString, int)));
    connect(&write_dop_win, SIGNAL(update_segment_count( void)),&plata, SLOT(Update_segment_number(void)));
    connect(&hex,SIGNAL(data_for_flash_writing(int,int, uint8_t*)),&plata, SLOT(Start_Writing(int , int , uint8_t* )));
    connect(&plata, SIGNAL(next_segment(int) ), &hex, SLOT( Next_segment(int)));
    connect(&plata, SIGNAL(Progress_bar(int )),this, SLOT(on_progressBar_valueChanged(int)));
    connect(&plata, SIGNAL(print_to_info(QString)),&write_dop_win, SLOT(get_info(QString)));

    //connect для записи
    connect(&read_dop, SIGNAL(read_flash(uint32_t, uint32_t, QString)),&plata, SLOT(StartRead(uint32_t, uint32_t, QString)));
    connect(&plata, SIGNAL(write_readen_array(uint32_t,char*,uint32_t, QString)), &hex, SLOT(Data_to_hexformat(uint32_t,char*,uint32_t, QString)));
    connect(&hex, SIGNAL(print_to_info(QString)),&read_dop, SLOT(get_info(QString)));
}


UDP_test::~UDP_test() {}

void UDP_test::get_info_data(char* a){
    QString str= (QString) a;
    count++;

    if(count%2!=0){ui.stm_serais->setText(str);}
    else{ui.version->setText(str);}
}

void UDP_test::get_not_connected_data(char* a){
    QString str= (QString) a;
    ui.not_connected->setStyleSheet("color: rgb(197, 0, 63)");
    ui.not_connected->setText(str);
}

void UDP_test::get_info(QString msg) {
    QMessageBox::information(this, tr("Info"), msg);
}

void UDP_test::Button_Enable(bool var){
    ui.version->setEnabled(var);
    ui.stm_serais->setEnabled(var);
    ui.Write->setEnabled(var);
    ui.Read->setEnabled(var);
    ui.Start->setEnabled(var);
    ui.not_connected->setEnabled(not var);
}

void UDP_test::on_Write_clicked()
{
    write_dop_win.setModal(true);
    write_dop_win.exec();

}

void UDP_test::on_Read_clicked()
{
    read_dop.setModal(true);
    read_dop.exec();
}


void UDP_test::on_progressBar_valueChanged(int value)
{
    ui.progressBar->setValue(value);
}

void UDP_test::on_Start_clicked()
{
    plata.Start_struct();
}

void UDP_test::on_STM_IP_clicked()
{
    stm_ip_window.setModal(true);
    stm_ip_window.exec();
}



