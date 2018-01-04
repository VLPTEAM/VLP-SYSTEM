#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::setMenuBar(void)
{
    //菜单栏
    menubar = new QMenuBar(this);
    menubar->setFixedSize(maximumWidth(),30);

    /* 串口设置*///子菜单
    serialMenu = menubar->addMenu("串口");

    //打开串口设置窗口
    serialPanelOpen = new QAction("打开设置窗口", this);
    serialMenu->addAction(serialPanelOpen);
    connect(serialPanelOpen, SIGNAL(triggered()), this, SLOT(openSerialPanel()));
    //关闭串口设置窗口
    serialPanelClose = new QAction("关闭设置窗口", this);
    serialMenu->addAction(serialPanelClose);
    connect(serialPanelClose, SIGNAL(triggered()), this, SLOT(closeSerialPanel()));

    /*接收和显示*///子菜单
    displayMenu = menubar->addMenu("显示");

    //打开数据接收窗口
    dataPanelOpen = new QAction("打开接收窗口", this);
    displayMenu->addAction(dataPanelOpen);
    connect(dataPanelOpen, SIGNAL(triggered()), this, SLOT(openDataPanel()));
    //关闭数据接收窗口
    dataPanelClose = new QAction("关闭接收窗口", this);
    displayMenu->addAction(dataPanelClose);
    connect(dataPanelClose, SIGNAL(triggered()), this, SLOT(closeDataPanel()));

    /*背景地图*///子菜单
    mapSet = menubar->addMenu("地图");

    //打开"导入地图"对话窗
    mapImport = new QAction("导入地图", this);
    mapSet->addAction(mapImport);
    connect(mapImport, SIGNAL(triggered()), this, SLOT(mapImportDialog()));

    //打开"地图显示偏移量和显示比例"对话窗
    mapSetPaneOpen = new QAction("地图显示偏移量和显示比例", this);
    mapSet->addAction(mapSetPaneOpen);
    connect(mapSetPaneOpen, SIGNAL(triggered()), this, SLOT(openMapSetPanel()));

    //关闭"地图显示偏移量和显示比例"对话窗
    mapSetPaneClose = new QAction("关闭", this);
    mapSet->addAction(mapSetPaneClose);
    connect(mapSetPaneClose, SIGNAL(triggered()), this, SLOT(closeMapSetPanel()));
}
