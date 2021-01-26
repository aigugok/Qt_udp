#include "plata_read_write.h"
#include "stdint.h"
#include <QDebug>

plata_read_write::plata_read_write(QObject *parent) : QObject(parent){
    connect(&timer_clear, SIGNAL(timeout()), this, SLOT(First_sending()));
    connect(&timer_repead_writing, SIGNAL(timeout()), this, SLOT(Repead_sending()));
    connect(&timer_repead_reading, SIGNAL(timeout()), this, SLOT(Repead_fl_sending()));

}
plata_read_write::~plata_read_write(){
    if(rd_arraPtr!=0){delete[] rd_arraPtr;}}

//-------------------read_functions------------------------

//функция повторной отправки (если овтет от платы не пришел в течение 3 сек)
void plata_read_write::Repead_fl_sending(){
    if (rd_last_address==rd_next_address){
        emit send_command((char*) &wr_rd_struct, sizeof(wr_rd_struct));}
    rd_last_address=rd_next_address;
}

// функция отправки запроса на чтение данных
void plata_read_write::CurrentRead( uint32_t addr,  uint32_t size){
    if (addr>rd_start_address){
        rd_packet_count++;}
    else{rd_packet_count=0;}

    if(size>256){rd_new_size=size-256;
        rd_next_address=addr+256*4;//считываем по 256 байт
        rd_cur_size=256;}
    else{rd_next_address=0;
        rd_new_size=0;
        rd_cur_size=size;}

    wr_rd_struct.size=rd_cur_size;
    wr_rd_struct.command=0001;
    wr_rd_struct.addr=addr;
    emit send_command((char*) &wr_rd_struct, sizeof(wr_rd_struct));
}

//функция начала чтения
void plata_read_write::StartRead( uint32_t addr,  uint32_t size, QString fileout){
    //update vars
    rd_file=fileout;
    rd_all_size=size;
    rd_start_address=addr;
    if(rd_arraPtr!=0){
        delete[] rd_arraPtr;}
    rd_arraPtr=new quint32[rd_all_size];
    rd_last_address=addr;

    timer_repead_reading.start(3000);
    CurrentRead(rd_start_address, rd_all_size);
}

typedef struct  {
    quint32 acception_size;
    quint32 acception_header;
    quint32 acception_data[64];
}acception_data;

void plata_read_write::STM_responces(char *Data,quint32 sizedata){
    acception_data *data_on_plata=(acception_data*) Data;
    quint32 check_size=sizedata-sizeof(data_on_plata->acception_header)-sizeof(data_on_plata->acception_size)-4*sizeof(data_on_plata->acception_data);

    //проверка headerов ответа от платы
    if (data_on_plata->acception_header==4){
        send_udp_check_power_flag(data_on_plata->acception_header); //power
        return;}
    else{
        if(data_on_plata->acception_header==2){
            Flags(2);//write
            return;}
        if(data_on_plata->acception_header==3 ){
            Flags(3);//clear
            return;}
        if (data_on_plata->acception_header!=5 && check_size!=0){
            send_udp_messangers((char*) Data); //сообщение от платы
            return;}
    }
    //запись данных в массив
    if (data_on_plata->acception_header==5){
        qDebug()<<"paket.addr"<<hex<<wr_rd_struct.addr<<" "<<rd_packet_count;
        for(quint32 i=0; i<rd_cur_size; i++){
            rd_arraPtr[rd_packet_count*256+i]=data_on_plata->acception_data[i];
            //qDebug()<<"data[]"<<rd_packet_count*256+i<<"="<<hex<<data_on_plata->acception_data[i]<<"on_plata number is"<<rd_start_address+rd_packet_count*4*256+i*4;
        }

        //процент для Progress_bar
        int value=0;
        if(rd_new_size>0){
            value=(rd_all_size-rd_new_size)*100/rd_all_size;}
        else{value=100;}
        emit Progress_bar(value);

        //отправка либо следующее чтение пакета данных
        if(rd_next_address!=0 && rd_new_size!=0){
            CurrentRead(rd_next_address, rd_new_size);}
        else{timer_repead_reading.stop();
            emit write_readen_array(rd_start_address,(char*) rd_arraPtr, rd_all_size,rd_file);
            return;}
    }
}
//--------------------write_functions-----------------------
void plata_read_write::Clear_sector(int adress) {
    wr_rd_struct.command = 0100;
    wr_rd_struct.addr=adress;
    emit send_command((char *) &wr_rd_struct, sizeof(wr_rd_struct));
}

//при нажатии кнопки кол-во сегментов обнуляется
void plata_read_write::Update_segment_number(void){
    current_segment=1;
}

void plata_read_write::Flags(quint32 header){
    if(header==3){
        flag_to_clear=1;}
    if(header==2){
        flag_to_write=1;
        //update vars
        count_pakets++;
        segment_size-=256;}

    if(flag_to_write==1){
        if(segment_size>0 && count_pakets>0)
            {Data_writing();}

        if(segment_size<=0){
            timer_repead_writing.stop();
            current_segment++;
            emit next_segment(current_segment);}
    }
}

void plata_read_write::Start_Writing(int size, int adress, uint8_t* data){
    //update vars
    count_pakets=0;
    segment_size=size;
    segment_adress=adress;
    data_array=data;
    all_segment_size=size;

    //start timer for checking clear response
    Clear_sector(segment_adress);
    timer_clear.start(2000);
}


void plata_read_write::Data_writing(){
    wr_rd_struct.command=0010;
    wr_rd_struct.header=0010;
    wr_rd_struct.addr=segment_adress+count_pakets*256;
    if (segment_size>256){wr_rd_struct.size=256;}
    else{wr_rd_struct.size=segment_size;}

    //get data array of current segment
    for (int i = 0; i < 256; i++) {
        wr_rd_struct.data[i] = 0xFF;}

    for (int i = 0; i < wr_rd_struct.size; i++) {
        wr_rd_struct.data[i] =data_array[i+count_pakets*256] ;}

    qDebug()<<"n-ый пакет write_struct.addr"<<hex<<wr_rd_struct.addr;
    emit send_command((char *) &wr_rd_struct, sizeof(wr_rd_struct));
    flag_to_write=0;

    //процент для Progress_bar
    int value=0;
    if(segment_size-256>0){
        value=(all_segment_size-segment_size-256)*100/all_segment_size;}
    else{value=100;}
    emit Progress_bar(value);
}

//func for repead clear_request or write clear_errors
void plata_read_write::First_sending(){
    count_clear_timer++;
    if(segment_adress< 0x08010000){
        emit print_to_info("Вы пытаетесь переписать прошивку платы");
        timer_clear.stop();}
    if(flag_to_clear==1){
        timer_clear.stop();
        Data_writing();
        count_clear_timer=0;
        timer_repead_writing.start(2000);}
    if(count_clear_timer>5){qDebug()<<"Repead_clear_command";
        Clear_sector(segment_adress);}
    if(count_clear_timer>10){
        timer_clear.stop();
        emit print_to_info("Проблемы с очисткой памяти платы, попробуйте прочитать еще раз");
        return;}
}

//repead sending write_request
void plata_read_write::Repead_sending(){
    if (repead_size==segment_size){
        count_of_repead_sending++;
        qDebug()<<"repead_sending";
        Data_writing();}
    else{count_of_repead_sending=0;}

    if(count_of_repead_sending>5){
        emit print_to_info("Проблема с отправкой");
        timer_repead_writing.stop();
        return;}
    repead_size=segment_size;
}
