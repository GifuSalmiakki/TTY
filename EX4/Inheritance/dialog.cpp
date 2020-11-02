#include "dialog.hh"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_buttonBox_accepted()
{
    Dialog::accept();
}

void Dialog::on_buttonBox_rejected()
{
    Dialog::reject();
}

void Dialog::on_Dialog_finished(int result)
{
    QString stringresult = ui->spinBox->text();
    result = stringresult.toInt();
}

