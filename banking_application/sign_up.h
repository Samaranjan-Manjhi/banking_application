#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class Sign_up;
}

class Sign_up : public QWidget
{
    Q_OBJECT

public:
    explicit Sign_up(QWidget *parent = nullptr);
    ~Sign_up();

private slots:
    void on_signin_clicked();
    void on_formsumit_clicked();

private:
    Ui::Sign_up *ui;
    //bool createDatabase();
    //bool openDatabase();
};

bool createDatabase();
#endif // SIGN_UP_H
