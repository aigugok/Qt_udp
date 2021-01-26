#ifndef START_DOP_WINDOW_H
#define START_DOP_WINDOW_H
#include "udp_.h"

#include <QDialog>

namespace Ui {
class Start_dop_window;
}

class Start_dop_window : public QDialog
{
    Q_OBJECT

public:
    explicit Start_dop_window(QWidget *parent = nullptr);
    ~Start_dop_window();
signals:
     void send_start_pack(char* a, int b);
private slots:
    void on_OK_clicked();
    void get_info(QString msg);

private:
    typedef struct  {
        uint32_t size;
        uint32_t header;
        uint32_t command;
        uint32_t addr;
        uint8_t data[256];

    }data_struct;
    Ui::Start_dop_window *start_dop_win;
};

#endif // START_DOP_WINDOW_H
