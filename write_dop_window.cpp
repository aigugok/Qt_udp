#include "write_dop_window.h"
#include "ui_write_dop_window.h"
#include <QtCore>
#include <QFileDialog>
#include <QMessageBox>

write_dop_window::write_dop_window(QWidget *parent) :
    QDialog(parent),
    write_dop_win(new Ui::write_dop_window)
{
    write_dop_win->setupUi(this);
    QWidget::setWhatsThis("Вы можете записать в память предущий файл или выбрать новый.\n"
                          "Значение адреса должно быть >=0x08010000.\n");
}

write_dop_window::~write_dop_window()
{
    delete write_dop_win;
}

void write_dop_window::get_info(QString msg){
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setText(msg);
    msgBox.exec();

}


void write_dop_window::on_last_file_clicked()
{
    //Чтение данный из файла
    QSettings settings ("settings.ini",QSettings::IniFormat);
    QString file = settings.value("file").toString();
    fileName=file;
    write_dop_win->fileName_->setText(file);
}



void write_dop_window::on_Change_file_clicked()
{
    fileName = QFileDialog::getOpenFileName(this, "Открыть файл","", "Файлы прошивки (*.hex)");
    if (fileName == "")
        return ;
    //Запись в файл настроек
    QSettings settings("settings.ini",QSettings::IniFormat);
    settings.setValue( "file", fileName);
    write_dop_win->fileName_->setText(fileName);
}



void write_dop_window::on_OK_clicked()
{   //по умолчанию читаем с первого сегмента
    emit start_read (fileName, 1);
    emit update_segment_count();
}
