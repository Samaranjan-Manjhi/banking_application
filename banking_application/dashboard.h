#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>
#include "scammerbank.h"
#include <QStackedWidget>

namespace Ui {
class Dashboard;
}

class Dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_profile_clicked();

    void on_logout_clicked();

private:
    Ui::Dashboard *ui;
};

#endif // DASHBOARD_H
