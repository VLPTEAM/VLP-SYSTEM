#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::on_openSerialButton_clicked()
{
    if(ui->openSerialButton->text()==tr("打开串口"))
    {
        serial = new QSerialPort;
        //设置串口名
        serial->setPortName(ui->PortBox->currentText());
        //打开串口
        serial->open(QIODevice::ReadWrite);
        //设置波特率
        serial->setBaudRate(ui->BaudBox->currentText().toInt());
        //设置数据位数
        switch(ui->BitNumBox->currentIndex())
        {
        case 8: serial->setDataBits(QSerialPort::Data8); break;
        default: break;
        }
        //设置奇偶校验
        switch(ui->ParityBox->currentIndex())
        {
        case 0: serial->setParity(QSerialPort::NoParity); break;
        default: break;
        }
        //设置停止位
        switch(ui->StopBox->currentIndex())
        {
        case 1: serial->setStopBits(QSerialPort::OneStop); break;
        case 2: serial->setStopBits(QSerialPort::TwoStop); break;
        default: break;
        }
        //设置流控制
        serial->setFlowControl(QSerialPort::NoFlowControl);

        //关闭设置菜单使能
        ui->PortBox->setEnabled(false);
        ui->BaudBox->setEnabled(false);
        ui->BitNumBox->setEnabled(false);
        ui->ParityBox->setEnabled(false);
        ui->StopBox->setEnabled(false);
        ui->openSerialButton->setText(tr("关闭串口"));

        //连接信号槽
        connect(serial, &QSerialPort::readyRead, this, &MainWindow::Read_Data);
    }
    else
    {
        //关闭串口
        serial->clear();
        serial->close();
        serial->deleteLater();

        //恢复设置使能
        ui->PortBox->setEnabled(true);
        ui->BaudBox->setEnabled(true);
        ui->BitNumBox->setEnabled(true);
        ui->ParityBox->setEnabled(true);
        ui->StopBox->setEnabled(true);
        ui->openSerialButton->setText(tr("打开串口"));
    }
}


void MainWindow::serialConfig(bool value)
{
   //打开或关闭串口设置窗口
   ui->serialPort->setVisible(value);
   ui->baudRate->setVisible(value);
   ui->bitNum->setVisible(value);
   ui->parityBit->setVisible(value);
   ui->stopBit->setVisible(value);
   ui->openSerialButton->setVisible(value);
   ui->serialFrame->setVisible(value);

   ui->PortBox->setVisible(value);
   ui->BaudBox->setVisible(value);
   ui->BitNumBox->setVisible(value);
   ui->ParityBox->setVisible(value);
   ui->StopBox->setVisible(value);
}

void MainWindow::openSerialPanel(void)
{
    serialConfig(true);
}

void MainWindow::closeSerialPanel(void)
{
    serialConfig(false);
}


//查找可用的串口
void MainWindow::serialPortQuery(void)
{//foreach(引用，列表或数组等)；即遍历列表中的每个数据，将每个数据赋值给这个引用。
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->PortBox->addItem(serial.portName());
            serial.close();
        }
    }
    //设置波特率下拉菜单默认显示第三项
    ui->BaudBox->setCurrentIndex(3);
}
