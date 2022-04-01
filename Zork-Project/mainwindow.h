#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPushButton>
#include "ZorkUL.h"

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
    //string getCommand();

private slots:

    void on_Up_clicked();

    void on_Left_clicked();

    void on_Right_clicked();

    void on_Down_clicked();

private:
    Ui::MainWindow *ui;
    ZorkUL *game;
};
#endif // MAINWINDOW_H
