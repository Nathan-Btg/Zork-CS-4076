/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Down;
    QPushButton *Left;
    QPushButton *Right;
    QPushButton *Up;
    QWidget *gridLayoutWidget;
    QGridLayout *inventaire;
    QLabel *item5;
    QLabel *item3;
    QLabel *item1;
    QLabel *item4;
    QLabel *item6;
    QLabel *item2;
    QLabel *inventairename;
    QLabel *photo;
    QFrame *line;
    QTextEdit *RoomNameText;
    QTextEdit *story;
    QPushButton *Takebutton;
    QPushButton *Dropbutton;
    QPushButton *strongbox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Down = new QPushButton(centralwidget);
        Down->setObjectName(QString::fromUtf8("Down"));
        Down->setGeometry(QRect(620, 550, 100, 40));
        Left = new QPushButton(centralwidget);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(570, 510, 100, 40));
        Right = new QPushButton(centralwidget);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(670, 510, 100, 40));
        Up = new QPushButton(centralwidget);
        Up->setObjectName(QString::fromUtf8("Up"));
        Up->setGeometry(QRect(620, 470, 100, 40));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(550, 0, 241, 431));
        inventaire = new QGridLayout(gridLayoutWidget);
        inventaire->setObjectName(QString::fromUtf8("inventaire"));
        inventaire->setContentsMargins(0, 0, 0, 0);
        item5 = new QLabel(gridLayoutWidget);
        item5->setObjectName(QString::fromUtf8("item5"));

        inventaire->addWidget(item5, 3, 0, 1, 1);

        item3 = new QLabel(gridLayoutWidget);
        item3->setObjectName(QString::fromUtf8("item3"));

        inventaire->addWidget(item3, 2, 0, 1, 1);

        item1 = new QLabel(gridLayoutWidget);
        item1->setObjectName(QString::fromUtf8("item1"));
        item1->setEnabled(true);

        inventaire->addWidget(item1, 1, 0, 1, 1);

        item4 = new QLabel(gridLayoutWidget);
        item4->setObjectName(QString::fromUtf8("item4"));

        inventaire->addWidget(item4, 2, 1, 1, 1);

        item6 = new QLabel(gridLayoutWidget);
        item6->setObjectName(QString::fromUtf8("item6"));

        inventaire->addWidget(item6, 3, 1, 1, 1);

        item2 = new QLabel(gridLayoutWidget);
        item2->setObjectName(QString::fromUtf8("item2"));

        inventaire->addWidget(item2, 1, 1, 1, 1);

        inventairename = new QLabel(gridLayoutWidget);
        inventairename->setObjectName(QString::fromUtf8("inventairename"));
        QFont font;
        font.setPointSize(28);
        font.setUnderline(false);
        inventairename->setFont(font);

        inventaire->addWidget(inventairename, 0, 0, 1, 2);

        photo = new QLabel(centralwidget);
        photo->setObjectName(QString::fromUtf8("photo"));
        photo->setGeometry(QRect(20, 130, 510, 320));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(490, 0, 101, 601));
        line->setLineWidth(5);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        RoomNameText = new QTextEdit(centralwidget);
        RoomNameText->setObjectName(QString::fromUtf8("RoomNameText"));
        RoomNameText->setGeometry(QRect(100, 20, 361, 51));
        QFont font1;
        font1.setPointSize(20);
        RoomNameText->setFont(font1);
        story = new QTextEdit(centralwidget);
        story->setObjectName(QString::fromUtf8("story"));
        story->setGeometry(QRect(10, 480, 521, 111));
        Takebutton = new QPushButton(centralwidget);
        Takebutton->setObjectName(QString::fromUtf8("Takebutton"));
        Takebutton->setGeometry(QRect(550, 440, 61, 61));
        Dropbutton = new QPushButton(centralwidget);
        Dropbutton->setObjectName(QString::fromUtf8("Dropbutton"));
        Dropbutton->setGeometry(QRect(730, 440, 61, 61));
        strongbox = new QPushButton(centralwidget);
        strongbox->setObjectName(QString::fromUtf8("strongbox"));
        strongbox->setGeometry(QRect(560, 340, 101, 71));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Down->setText(QCoreApplication::translate("MainWindow", "Down", nullptr));
        Left->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        Right->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        Up->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        item5->setText(QString());
        item3->setText(QString());
        item1->setText(QString());
        item4->setText(QString());
        item6->setText(QString());
        item2->setText(QString());
        inventairename->setText(QCoreApplication::translate("MainWindow", "      Inventory", nullptr));
        photo->setText(QString());
        Takebutton->setText(QCoreApplication::translate("MainWindow", "Take item", nullptr));
        Dropbutton->setText(QCoreApplication::translate("MainWindow", "Drop item", nullptr));
        strongbox->setText(QCoreApplication::translate("MainWindow", "Open strongbox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
