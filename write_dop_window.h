#ifndef WRITE_DOP_WINDOW_H
#define WRITE_DOP_WINDOW_H

#include <QDialog>
#include "write_flash.h"

namespace Ui {
class write_dop_window;
}

class write_dop_window : public QDialog
{
    Q_OBJECT

public:
    explicit write_dop_window(QWidget *parent = nullptr);
    ~write_dop_window();

private slots:
    void on_last_file_clicked();
    void on_Change_file_clicked();
    void on_OK_clicked();
    void get_info(QString msg);
signals:
    void start_read (QString fileName, int segment_count);
    void update_segment_count (void);
private:
    Ui::write_dop_window *write_dop_win;
    QString fileName;
};

#endif // WRITE_DOP_WINDOW_H
