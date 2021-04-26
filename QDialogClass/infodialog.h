#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = nullptr);
    ~InfoDialog();

    QString getFavoriteoS() const;

    QString getPosition() const;

private slots:
    void on_OKpushButton_clicked();

    void on_CANCELpushButton_2_clicked();

private:
    Ui::InfoDialog *ui;
    QString position;
    QString FavoriteoS;
};

#endif // INFODIALOG_H
