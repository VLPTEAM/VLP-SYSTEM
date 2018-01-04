#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::openDataPanel(void)
{
    ui->dataPanel->setVisible(true);
    ui->dataReceiver->setVisible(true);
    ui->dataFrame->setVisible(true);
}

void MainWindow::closeDataPanel(void)
{
    ui->dataPanel->setVisible(false);
    ui->dataReceiver->setVisible(false);
    ui->dataFrame->setVisible(false);
}
