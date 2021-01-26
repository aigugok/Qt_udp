#ifndef EMA_V2_H
#define EMA_V2_H

#include <QWidget>
#include <QTimer>
#include <QTime>
#include "ui_UDP_test.h"
#include "udp_.h"
#include "hex_writing.h"
#include "read_dop_window.h"
#include "stm_ip_dop_window.h"
#include "write_dop_window.h"
#include "start_dop_window.h"
#include "plata_read_write.h"


class UDP_test : public QMainWindow
{
    Q_OBJECT

public:
    UDP_test(QMainWindow *parent = 0);
    ~UDP_test();
    int flag_STM_off=0;
    int power_counter=2;
public slots:
   	void get_error(QString msg);
    void get_info(QString msg);
    void get_data(char* a);
    void Check_Power(quint32 header);


private slots:
    void Check_info();
    void on_progressBar_valueChanged(int value);
    void on_Start_clicked();
    void on_TextEdit_Clear_clicked();
    void on_Info_clicked();
    void on_Write_clicked();
    void on_Read_clicked();
    void on_STM_IP_clicked();
    void Send_Check_Power(void);
private:
    Write_hex hex;
    Ui::EMA_V2Class ui;
    Read_dop_window read_dop;
    STM_IP stm_ip_window;
    write_dop_window write_dop_win;
    Start_dop_window start_dop_win;
    plata_read_write plata;


    QTimer timerPower;
    ThreadUdp* _udp;
    QThread *handlerThread;
    void send_conf(void);
    void Button_Enable(bool var);
    QString fileName;


};

#endif // EMA_V2_H
