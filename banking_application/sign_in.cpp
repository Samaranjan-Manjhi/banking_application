#include "sign_in.h"
#include "ui_sign_in.h"
#include "sign_up.h"
#include <QLineEdit>
#include "dashboard.h"
#include <QPropertyAnimation>

Sign_IN::Sign_IN(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sign_IN)
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

    //Placeholder
    ui->usernamein->setPlaceholderText("Enter Your User Name");
    ui->emailidin->setPlaceholderText("Enter Your E-mail ID");
    ui->passwordin->setPlaceholderText("Enter Your Password");
}

Sign_IN::~Sign_IN()
{
    delete ui;
}

void Sign_IN::on_insignup_clicked()
{
    Sign_up *signUpform = new Sign_up(this); // Set parent to manage memory
    signUpform->show();
}



void Sign_IN::on_login_clicked()
{
    Dashboard *mainframe = new Dashboard(this);
    mainframe->show();
}
