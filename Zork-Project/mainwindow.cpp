#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ZorkUL.h"
#include "Room.h"
#include <iostream>
#include <QtDebug>
#include <QString>
#include <QPixmap>
#include "wordle2.h"
#include <fstream>

using namespace std;


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
    ui->strongbox->hide();

    ui->story->setText("There is not so much to do here. Let's see elsewhere.");
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
    if (playgame->currentRoom->getName()=="security room")
        ui->strongbox->show();
    else
        ui->strongbox->hide();
    Story();
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
    Story();
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
    Story();
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
     ui->strongbox->hide();
    Story();
}

void MainWindow::setgame()
{
    playgame= new ZorkUL;
    ui -> RoomNameText->setText("hall");

}

void MainWindow::displayitem(string itemname){
    if (itemname=="money")
       ui->item1->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/money.png").scaled(117,103));
    else if (itemname=="pin")
        ui->item2->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/pin.png").scaled(117,103));
    else if (itemname=="taser")
        ui->item4->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/taser.png").scaled(117,103));
    else if  (itemname=="employee card")
        ui->item3->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/employee card.png").scaled(117,103));
    else if (itemname=="key")
        ui->item6->setPixmap(QPixmap("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/images/key.png").scaled(117,103));
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
        displayitem("employee card");
    else if (playgame->currentRoom->getName()=="toilets")
        displayitem("pin");
    else if (playgame->currentRoom->getName()=="security room")
        displayitem("taser");
    else if (playgame->currentRoom->getName()=="director office")
        displayitem("key");
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
        ui->story->setText("There is not so much to do here. Let's see elsewhere.");
    else{
        if (playgame->step<=1)
        {
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("Someone forget a hair pin here.");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("The reception guy looks very busy.");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("There is a lot of people here.");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("I need a code to access the Vault.");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("I don't work here, can't go further.");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
        else if (playgame->step==2){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("Nobody's here");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("The reception guy looks very busy, he forget his employee card far from him...");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("A kid is playing Fortnite on his phone. Poor boy...");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("I need a code to access the Vault.");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("I don't work here, can't go further.");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
        else if (playgame->step==3){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("Nobody's here");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("The reception guy is working");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("There is a lot of noise here");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("I need a code to access the Vault.");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("A security guard asks you if you work here. You show the badge then he leaves.");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
        else if (playgame->step==4){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("Nobody's here");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("The receptionist looks free.");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("Still a lot of noise.");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("I need a code to access the Vault.");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("You saw on the cameras that the director is in his office. You must acces it to find the vault key. Lets make him go out.");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("A taser is lying on the ground. Here is the camera room. We need a code to disable them.");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
        else if (playgame->step==5){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("Nobody's here");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("The guy is still working");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("A guy is watching around him with a bad look. Lets pay him to make some trouble and attract the director.");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("I need a code to access the Vault.");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("Nobody's here.");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("Cameras are disabled.");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("");
        }
        else if (playgame->step==6){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("It's empty");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("The worker is talking to a client.");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("A guy is fighting with security guards");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("Lets pass the gates.");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("A guard catch you exiting the office. You use the taser on him, he passes out so you tie him and hide the body in cupboard");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("Cameras are disabled.");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("The key must be in one of the drawers");
            else if (playgame->currentRoom->getName()=="vault")
                ui->story->setText("Congrats!! You finally entered the vault");
        }
        else if (playgame->step==7){
            if (playgame->currentRoom->getName()=="toilets")
                ui->story->setText("It's empty");
            else if (playgame->currentRoom->getName()=="bank counter")
                ui->story->setText("The worker is talking to a client.");
            else if (playgame->currentRoom->getName()=="waiting room")
                ui->story->setText("A guy is fighting with security guards");
            else if (playgame->currentRoom->getName()=="security gates")
                ui->story->setText("Lets passe the gates");
            else if (playgame->currentRoom->getName()=="upstairs")
                ui->story->setText("Nobody is here");
            else if (playgame->currentRoom->getName()=="security room")
                ui->story->setText("Cameras are disabled.");
            else if (playgame->currentRoom->getName()=="director office")
                ui->story->setText("It's quiet here");
            else if (playgame->currentRoom->getName()=="vault"){
                ui->story->setTextColor(Qt::red);
                ui->story->setText("Congrats!! You finally entered the vault");}
        }


    }
}

void MainWindow::on_strongbox_clicked()
{
    Wordle2 *w =new Wordle2;
    //fstream file;
    //file.open("words.txt", ios::in);
    ifstream file("C:/Users/Natha/Desktop/Zork-CS-4076/Zork-Project/words.txt");
    if (!file.is_open())
        qDebug()<< "not open";
    string mot;
    string nomot;
    int nmb = rand() % 30;
    for (int i=0;i<=nmb;i++){
        if (i==nmb)
            getline(file,mot);
        else
            getline(file,nomot);
    }
    w->answer=mot;
    w->show();
}

