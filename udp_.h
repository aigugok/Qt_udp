/*
 * udp_rl.h
 *
 *  Created on: 12 янв. 2017 г.
 *      Author: real_bastard
 */

#ifndef UDP_RL_H_
#define UDP_RL_H_
#include <stdint.h>
#include <QWidget>
#include <QtNetwork/QUdpSocket>

#include <QMutex>

#define BUF_SIZE	10000
#define DATA_PACKET			0
#define ASCAN_L_PACKET		1
#define ASCAN_R_PACKET		2

typedef struct {
    uint32_t pac_type;
    int8_t data[1024-4];	//массив с содержимым
} udp_pack_type;

typedef struct {
    float thickness;
    uint32_t gain;
} robot_data_type;

class ThreadUdp : public QObject {
    Q_OBJECT

public:
    ThreadUdp(int ip=50);
    ~ThreadUdp();
    void connectToServer(quint16 _port = 12000);
    //	void run();
    void stop();
    int get(char* data);

    QUdpSocket udpSocket;
    QHostAddress currentIP;
    QString current_ip="192.168.1.50";
    char rxData[8000];
public slots:
    void process();
    void read();
    void send_pack(char* buf,int size);
    void change_ip(QString new_ip);

signals:
    void finished();
    void errorUdp(QString errorMessage);
    void UdpPack_rcv(char* rxData,quint32 sizedata);
    //void UdpPack_rcv(acception_data*, quint32);
private:
    bool quit;
    QMutex mutexBuf;
    int usedBufSpace;
    int readPos;
    int writePos;
    quint16 port;
    robot_data_type* dataBuf;
    int ip4;

};

#endif /* UDP_H_ */
