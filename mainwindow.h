#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QtSerialPort/QSerialPort>
#include <QTimer>
#include <QDebug>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void close_port();
private:
    Ui::MainWindow *ui;
    QProcess *avrdude_proc;
    QSerialPort port;
    QTimer* timer = new QTimer;
private:


};

#endif // MAINWINDOW_H
