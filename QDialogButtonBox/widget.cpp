#include "widget.h"
#include "ui_widget.h"
#include"infodialog.h"
#include<QDebug>
widget::widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::widget)
{
    ui->setupUi(this);
}

widget::~widget()
{
    delete ui;
}


void widget::on_ShowInformationpushButton_clicked()
{
    InfoDialog *dialog=new InfoDialog(this);

    connect(dialog,&InfoDialog::accepted,[=](){

    qDebug()<<"Dialog Accepted";

    });
    connect(dialog,&InfoDialog::rejected,[=](){

    qDebug()<<"Dialog Rejected";

    });
    dialog->exec();
}
