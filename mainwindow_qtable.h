#ifndef MAINWINDOW_QTABLE_H
#define MAINWINDOW_QTABLE_H

#include <QMainWindow>

/* My includes */


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow  *ui;

private:
    /* Метод для настройки интерфейса,
     * в данном методе будет выполняться заполнение QTableWidget
     * записями из таблицы
     * */
    void createUI(const QStringList &headers);
};

#endif // MAINWINDOW_QTABLE_H
