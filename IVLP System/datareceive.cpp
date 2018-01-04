#include "mainwindow.h"
#include "ui_mainwindow.h"

//读取接收到的数据
void MainWindow::Read_Data()
{
    QRegularExpression re("#(.{6})\\t(.{6})\\t(.{6})\\t!");
    QByteArray buf;
    QThread::msleep(50);
    buf = serial->readAll();

    if(!buf.isEmpty())
    {
        QString str = tr(buf);
        QRegularExpressionMatch match  = re.match(str);
        if (match.hasMatch())
        {         
            ledA = match.captured(1);
            ledB = match.captured(2);
            ledC  = match.captured(3);

            pos_x = ledA.toFloat()*100 + 200;
            pos_y = ledB.toFloat()*100 + 200;;
            //QThread::msleep(100);

            if(str_all.length() > 210)
            {
                str_all = str_all.right(210);
            }
            str_all += (ledA + "\t" + ledB + "\t" + ledC );
            str_all += '\n';
            repaint();
        }

        ui->dataReceiver->clear();
        ui->dataReceiver->append(str_all);
    }
    buf.clear();
}
