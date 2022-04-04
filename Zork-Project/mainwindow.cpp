#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ZorkUL.h"
#include "Room.h"
#include <iostream>
#include <QtDebug>
#include <QString>
#include <QPixmap>
#include "wordle2.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui -> photo->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/hall.png").scaled(510,320));
    displayitem("money");
    string RoomName;

    this->setGeometry(0, 0, 800, 600);
    this->setMinimumWidth(800);
    this->setMinimumHeight(600);

    ui->Takebutton->hide();
    ui->Dropbutton->hide();


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
    if (playgame->currentRoom->numberOfItems()!=0)
        ui->Takebutton->show();
    else
        ui->Takebutton->hide();
}


void MainWindow::on_Left_clicked()
{
    playgame->goRoom("left");
    ui ->RoomNameText->setText(QString::fromStdString(playgame->currentRoom->getName()));
    ui-> photo ->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/"+QString::fromStdString(playgame->currentRoom->getName())+".png").scaled(510,320));
    if (playgame->currentRoom->numberOfItems()!=0)
        ui->Takebutton->show();
    else
        ui->Takebutton->hide();
}


void MainWindow::on_Right_clicked()
{
    playgame->goRoom("right");
    ui ->RoomNameText->setText(QString::fromStdString(playgame->currentRoom->getName()));
    ui-> photo ->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/"+QString::fromStdString(playgame->currentRoom->getName())+".png").scaled(510,320));
    if (playgame->currentRoom->numberOfItems()!=0)
        ui->Takebutton->show();
    else
        ui->Takebutton->hide();
}


void MainWindow::on_Down_clicked()
{
    playgame->goRoom("down");
    ui ->RoomNameText->setText(QString::fromStdString(playgame->currentRoom->getName()));
    ui-> photo ->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/"+QString::fromStdString(playgame->currentRoom->getName())+".png").scaled(510,320));
    if (playgame->currentRoom->numberOfItems()!=0)
        ui->Takebutton->show();
    else
        ui->Takebutton->hide();
    if (playgame->step==0){

    }
}

void MainWindow::setgame()
{
    playgame= new ZorkUL;
    ui -> RoomNameText->setText("hall");

}

void MainWindow::displayitem(string itemname){
    if (itemname=="money")
       ui->item1->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/money.png").scaled(117,103));
}

void MainWindow::hideitem(string itemname){
    if (itemname=="money")
        ui->item1->hide();
}

void MainWindow::on_Takebutton_clicked()
{
    ui->Takebutton->hide();
    ui->Dropbutton->show();
    if (playgame->currentRoom->getName()=="bank counter")
    {
        ui->item3->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/employee card.png").scaled(117,103));
    }
    Item takenitem=playgame->currentRoom->itemsInRoom[0];
    playgame->currentRoom->removeItemFromRoom(0);
    playgame->addtoinventory(takenitem);
}


void MainWindow::on_Dropbutton_clicked()
{
    ui->Dropbutton->hide();
    ui->Takebutton->show();
    if (playgame->currentRoom->getName()=="bank counter")
    {
        ui->item3->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/empty.png").scaled(117,103));
    }
    Item droppeditem=playgame->Inventory[0];
    playgame->currentRoom->addItem(new Item(droppeditem.getShortDescription()));
}

void MainWindow::Story()
{

    if (playgame->currentRoom->getName()=="hall")
        ui->story->setText("");
    else if (playgame->currentRoom->getName()=="hall")
        ui->story->setText("");
    else{
        if (playgame->step==0)
        {
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
        else if (playgame->step==1){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
        else if (playgame->step==2){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
        else if (playgame->step==3){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
        else if (playgame->step==4){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
        else if (playgame->step==5){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
    }
}

void MainWindow::on_strongbox_clicked()
{
    Wordle2 *w =new Wordle2;
    w->show();
    w->line=0;
    w->col=0;
    //this->hide();
}

