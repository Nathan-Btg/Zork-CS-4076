#include "mainwindow.h"
#include "ui_mainwindow.h"


#include "game.h"
#include "ZorkUL.h"
#include <iostream>
#include <QtDebug>

#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QPixmap pix("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/vault.jpg");
    ui -> photo->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/vault.jpg").scaled(400,300));

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
   qDebug() << "up";
}


void MainWindow::on_Left_clicked()
{

}


void MainWindow::on_Right_clicked()
{

}


void MainWindow::on_Down_clicked()
{
    ZorkUL::goRoom("down");
}

void MainWindow::setgame()
{
    string roomtext = "Room: ";
}

