
#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QWidget>

namespace Ui {
class Sign_IN;
}

class Sign_IN : public QWidget
{
    Q_OBJECT

public:
    explicit Sign_IN(QWidget *parent = nullptr);
    ~Sign_IN();

private slots:
    void on_insignup_clicked();
    void on_login_clicked();

private:
    Ui::Sign_IN *ui;
};

#endif // SIGN_IN_H
