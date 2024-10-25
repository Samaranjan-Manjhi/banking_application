#include "dashboard.h"
#include "ui_dashboard.h"
#include <QPropertyAnimation>
#include "sign_in.h"
#include "sign_up.h"
#include "scammerbank.h"
#include <QMessageBox>

Dashboard::Dashboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);


    // Create and configure the label
    QLabel *scrollLabel = new QLabel("WELCOME TO SCAMMER BANK", this);
    scrollLabel->setStyleSheet("font-size: 24px; font-weight: bold; color: black;");
    scrollLabel->setFont(QFont("Rasa", 24));
    scrollLabel->adjustSize();
    setFixedSize(764, 539);

    // Position the label
    scrollLabel->setGeometry(this->width(), this->height() - 30, scrollLabel->width(), scrollLabel->height());
    scrollLabel->show();

    // Animation for scrolling
    QPropertyAnimation *animation = new QPropertyAnimation(scrollLabel, "pos");
    animation->setDuration(10000); // Duration for one complete scroll
    animation->setStartValue(QPoint(this->width(), scrollLabel->y()));
    animation->setEndValue(QPoint(-scrollLabel->width(), scrollLabel->y()));
    animation->setLoopCount(-1); // Loop indefinitely
    animation->start();


}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_profile_clicked()
{

}

void Dashboard::on_logout_clicked()
{
    //ScammerBank *home = new ScammerBank(this);
    //home->show();
    this->deleteLater();
    ScammerBank *home = new ScammerBank(this);
    home->show();
}
