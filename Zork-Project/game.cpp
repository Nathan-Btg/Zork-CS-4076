#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"

#include "ZorkUL.h"
#include <iostream>

Game::Game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)



{

    ui->setupUi(this);

    this->setGeometry(0, 0, 800, 600);
    this->setMinimumWidth(800);
    this->setMinimumHeight(600);

    gamepage = new Game;
    QPixmap back("vault.jpg");
    //ui ->background->setPixmap(back);

    push_button2 = new QPushButton(this);
    push_button2->setText("Click");
    push_button2->setGeometry(QRect(QPoint(0, 0), QSize(100, 50)));
    connect(push_button2, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
