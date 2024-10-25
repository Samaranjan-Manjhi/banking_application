#include "scammerbank.h"
#include "ui_scammerbank.h"
#include <QPixmap>
#include <QTimer>
#include <QLabel>
#include <QFont>
#include "sign_up.h"
#include <QPropertyAnimation>
#include <QApplication>
#include <QDesktopWidget>
#include <QScreen>
#include "sign_in.h"
#include "dashboard.h"
#include <QStackedWidget>

ScammerBank::ScammerBank(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ScammerBank)
{
    ui->setupUi(this);
    this->statusBar()->hide();

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
/*
    // Create the stacked widget
        stackedWidget = new QStackedWidget(this);
        setCentralWidget(stackedWidget); // Set it as the central widget

        // Create the ScammerBank page (this) and add it to the stacked widget
        stackedWidget->addWidget(this);
        stackedWidget->setCurrentIndex(0); // Show this page first

        // Add other pages (e.g., Sign_up, Sign_in, Dashboard)
        Sign_up *signUpPage = new Sign_up(this);
        stackedWidget->addWidget(signUpPage);

        Sign_IN *signinPage = new Sign_IN(this);
        stackedWidget->addWidget(signinPage);

        Dashboard *dashboardPage = new Dashboard(this);
        stackedWidget->addWidget(dashboardPage);
        */
}

ScammerBank::~ScammerBank()
{
    delete ui;
}

void ScammerBank::on_signup_clicked()
{
        Sign_up *signUpPage = new Sign_up(this); // Set parent to manage memory
        signUpPage->show();
}

void ScammerBank::on_signin_clicked()
{
    Sign_IN *signinPage = new Sign_IN(this);
    signinPage->show();
}


