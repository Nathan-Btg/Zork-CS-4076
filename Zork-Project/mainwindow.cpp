#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ZorkUL.h"
#include <iostream>
#include <QtDebug>
#include <QString>

#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui -> photo->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/hall.png").scaled(510,320));
    ui -> item1->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/money.png").scaled(117,103));
    string RoomName;

    this->setGeometry(0, 0, 800, 600);
    this->setMinimumWidth(800);
    this->setMinimumHeight(600);
}

MainWindow::~MainWindow()
{
    delete ui;
}


////////////////////////////////////////////

void MainWindow::on_Up_clicked()
{
   playgame->goRoom("up");
    ui ->RoomNameText->setText(QString::fromStdString(playgame->currentRoom->getName()));
    ui-> photo ->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/"+QString::fromStdString(playgame->currentRoom->getName())+".png").scaled(510,320));
}


void MainWindow::on_Left_clicked()
{
    playgame->goRoom("left");
    ui ->RoomNameText->setText(QString::fromStdString(playgame->currentRoom->getName()));
    ui-> photo ->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/"+QString::fromStdString(playgame->currentRoom->getName())+".png").scaled(510,320));

}


void MainWindow::on_Right_clicked()
{
    playgame->goRoom("right");
    ui ->RoomNameText->setText(QString::fromStdString(playgame->currentRoom->getName()));
    ui-> photo ->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/"+QString::fromStdString(playgame->currentRoom->getName())+".png").scaled(510,320));

}


void MainWindow::on_Down_clicked()
{
    playgame->goRoom("down");
    ui ->RoomNameText->setText(QString::fromStdString(playgame->currentRoom->getName()));
    ui-> photo ->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/"+QString::fromStdString(playgame->currentRoom->getName())+".png").scaled(510,320));

}

void MainWindow::setgame()
{
    string roomtext = "Room: ";
    playgame= new ZorkUL;
    ui -> RoomNameText->setText("hall");
}

