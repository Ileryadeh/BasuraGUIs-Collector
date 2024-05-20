#ifndef UPDATE_H
#define UPDATE_H

#include <QDialog>
#include "speci.h"

namespace Ui {
class Update;
}

class Update : public QDialog
{
    Q_OBJECT

public:
    explicit Update(QWidget *parent = nullptr);
    ~Update();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Update *ui;
    speci *speciDialog;
};

#endif // UPDATE_H
