#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //初始化主界面
    ui->setupUi(this);
    this->setWindowOpacity(1.0);//窗口整体透明度，0-1从全透明到不透明
    //设置窗口的显示位置在on_mapSetConfirm_clicked()重新设置
    ui->serialFrame->move(800, 50);
    ui->mapSetFrame->move(800, 300);
    ui->dataFrame->move(800, 500);

    //导入样式
    QFile file(":/qss/style.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    this->setStyleSheet(filetext.readAll());
    file.close();


    //关闭窗口
    closeSerialPanel();
    closeDataPanel();
    closeMapSetPanel();

    //查询可用串口号
    serialPortQuery();

    //初始化菜单栏
    setMenuBar();

    //获取屏幕信息
    QDesktopWidget* desktopWidget = QApplication::desktop();
    QRect screenInfo = desktopWidget->screenGeometry();
    screenWidth = screenInfo.width();
    screenHeight = screenInfo.height();

    //测试信息
    qDebug() << tr("界面设定成功！");
}

MainWindow::~MainWindow()
{
    delete ui;
}
