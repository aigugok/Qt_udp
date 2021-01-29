#ifndef EMA_V2_H
#define EMA_V2_H

#include <QWidget>
#include <QTimer>
#include <QTime>
#include "ui_UDP_test.h"
#include "hex_writing.h"
#include "read_dop_window.h"
#include "stm_ip_dop_window.h"
#include "write_dop_window.h"
#include "plata_read_write.h"
#include "udp_.h"


class UDP_test : public QMainWindow
{
    Q_OBJECT

public:
    UDP_test(QMainWindow *parent = 0);
    ~UDP_test();
public slots:
    void get_info(QString msg);
    void get_info_data(char* a);
    void get_not_connected_data(char* a);
    void Button_Enable(bool var);

private slots:
    void on_progressBar_valueChanged(int value);
    void on_Start_clicked();
    void on_Write_clicked();
    void on_Read_clicked();
    void on_STM_IP_clicked();

private:
    Write_hex hex;
    Ui::EMA_V2Class ui;
    Read_dop_window read_dop;
    STM_IP stm_ip_window;
    write_dop_window write_dop_win;
    plata_read_write plata;

    QTimer timerPower;
    int count=0;
};

#endif // EMA_V2_H
