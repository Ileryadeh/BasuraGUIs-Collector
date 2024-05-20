#include "checkstatus.h"
#include "ui_checkstatus.h"
#include "mainwindow.h"

MainWindow *backC;

CheckStatus::CheckStatus(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CheckStatus)
{
    ui->setupUi(this);
}

CheckStatus::~CheckStatus()
{
    delete ui;
}

void CheckStatus::on_pushButton_4_clicked()
{
    hide();
    backC = new MainWindow();
    backC->show();
}

