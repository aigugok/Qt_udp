#ifndef HEX_WRITING_H
#define HEX_WRITING_H
#include "stdint.h"
#include <QDebug>
#include <QFile>
//#include "ui_UDP_test.h"
//#include "UDP_test.h"


class Write_hex : public QObject {
    Q_OBJECT 
public slots:
   int Start_data_from_HexFile(QString fileName, int segment=0);
   void Data_to_hexformat(uint32_t start_add,char* data,uint32_t size_of_data, QString file);
public:
    Write_hex();
signals:
    void print_to_info(QString a);
    void data_for_flash_writing(int size, int adress,uint8_t* Data);
private:
    void Read_Segment(QString str, int str_count);
    QString ControlSum(QString control);
    void HexWriteFile(QString *DataArr, int y);
    int Write_data_from_HexFile(QString fileName, int current_segment, int all_count);
    unsigned char char2bin(unsigned char ucCharacter);

    bool ok;
    int controlSum;
    int sum;
    QString file_out="";
    uint8_t *Data_array = new uint8_t[0x10000];
    int segment_size=0;// конечный размер сегмента
    int segment_start_adress=0;//стартовый адрес сегмента
    int start_size=0;//стартовый доп адрес сегмента или нач размер сегмента
    int all_count=0;//кол-во строк в фале
    int all_segment=0;//кол-во сегментов
    QString file="";//имя файла

private slots:
     void Next_segment(int segment_number);
};
#endif // HEX_WRITING_H
