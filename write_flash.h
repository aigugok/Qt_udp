#ifndef WRITE_FLASH_H
#define WRITE_FLASH_H
#include "stdint.h"
#include "udp_.h"
#include <QTimer>
#include <QTime>



class Write_Flash : public QObject {
    Q_OBJECT
public slots:
    void Start_Write(QString fileName);
    int Data_from_HexFile(QString fileName);
    void Flag_from_plata(quint32 header);
    void Read_Segment(int segment,QString str);
    void Write_Bytes(int send_size);
    void Repead_sending(void);
    void First_sending(void);
    void Clear_sector(int start_adress);



    unsigned char char2bin(unsigned char ucCharacter);
public:
    Write_Flash();
    typedef struct  {
        uint32_t size;
        uint32_t header;
        uint32_t command;
        uint32_t addr;
        uint8_t data[256];
    }data_struct;
    data_struct paket_wr;

    int all_segment=0;//общее кол-во сегментов
    QString write_file="";//переменная названия файла с которым работает пользователь
    int current_segment=1;
    int start_adress=0;
    int size=0;//размер сегмента (уменьшается при каждой отправке)
    int all_size=0;//размер сегмента (не меняется), нужен для ProgressBar а
    int start_size=0;//стартовый размер (он не равен 0, когда сегмент не равен 0)
    int count_pakets=0;//количество отправленных пакетов

    int count=0;//кол-во строк файла
    int flag=0; //flag перезагрузки GUI
    int str_count=0; //кол-во строк, попадающих в ф-ию Read_Segment
    bool flag_flash_is_clear=0; // флаг очитски памяти
    bool flag_to_write=0;// флаг состояния ОК записи
    int count_clear_timer=0;//считаем сколько мы ждем от платы ответ об очистке
    int repead_size=0;//переменная для повторной отправки
    int count_of_repead_sending=0;//кол-во повторных отправок



 uint8_t *Data_array = new uint8_t[0x10000];


    ~Write_Flash();
signals:
     void send_pack(char* a, int b);
     void print_to_textEdit(QString a);
     void print_to_info(QString a);
     void print_to_error (QString a);
     void Progress_bar(int current_size);
   private:
    //QTimer timerRead;
    ThreadUdp _udp;
     QTimer timer;
     QTimer timer_clear;



};


#endif // WRITE_FLASH_H
