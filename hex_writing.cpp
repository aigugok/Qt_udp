#include "stdint.h"
#include "hex_writing.h"
#include <QFile>
#include <QDebug>

Write_hex::Write_hex(){ }

QString Write_hex::ControlSum(QString control){
    bool ok;
    int controlSum=0;//контрольная сумма
    int sum=0;
    QString tem;
    while (control.length() != 0){
        tem=control.left(2);
        controlSum+=tem.toInt(&ok, 16);
        control=control.remove(0,2);
    }
    //переводим контрольную сумму в 16-чную с.с.
    QString CCcheck = QString::number(controlSum, 16).toUpper();
    while (CCcheck.length()>2){
        CCcheck=CCcheck.remove(0,1);
    }
    //отнимаем 256-контрольная сумма (из двух символов в 16-чной с.с.)
    sum=256-CCcheck.toInt(&ok, 16);
    CCcheck = QString::number(sum, 16).toUpper();
    if (CCcheck.length()< 2){
        CCcheck='0'+CCcheck;
    }
    if (CCcheck.length()> 2){
        CCcheck=CCcheck.remove(0,1);
    }
    return control+CCcheck;
}

void Write_hex::HexWriteFile(QString *DataArr, int y){
    file_out.prepend("C:\\Qt\\Qt5.12.9\\Projects\\UDP_test\\");
    QFile file(file_out); //file where we write
    if (file.open(QIODevice::WriteOnly)){
        for(int j=0; j<y; j++){
            file.write(DataArr[j].toUtf8());
            file.write("\n");}
        file.write(":00000001FF");
        file.close();
    }
    emit print_to_info("Файл записан в папку C:\\Qt\\Qt5.12.9\\Projects\\UDP_test\\");
    return ;
}


void Write_hex::Data_to_hexformat(uint32_t start_add,char* data,uint32_t size_of_data, QString filename){
    file_out=filename;
    bool ok;

    //делим адрес на начальные (0800, 0801 и тд) и доп байты
    QString address =QString::number(start_add, 16).toUpper();
    QString addr_beg=address,start_dop=address;
    if(address.length()==8){
        addr_beg=address.remove(4,4);
        start_dop=address.remove(0,4);}
    else{addr_beg=addr_beg.insert(0,"0").remove(4,4);
        start_dop=address.remove(0,3);}
    int start_dop_adress=start_dop.toInt(&ok, 16);

    //смортим делится ли размер данных на 32 (32=размер байт в строке)
    int data_size=int(size_of_data)*4;
    int str_count=0;
    if(data_size%32==0){str_count=data_size/32+1;}
    else{str_count=data_size/32+2;}
    int counter=0;

    QString bytes_arr[data_size];//массив байт данных
    QString DataArr[str_count];//массив строк данных
    for(int i=0; i<data_size; i++){
        QString str = QString::number(data[i], 16).toUpper();
        if(str.length()<2){
            str=str.insert(0,"0");}
        if(str.length()>2){
            str=str.remove(0,str.length()-2);}
        bytes_arr[i]=str;
    }

    //собираем строки по 32 байта
    QString str,dop_addr="";
    int j=1;//индекс массива строки
    int bytes_count_on_string=start_dop_adress;//доп адрес строки
    for(int i=0; i<data_size; i++){
        counter++;
        dop_addr = QString("%1").arg(bytes_count_on_string, 4, 16, QLatin1Char('0'));
        if(counter==33){
            counter=1;
            //размер строки+доп адресс+00+строка по 32 байта
            DataArr[j]=QString::number(str.length()/2, 16).toUpper()+dop_addr.toUpper()+"00"+str;
            str="";
            bytes_count_on_string+=32;
            j++;
        }
        str=str+bytes_arr[i];
        if(i==data_size-1){
            DataArr[j]=QString::number(str.length()/2, 16).toUpper()+dop_addr.toUpper()+"00"+str;
            if(str.length()/2<10){
                DataArr[j].insert(0,"0");
            }
        }
    }

    //добавляем 0 строку и к трокам прибаляем контрольную сумму и ":"
    for(int j=0; j<str_count; j++){
        if(j==0){ //запись 0-ой строки
            DataArr[j]="0"+QString::number(addr_beg.length()/2, 16).toUpper()+"0000"+"04"+addr_beg;
        }
        DataArr[j]=":"+DataArr[j]+ControlSum(DataArr[j]);
    }
    HexWriteFile(DataArr, str_count);
}


