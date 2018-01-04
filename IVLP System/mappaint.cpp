#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::paintEvent(QPaintEvent*)
{
    //导入背景图片
    QPainter painter(this);
    //绘制地图
    if(mapWidth/mapHeight > screenWidth/screenHeight)
    {
        painter.drawPixmap(mapOffset_x, mapOffset_y, screenWidth*mapDispRatio, screenWidth*mapDispRatio*mapHeight/mapHeight, pixMap);
    }
    else
    {
       painter.drawPixmap(mapOffset_x, mapOffset_y, screenHeight*mapDispRatio*mapWidth/mapHeight, screenHeight*mapDispRatio, pixMap);
    }

    //显示当前目标位置
    painter.drawPixmap(pos_x,pos_y,25,25,pixStar);  //显示五角星
}
