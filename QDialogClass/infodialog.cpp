#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent,Qt::WindowSystemMenuHint|Qt::WindowTitleHint),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_OKpushButton_clicked()
{
    QString userPosition = ui->PositionlineEdit->text();
    if(!userPosition.isEmpty())
    {
        position=userPosition;
        if(ui->WindowsradioButton->isChecked())
        {
            FavoriteoS="Windows";
        }
        if(ui->MacradioButton->isChecked())
        {
            FavoriteoS="Mac";
        }
        if(ui->LinuxradioButton->isChecked())
        {
            FavoriteoS="Linux";
        }
    }
    accept();
}

void InfoDialog::on_CANCELpushButton_2_clicked()
{
    reject();
}

QString InfoDialog::getPosition() const
{
    return position;
}

QString InfoDialog::getFavoriteoS() const
{
    return FavoriteoS;
}
