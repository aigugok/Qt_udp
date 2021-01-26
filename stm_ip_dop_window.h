#ifndef STM_IP_H
#define STM_IP_H

#include <QDialog>

namespace Ui {
class STM_IP;
}

class STM_IP : public QDialog
{
    Q_OBJECT

public:
    explicit STM_IP(QWidget *parent = nullptr);
    ~STM_IP();

private slots:
    void on_OK_clicked();
    void get_info(QString msg);

private:
    Ui::STM_IP *stm_ip_window;
signals:
    void ip_change(QString ip4);

};

#endif // STM_IP_H
