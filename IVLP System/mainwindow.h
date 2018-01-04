#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>
#include <QFileDialog>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "qcustomplot.h"
#include<Qpainter>
#include<QPixmap>
#include<QMenu>
#include<QMenuBar>
#include<QAction>
#include<QThread>
#include <QDesktopWidget>
#include<QRegularExpression>
#include <QInputDialog>
#include <QMessageBox>

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
    void serialPortQuery(void);
    void setMenuBar(void);

protected:
    //接口
    //实现改接口后，会在主窗口自动绘制图片
    void paintEvent(QPaintEvent*);


private slots:
    void on_openSerialButton_clicked();
    void Read_Data();
    void serialConfig(bool);
    void openSerialPanel(void);
    void closeSerialPanel(void);
    void openDataPanel(void);
    void closeDataPanel(void);
    void mapImportDialog(void);
    void mapDispDialog(void);
    void mapSetPanel(bool value);
    void openMapSetPanel(void);
    void closeMapSetPanel(void);

    void on_mapSetConfirm_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    QString str_all;

    int pos_x = 100;
    int pos_y = 100;
    int mapWidth;
    int mapHeight;
    int screenWidth;
    int screenHeight;

    QPixmap pixMap;
    QPixmap pixStar;
    QString ledA, ledB, ledC;
    QString mapPath;

    //地图显示原点相对于（0，0）的偏移
    int mapOffset_x = 0;
    int mapOffset_y = 0;
    //地图相对于屏幕的显示比例
    float mapDispRatio = 1.0;


//菜单栏定制
public:
    QMenuBar* menubar;

    QMenu* serialMenu;
    QAction* serialPanelOpen;
    QAction* serialPanelClose;

    QMenu* displayMenu;
    QAction* dataPanelOpen;
    QAction* dataPanelClose;

    QMenu* mapSet;
    QAction* mapImport;
    QAction* mapSetPaneOpen;
    QAction* mapSetPaneClose;

};

#endif // MAINWINDOW_H
