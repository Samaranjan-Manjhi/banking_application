#ifndef SCAMMERBANK_H
#define SCAMMERBANK_H

#include "sign_up.h"
#include <QMainWindow>
#include <QString>
#include <QLabel>
#include <QTimer>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ScammerBank; }
QT_END_NAMESPACE

class ScammerBank : public QMainWindow
{
    Q_OBJECT

public:
    ScammerBank(QWidget *parent = nullptr);
    ~ScammerBank();
    void showScrollLabel();
    void hideScrollLabel();

private slots:
    void on_signup_clicked();
    void on_signin_clicked();

private:
    Ui::ScammerBank *ui;
    QLabel *scrollLabel;
};
#endif // SCAMMERBANK_H
