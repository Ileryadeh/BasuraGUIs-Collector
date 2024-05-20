#include "update.h"
#include "ui_update.h"
#include "mainwindow.h"
#include "speci.h"

MainWindow *backU;
speci *speciDialog; // Declare speci as a pointer to speciDialog
Update::Update(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Update)
{
    ui->setupUi(this);
}

Update::~Update()
{
    delete ui;
}

void Update::on_pushButton_clicked()
{
    hide();
    speciDialog=new speci(this);
    speciDialog->show();
}

void Update::on_pushButton_2_clicked()
{
    hide();
    speciDialog=new speci(this);
    speciDialog->show();
}


void Update::on_pushButton_3_clicked()
{
    hide();
    speciDialog=new speci(this);
    speciDialog->show();
}

void Update::on_pushButton_4_clicked()
{
    hide();
    backU = new MainWindow();
    backU->show();
}
