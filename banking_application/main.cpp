#include "scammerbank.h"
#include "ui_sign_up.h"
#include "sign_up.h"
#include <QApplication>
#include <QStackedWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScammerBank w;
    w.show();
    return a.exec();
}
