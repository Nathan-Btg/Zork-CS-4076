#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPushButton>
#include "ZorkUL.h"
#include <fstream>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setgame();
    void displayitem(string itemname);
    void hideitem(string itemname);

private slots:

    void on_Up_clicked();

    void on_Left_clicked();

    void on_Right_clicked();

    void on_Down_clicked();

    void on_Takebutton_clicked();

    void on_Dropbutton_clicked();

    void on_strongbox_clicked();

private:
    Ui::MainWindow *ui;
    ZorkUL *playgame;
    void Story();

};
#endif // MAINWINDOW_H
