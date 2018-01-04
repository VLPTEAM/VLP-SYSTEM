#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::mapImportDialog(void)
{
    mapPath = QFileDialog::getOpenFileName(this, tr("地图导入"));

    if(!mapPath.isEmpty())
    {
        //导入背景地图
        if(!(pixMap.load(mapPath)))
        {
            qDebug() << tr("背景图片导入失败！");
        }

        //背景地图尺寸
        mapWidth = pixMap.width();
        mapHeight = pixMap.height();

        //导入导航图标
        if(!(pixStar.load(":/img/star.png")))
        {
            qDebug() << tr("导航图标导入失败！");
        }
    }
}


void MainWindow::mapSetPanel(bool value)
{
   //打开或关闭串口设置窗口
   ui->Xoffset->setVisible(value);
   ui->offsetXbox->setVisible(value);
   ui->Yoffset->setVisible(value);
   ui->offsetYbox->setVisible(value);
   ui->mapRatio->setVisible(value);
   ui->RatioBox->setVisible(value);
   ui->mapSetFrame->setVisible(value);
}

void MainWindow::openMapSetPanel(void)
{
    mapSetPanel(true);
}

void MainWindow::closeMapSetPanel(void)
{
    mapSetPanel(false);
}


void MainWindow::mapDispDialog(void)
{
    openMapSetPanel();
}

void MainWindow::on_mapSetConfirm_clicked()
{
    mapOffset_x = ui->offsetXbox->value();
    mapOffset_y = ui->offsetYbox->value();
    mapDispRatio = ui->RatioBox->currentText().toFloat();
    QMessageBox::information(this, tr("提示对话框"), tr("设置成功"));
    ui->serialFrame->move(screenWidth*mapDispRatio, mapOffset_x);
    ui->mapSetFrame->move(screenWidth*mapDispRatio, 300);
    ui->dataFrame->move(screenWidth*mapDispRatio, 500);
}

