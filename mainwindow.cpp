#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "checkstatus.h"
#include "update.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    hide();
    update = new Update(this);
    update->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
    checkstatus = new CheckStatus(this);
    checkstatus -> show();
}

