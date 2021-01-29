#ifndef PLATA_READ_WRITE_H
#define PLATA_READ_WRITE_H

#include <QObject>
#include <QTimer>
#include "udp_.h"


class plata_read_write : public QObject
{
    Q_OBJECT

public:
    explicit plata_read_write(QObject *parent = nullptr);
     ~plata_read_write(void);

public slots:
    void Start_Writing(int size, int adress, uint8_t* data);
    void StartRead(uint32_t addr,  uint32_t size, QString fileout);
    void STM_responces(char* Data,quint32 sizedata);
    void Check_Power(quint32 header);
    void Start_struct(void);
    void Change_ip(QString ip);
    void Check_info(void);

signals:
    void send_command(char* a, int b);
    void next_segment(int segment);
    void Progress_bar(int current_size);
    void send_udp_messangers(char* Data);
    void send_info_text(char* Data);
    void send_not_connected_text(char* Data);
    void send_udp_check_power_flag(quint32 header);
    void write_readen_array( uint32_t start_address, char* data, uint32_t datasize,QString fileout);
    void print_to_info(QString a);
    void buttons_enable(bool);
    void ip_change(QString ip);


private slots:
    void First_sending(void);
    void Repead_sending(void);
    void Repead_fl_sending(void);
    void Update_segment_number(void);
    void Send_Check_Power(void);

private:
    int power_counter=2;
    int first_plata_on=0;

    typedef struct  {
        uint32_t header;
        uint32_t command;
        uint32_t size;
        uint32_t addr;
        uint8_t data[256];
    }data_struct;
    data_struct wr_rd_struct;

    int count_pakets=0;//кол-во отправленных пакетов
    int flag_to_write=0; //ответ от платы, записаны ли прошлые данные
    int flag_to_clear=0; //ответ от платы, очищен ли сектор
    int segment_size=0;//размер сегмента
    int segment_adress=0;//адрес сегмента
    int count_clear_timer=0;//кол-во повторных отправок команды clear
    uint8_t *data_array=new uint8_t[0x10000];//массив данных
    int repead_size=0;//переменная для повторной отправки
    int count_of_repead_sending=0;//кол-во повторных отправок
    int all_segment_size=0;//перменная размера сгемента, нужна для progressbar
    int current_segment=1;//номер текущего сегмента

    //-------------var_for_reading(rd)---------------
    uint32_t rd_all_size=0;
    uint32_t rd_next_address=0;
    uint32_t rd_start_address=0;
    uint32_t rd_new_size=0;
    uint32_t rd_cur_size=0;
    uint32_t rd_last_address=0;
    int rd_packet_count=0;
    QString rd_file="";//файл, в который мы запишем данные

    QTimer timer_clear;
    QTimer timer_repead_writing;
    QTimer timer_repead_reading;
    quint32* rd_arraPtr;
    ThreadUdp* _udp;
    QThread *handlerThread;

    void CurrentRead(uint32_t addr,  uint32_t size);
    void Flags(quint32 header);
    void Clear_sector(int adress);
    void Data_writing(void);

};

#endif // PLATA_READ_WRITE_H