//--------------------------write_func------------------------------------------------------------------------------
unsigned char Write_hex::char2bin(unsigned char ucCharacter)
{
    if ((ucCharacter >= '0') && (ucCharacter <= '9')) {
        return ucCharacter - '0';
    } else if ((ucCharacter >= 'A') && (ucCharacter <= 'F')) {
        return  (ucCharacter - 'A' + 0x0A);
    } else {
        return 0xFF;
    }
}

void Write_hex::Next_segment(int segment_number){
    qDebug()<<"segment_number"<<segment_number<<"all_segment"<<all_segment<<"all_count"<<all_count;
    //читаем все сегменты по очереди
    if (segment_number>all_segment){
        emit print_to_info("File was written");
        return;}

    //отправка данных о сегменте
    int segment_was_readen=0;
    segment_was_readen=Write_data_from_HexFile(file, segment_number, all_count);
    if(segment_was_readen==1){
        emit data_for_flash_writing(segment_size,segment_start_adress,(uint8_t*) (Data_array+start_size));}
}


//см кол-во сегментов и строк в файле
int Write_hex::Start_data_from_HexFile(QString fileName, int segment){
    file=fileName;
    QFile file_in(fileName);
    QString str = "";
    int all_segment_count=0;
    int str_count=0;
    if ((file_in.exists()) && (file_in.open(QIODevice::ReadOnly))) {
        while (!file_in.atEnd()) {
            str = file_in.readLine();
            str_count++;
            unsigned int cmd = char2bin(str[8].toLatin1()) + char2bin(str[7].toLatin1()) * 16;
            if(cmd==4){all_segment_count++;}
        }
        file_in.close();}
    all_count=str_count;
    all_segment=all_segment_count;
    Next_segment(segment);
    return 0;
}


void Write_hex::Read_Segment(QString str, int str_count){
    int start_arrd=0,dop_addr=0;
    QString start_ard,str_data = "";
    bool ok;
    unsigned int cmd = char2bin(str[8].toLatin1()) + char2bin(str[7].toLatin1()) * 16;

    if(cmd==4){ start_ard = str.remove(QRegExp("[: \r\n]")).remove(0, 8).remove(str.length() - 2, 2);//удаляем контрольную сумму
        start_ard.append("0000");
        start_arrd = start_ard.toUInt(&ok, 16);
        segment_start_adress=start_arrd;}
    if(cmd==0){
        dop_addr = char2bin(str[3].toLatin1()) * 16 * 16 * 16 + char2bin(str[4].toLatin1()) * 16 * 16+ char2bin(str[5].toLatin1()) * 16 + char2bin(str[6].toLatin1());
        str_data = str.remove(QRegExp("[: \r\n]")).remove(0, 8).remove(str.length() - 2, 2); //удаляем контрольную сумму


        //заполняем массив данных
        for (int j = 0; j < str_data.length(); j += 2) {
            Data_array[dop_addr + j / 2] = str_data.mid(j, 2).toUInt(&ok, 16);
            //qDebug()<<" "<<dop_addr + j / 2<<Data_array[dop_addr + j / 2];
        }
        //начальный адрес,размер(начальный размер мб !=0)
        if(str_count==2){segment_start_adress=segment_start_adress+dop_addr;
            start_size=dop_addr;}
        segment_size=dop_addr+str_data.length()/2-1;//размер
    }
}



//функция для выделения из hex файла конкретного сегмента
int Write_hex::Write_data_from_HexFile(QString fileName, int current_segment, int all_count){
    QFile file_in(fileName);
    QString str = "";
    int str_count=0,segment=0, segment_str_count=0;

    //get FF array (array with initial data)
    for (int i = 0; i < 0x10000; i++) {
        Data_array[i] = 0xFF;
    }
    if ((file_in.exists()) && (file_in.open(QIODevice::ReadOnly))) {
        while (!file_in.atEnd()) {
            str = file_in.readLine();
            str_count++;
            unsigned int cmd = char2bin(str[8].toLatin1()) + char2bin(str[7].toLatin1()) * 16;
            if(cmd==4){segment++;}

            if (segment==current_segment){
                segment_str_count++;
                Read_Segment(str,segment_str_count);
            }
            //если мы достигли нового сгемента или последней строки файла, обновляем данные о сегменте и возращаем 1
            if((cmd==4 && segment>current_segment)||(str_count==all_count && segment==current_segment)){
                return 1;}
        }

        file_in.close();}
    return 0;}


