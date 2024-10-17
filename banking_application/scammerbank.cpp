#include "scammerbank.h"
#include "ui_scammerbank.h"
#include <QPixmap>
#include <QTimer>
#include <QLabel>
#include <QFont>
#include "sign_up.h"

ScammerBank::ScammerBank(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ScammerBank)
{
    ui->setupUi(this);
    this->statusBar()->hide();

    // Create the scrolling label
    QLabel *scrollLabel = new QLabel("WELCOME TO SCAMMER BANK", this);
    scrollLabel->setStyleSheet("font-size: 24px; font-weight: bold; color: #eeeeec;");
    scrollLabel->setFont(QFont("Sarai", 24)); // Set font
    scrollLabel->adjustSize(); // Adjust size based on text
    setFixedSize(764, 539);

    // Set the label's initial position, higher from the bottom (e.g., Y = 400)
    scrollLabel->setGeometry(this->width(), this->height() - 100, scrollLabel->width(), scrollLabel->height());
    scrollLabel->show();
    // Set up a timer to update the label position
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, [scrollLabel, this]() {
        // Move the label left by a few pixels
        int x = scrollLabel->x();
        scrollLabel->move(x - 2, scrollLabel->y()); // Keep the Y position constant
        // If the label moves off the left side of the window, reset its position
        if (x < -scrollLabel->width()) {
            scrollLabel->move(this->width(), scrollLabel->y());
        }
    });
    timer->start(30); // Update every 30 milliseconds
}

ScammerBank::~ScammerBank()
{
    delete ui;
}


void ScammerBank::on_signup_clicked()
{
     Sign_up *signUpPage = new Sign_up(this); // Set parent to manage memory
    signUpPage->show();
    // Hide the previous label if it exists
//        if (scrollLabel) {
 //           scrollLabel->QWidget::hide();
   //     }

        // Create the new scrolling label
        scrollLabel = new QLabel("WELCOME TO SCAMMER BANK", this);
        scrollLabel->setStyleSheet("font-size: 24px; font-weight: bold; color: #eeeeec;");
        scrollLabel->setFont(QFont("Sarai", 24)); // Set font
        scrollLabel->adjustSize(); // Adjust size based on text
        setFixedSize(764, 539);

        // Set the label's initial position lower from the bottom (e.g., Y = 450)
        scrollLabel->setGeometry(this->width(), this->height() - 150, scrollLabel->width(), scrollLabel->height());
        scrollLabel->show();

        // Set up a timer to update the label position
        QTimer *timer = new QTimer(this);
        connect(timer, &QTimer::timeout, [this]() {  // Capture 'this' to access member variables
            // Move the label left by a few pixels
            int x = scrollLabel->x();
            scrollLabel->move(x - 2, scrollLabel->y()); // Keep the Y position constant
            // If the label moves off the left side of the window, reset its position
            if (x < -scrollLabel->width()) {
                scrollLabel->move(this->width(), scrollLabel->y());
            }
        });
        timer->start(30);
}
