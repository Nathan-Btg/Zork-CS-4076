#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QCoreApplication>
#include <QApplication>
#include <QLabel>
#include <QComboBox>
#include <QVBoxLayout>
#include <QStackedWidget>
#include <QRadioButton>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QComboBox>
#include <QString>
#include <QToolBar>
#include <QSignalMapper>
//#include "playwindow.h"
//#include "charinfowindow.h"
#include "ZorkUL.h"
#include <iostream>
#include <QTextStream>
#include <QMovie>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    push_button2 = new QPushButton(this);
    push_button2->setText("Click");
    push_button2->setGeometry(QRect(QPoint(0, 0), QSize(100, 50)));
    connect(push_button2, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->setText("Hello, World!");
}

