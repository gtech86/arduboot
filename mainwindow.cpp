#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(close_port()));
    port.setBaudRate(QSerialPort::Baud1200,QSerialPort::AllDirections);
    port.setStopBits(QSerialPort::OneStop);
    port.setDataBits(QSerialPort::Data8);
    port.setParity(QSerialPort::NoParity);
    port.setFlowControl(QSerialPort::NoFlowControl);
    ///////////////
    /*grfgfg*/


    ////////////////////


    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
    port.close();
}

void MainWindow::close_port(){
    port.close();

}

void MainWindow::on_pushButton_clicked()
{
    port.setPortName(ui->lineEdit->text());

    port.open(QIODevice::ReadWrite);



}
