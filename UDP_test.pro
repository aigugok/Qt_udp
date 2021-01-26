TEMPLATE = app
TARGET = UDP_test
QT += core \
    gui\
    network
greaterThan(QT_MAJOR_VERSION, 4) { 
    QT += widgets
    QT += printsupport \
        } \
        else \
        {
}
HEADERS += UDP_test.h \
    hex_writing.h \
    plata_read_write.h \
    read_dop_window.h \
    start_dop_window.h \
    stm_ip_dop_window.h \
    udp_.h \
    write_dop_window.h
SOURCES += UDP_test.cpp \
    hex_writing.cpp \
    main.cpp \
    plata_read_write.cpp \
    read_dop_window.cpp \
    start_dop_window.cpp \
    stm_ip_dop_window.cpp \
    udp_.cpp \
    write_dop_window.cpp
FORMS += UDP_test.ui \
    read_dop_window.ui \
    start_dop_window.ui \
    stm_ip_dop_window.ui \
    write_dop_window.ui
RESOURCES += 

LIBS += -lws2_32

CONFIG += thread


