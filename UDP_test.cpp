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
    ui.setupUi(this);
    ui.textEdit->document()->setMaximumBlockCount(30);
    ui.progressBar->setMinimum(0);

    //проверка наличия питания платы
    connect(&timerPower, SIGNAL(timeout()), this, SLOT(Send_Check_Power()));
    timerPower.start(1000);

    //---------------------------------------------------------------------------------------------------------------------------
    handlerThread = new QThread();// создается ни с чем не связанный объект потока (котоырй пока что вообще не работает)
    _udp = new ThreadUdp(50);  // IPadr
    connect(_udp, SIGNAL(errorUdp(QString)), this, SLOT(get_error(QString)));
    connect(handlerThread, SIGNAL(started()), _udp, SLOT(process()));
    connect(_udp, SIGNAL(finished()), handlerThread, SLOT(quit()));
    connect(_udp, SIGNAL(finished()), _udp, SLOT(deleteLater()));
    connect(handlerThread, SIGNAL(finished()), handlerThread,SLOT(deleteLater()));
    _udp->connectToServer(10000);//Port
    _udp->moveToThread(handlerThread); // объект помещается в поток
    //---------------------------------------------------------------------------------------------------------------------------

    //connect для смены прошивки
    connect(&start_dop_win, SIGNAL(send_start_pack(char* , int)), _udp, SLOT(send_pack(char* ,int)) );

    //connect для cмены ip
    connect(&stm_ip_window,SIGNAL(ip_change(QString)),_udp, SLOT(change_ip(QString)) );

    //connect для передачи сообщений классу GUI и связи с udp
    connect(_udp, SIGNAL(UdpPack_rcv(char*,quint32 )), &plata, SLOT(STM_responces(char*,quint32 )));
    connect(&plata, SIGNAL(send_udp_check_power_flag(quint32)),this, SLOT(Check_Power(quint32)));
    connect(&plata, SIGNAL(send_udp_messangers(char*)), this, SLOT(get_data(char*)));
    connect(&plata, SIGNAL( send_command(char* , int)), _udp, SLOT(send_pack(char* ,int)) );

    //connect для чтения
    connect(&write_dop_win, SIGNAL(start_read( QString, int)),&hex, SLOT(Start_data_from_HexFile(QString, int)));
    connect(&write_dop_win, SIGNAL(update_segment_count( void)),&plata, SLOT(Update_segment_number(void)));
    connect(&plata, SIGNAL(print_to_info(QString)),&write_dop_win, SLOT(get_info(QString)));
    connect(&hex,SIGNAL(data_for_flash_writing(int,int, uint8_t*)),&plata, SLOT(Start_Writing(int , int , uint8_t* )));
    connect(&plata, SIGNAL(next_segment(int) ), &hex, SLOT( Next_segment(int)));
    connect(&plata, SIGNAL(Progress_bar(int )),this, SLOT(on_progressBar_valueChanged(int)));

    //connect для записи
    connect(&read_dop, SIGNAL(read_flash(uint32_t, uint32_t, QString)),&plata, SLOT(StartRead(uint32_t, uint32_t, QString)));
    connect(&plata, SIGNAL(write_readen_array(uint32_t,char*,uint32_t, QString)), &hex, SLOT(Data_to_hexformat(uint32_t,char*,uint32_t, QString)));
    connect(&hex, SIGNAL(print_to_info(QString)),&read_dop, SLOT(get_info(QString)));

    handlerThread->start(); // поток запускается (теперь наш объект обрабатывает всякие сообщения в отдельном потоке)
}


UDP_test::~UDP_test() {}

void UDP_test::get_data(char* a){
    QString str= (QString) a;
    ui.textEdit->append(str);

}

void UDP_test::get_error(QString msg) {
    QMessageBox::information(this, tr("ERROR"), msg);
}

void UDP_test::get_info(QString msg) {
    QMessageBox::information(this, tr("Info"), msg);
}

typedef struct  {
    uint32_t size;
    uint32_t header;
    uint32_t command;
    uint32_t addr;
    uint8_t data[256];

}data_struct;

void UDP_test::Button_Enable(bool var){
    ui.Info->setEnabled(var);
    ui.Write->setEnabled(var);
    ui.Read->setEnabled(var);
    ui.Start->setEnabled(var);
}
void UDP_test::Check_Power(quint32 header){
    power_counter=0;

}
void UDP_test::Send_Check_Power(){
    data_struct paket_ckeck;
    paket_ckeck.command=0111;
    _udp->send_pack((char*) &paket_ckeck, 12);

    if(power_counter>1){Button_Enable(false);}
    else{Button_Enable(true);}
    power_counter++;
}

void UDP_test::Check_info(){
    data_struct paket_inf;
    paket_inf.command=1111;
    _udp->send_pack((char*) &paket_inf, 12);
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

void UDP_test::on_TextEdit_Clear_clicked()
{
    ui.textEdit->clear();
}

void UDP_test::on_Info_clicked()
{
    Check_info();
}

void UDP_test::on_progressBar_valueChanged(int value)
{

    ui.progressBar->setValue(value);
}

void UDP_test::on_Start_clicked()
{
    start_dop_win.setModal(true);
    start_dop_win.exec();
}


void UDP_test::on_STM_IP_clicked()
{
    stm_ip_window.setModal(true);
    stm_ip_window.exec();
}



