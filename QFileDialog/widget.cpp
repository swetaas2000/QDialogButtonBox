#include "widget.h"
#include "ui_widget.h"
#include<QFile>
#include<QFileDialog>
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString dir=QFileDialog::getExistingDirectory(this,tr("Open Directory"),"C://",QFileDialog::ShowDirsOnly|QFileDialog::
                                                  DontResolveSymlinks);
    qDebug()<<"Your chosen directory is:"<<dir;




  /*  QString fileName=QFileDialog::getOpenFileName(this,tr("Open File"),"/home",tr("Images(*.png *.xpm *.jpg"));
    qDebug()<<"Your chosen file name is:"<<fileName;

*/

  /*  QStringList files = QFileDialog::getOpenFileNames(this,"Select one or more files to open",
                                                      "/home",
                                                      "Images(*.png *.xpm *.jpg);;Text files(*.txt);;XML files (*.xml)");
    qDebug()<<"Your chosen files are:"<<files;

*/


  /*  QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "/home/jana/untitled.png",
                               tr("Images (*.png *.xpm *.jpg);;Text files(*.txt)"));
qDebug()<<"Your chosen file name is:"<<fileName;*/

}
