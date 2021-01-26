/*
 * udp_rl.c
 *
 *  Created on: 12 янв. 2017 г.
 *      Author: real_bastard
 */
#include "udp_.h"
#include <windows.h>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QtCore>
#include <QChar>

//Структура с данными.
typedef struct
{
    uint32_t time;
    uint32_t speed;
    uint32_t gaz;
    float Vin;
    float gX;
    float gY;
    float gZ;
    uint32_t enc_R;
    uint32_t enc_L;
    float widthR;
    float widthL;
} d_type;

typedef struct
{
    uint16_t id;
    uint16_t mesNum;
    uint16_t thick;
    uint16_t level;
    uint16_t res[8];
    char scan[1000];
} pack_type;

/*
 * класс
 */
ThreadUdp::ThreadUdp(int ip)
{
    ip4 = ip;
    port = 10000;
    usedBufSpace = 0;
    readPos = 0;
    writePos = 0;

}

ThreadUdp::~ThreadUdp()
{

}

void ThreadUdp::connectToServer(quint16 _port)
{
    //QMutexLocker locker(&mutex);
    quit = false;
    usedBufSpace = 0;
    readPos = 0;
    writePos = 0;
    port = _port;
}

void ThreadUdp::stop()
{
    quit = true;
    udpSocket.close();
    emit finished();
}

void ThreadUdp::process()
{
    int OptVal = 1024 * 64 * 1024;
    int OptLen = sizeof(OptLen);

    udpSocket.bind(QHostAddress::Any, port+2);
    setsockopt(udpSocket.socketDescriptor(), SOL_SOCKET, SO_RCVBUF, (char *) &OptVal, OptLen);
    connect(&udpSocket, SIGNAL(readyRead()), this, SLOT(read()));
}

void ThreadUdp::change_ip(QString new_ip){
    current_ip=new_ip;
}


void ThreadUdp::send_pack(char *buf, int size)
{
    QString str = QString::number(ip4);
    QHostAddress adr=QHostAddress(current_ip);
    udpSocket.writeDatagram(buf, size, adr, 10000);
     //qDebug()<<"send---- ";
}


void ThreadUdp::read()
{
    quint32 size;
    quint16 localPort = 0;
    if (udpSocket.hasPendingDatagrams() == true) {
        size = udpSocket.readDatagram((char *) rxData, 1400, &currentIP, &localPort);
        rxData[size]=0;

        if ((localPort != port) && (localPort != port + 2)) {

            //emit errorUdp("udp err port="+QString::number(localPort));
        } else {

           emit UdpPack_rcv(rxData,size);

        }
    }
}
