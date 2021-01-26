#ifndef READ_DOP_WINDOW_H
#define READ_DOP_WINDOW_H
#include <QDialog>
#include <QMessageBox>
#include <QAction>

namespace Ui {
class Read_dop_window;
}

class Read_dop_window : public QDialog
{
    Q_OBJECT

public:
    explicit Read_dop_window(QWidget *parent = nullptr);
    ~Read_dop_window();
signals:
    void read_flash( uint32_t addr,  uint32_t size, QString fileout);

private slots:
    void on_pushButton_clicked();
    void get_info(QString msg);

private:
    Ui::Read_dop_window *read_dop;



};

#endif // READ_DOP_WINDOW_H
