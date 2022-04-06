#include "wordle2.h"
#include "ui_wordle2.h"
#include <string>

Wordle2::Wordle2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wordle2)
{
    ui->setupUi(this);
}

Wordle2::~Wordle2()
{
    delete ui;
}

void Wordle2::on_Ab_clicked()
{
    writeletter("A",line);
    line++;
    actualtry+="A";
}


void Wordle2::on_Kb_clicked()
{
    writeletter("K",line);
    line++;
    actualtry+="K";
}


void Wordle2::on_Zb_clicked()
{
    writeletter("Z",line);
    line++;
    actualtry+="Z";
}


void Wordle2::on_Eb_clicked()
{
    writeletter("E",line);
    line++;
    actualtry+="E";
}


void Wordle2::on_Rb_clicked()
{
    writeletter("R",line);
    line++;
    actualtry+="R";
}


void Wordle2::on_Tb_clicked()
{
    writeletter("T",line);
    line++;
    actualtry+="T";
}


void Wordle2::on_Yb_clicked()
{
    writeletter("Y",line);
    line++;
    actualtry+="Y";
}


void Wordle2::on_Ub_clicked()
{
    writeletter("U",line);
    line++;
    actualtry+="U";
}


void Wordle2::on_Ib_clicked()
{
    writeletter("I",line);
    line++;
    actualtry+="I";
}


void Wordle2::on_Ob_clicked()
{
    writeletter("O",line);
    line++;
    actualtry+="O";
}


void Wordle2::on_Pb_clicked()
{
    writeletter("P",line);
    line++;
    actualtry+="P";
}




void Wordle2::on_Qb_clicked()
{
    writeletter("Q",line);
    line++;
    actualtry+="Q";
}


void Wordle2::on_Sb_clicked()
{
    writeletter("S",line);
    line++;
    actualtry+="S";
}


void Wordle2::on_Db_clicked()
{
    writeletter("D",line);
    line++;
    actualtry+="D";
}


void Wordle2::on_Fb_clicked()
{
    writeletter("F",line);
    line++;
    actualtry+="F";
}


void Wordle2::on_Gb_clicked()
{
    writeletter("G",line);
    line++;
    actualtry+="G";
}


void Wordle2::on_Hb_clicked()
{
    writeletter("H",line);
    line++;
    actualtry+="H";
}


void Wordle2::on_Jb_clicked()
{
    writeletter("J",line);
    line++;
    actualtry+="J";
}

void Wordle2::on_Lb_clicked()
{
    writeletter("L",line);
    line++;
    actualtry+="L";
}


void Wordle2::on_Mb_clicked()
{
    writeletter("M",line);
    line++;
    actualtry+="M";
}


void Wordle2::on_Wb_clicked()
{
    writeletter("W",line);
    line++;
    actualtry+="W";
}


void Wordle2::on_Xb_clicked()
{
    writeletter("X",line);
    line++;
    actualtry+="X";
}


void Wordle2::on_Cb_clicked()
{
    writeletter("C",line);
    line++;
    actualtry+="C";
}


void Wordle2::on_Vb_clicked()
{
    writeletter("V",line);
    line++;
    actualtry+="V";
}


void Wordle2::on_Bb_clicked()
{
    writeletter("B",line);
    line++;
    actualtry+="B";
}


void Wordle2::on_Nb_clicked()
{
    writeletter("N",line);
    line++;
    actualtry=actualtry+"N";
}


void Wordle2::on_Enter_clicked()
{
    verif(actualtry);
    //line++;
    actualtry="";
}

void Wordle2::writeletter(string letter, int position){
    if (position==0)
        ui->textEdit->setText(QString::fromStdString(letter));
    if (position==1)
        ui->textEdit_2->setText(QString::fromStdString(letter));
    if (position==2)
        ui->textEdit_3->setText(QString::fromStdString(letter));
    if (position==3)
        ui->textEdit_4->setText(QString::fromStdString(letter));
    if (position==4)
        ui->textEdit_5->setText(QString::fromStdString(letter));
    if (position==5)
        ui->textEdit_6->setText(QString::fromStdString(letter));
    if (position==6)
        ui->textEdit_7->setText(QString::fromStdString(letter));
    if (position==7)
        ui->textEdit_8->setText(QString::fromStdString(letter));
    if (position==8)
        ui->textEdit_9->setText(QString::fromStdString(letter));
    if (position==9)
        ui->textEdit_10->setText(QString::fromStdString(letter));
    if (position==10)
        ui->textEdit_11->setText(QString::fromStdString(letter));
    if (position==11)
        ui->textEdit_12->setText(QString::fromStdString(letter));
    if (position==12)
        ui->textEdit_13->setText(QString::fromStdString(letter));
    if (position==13)
        ui->textEdit_14->setText(QString::fromStdString(letter));
    if (position==14)
        ui->textEdit_15->setText(QString::fromStdString(letter));
    if (position==15)
        ui->textEdit_16->setText(QString::fromStdString(letter));
    if (position==16)
        ui->textEdit_17->setText(QString::fromStdString(letter));
    if (position==17)
        ui->textEdit_18->setText(QString::fromStdString(letter));
    if (position==18)
        ui->textEdit_19->setText(QString::fromStdString(letter));
    if (position==19)
        ui->textEdit_20->setText(QString::fromStdString(letter));
    if (position==20)
        ui->textEdit_21->setText(QString::fromStdString(letter));
    if (position==21)
        ui->textEdit_22->setText(QString::fromStdString(letter));
    if (position==22)
        ui->textEdit_23->setText(QString::fromStdString(letter));
    if (position==23)
        ui->textEdit_24->setText(QString::fromStdString(letter));
    if (position==24)
        ui->textEdit_25->setText(QString::fromStdString(letter));
}

void Wordle2::verif(string word){
    for (int i=0;i<5;i++){
        if (word[i]==answer[i])
        {
            if (pos==0)
                ui->textEdit->setTextColor(Qt::green);
            if (pos==1)
                ui->textEdit_2->setTextColor(Qt::green);
            if (pos==2)
                ui->textEdit_3->setTextColor(Qt::green);
            if (pos==3)
                ui->textEdit_4->setTextColor(Qt::green);
            if (pos==4)
                ui->textEdit_5->setTextColor(Qt::green);
            if (pos==5)
                ui->textEdit_6->setTextColor(Qt::green);
            if (pos==6)
                ui->textEdit_7->setTextColor(Qt::green);
            if (pos==7)
                ui->textEdit_8->setTextColor(Qt::green);
            if (pos==8)
                ui->textEdit_9->setTextColor(Qt::green);
            if (pos==9)
                ui->textEdit_10->setTextColor(Qt::green);
            if (pos==10)
                ui->textEdit_11->setTextColor(Qt::green);
            if (pos==11)
                ui->textEdit_12->setTextColor(Qt::green);
            if (pos==12)
                ui->textEdit_13->setTextColor(Qt::green);
            if (pos==13)
                ui->textEdit_14->setTextColor(Qt::green);
            if (pos==14)
                ui->textEdit_15->setTextColor(Qt::green);
            if (pos==15)
                ui->textEdit_16->setTextColor(Qt::green);
            if (pos==16)
                ui->textEdit_17->setTextColor(Qt::green);
            if (pos==17)
                ui->textEdit_18->setTextColor(Qt::green);
            if (pos==18)
                ui->textEdit_19->setTextColor(Qt::green);
            if (pos==19)
                ui->textEdit_20->setTextColor(Qt::green);
            if (pos==20)
                ui->textEdit_21->setTextColor(Qt::green);
            if (pos==21)
                ui->textEdit_22->setTextColor(Qt::green);
            if (pos==22)
                ui->textEdit_23->setTextColor(Qt::green);
            if (pos==23)
                ui->textEdit_24->setTextColor(Qt::green);
            if (pos==24)
                ui->textEdit_25->setTextColor(Qt::green);
            writeletter(string (1,word[i]) ,pos);
            pos+=1;
        }
        else{
            for (int j=0;j<5;j++)
            {
                if (word[i]==answer[j])
                {
                    if (pos==0)
                        ui->textEdit->setTextColor(Qt::red);
                    if (pos==1)
                        ui->textEdit_2->setTextColor(Qt::red);
                    if (pos==2)
                        ui->textEdit_3->setTextColor(Qt::red);
                    if (pos==3)
                        ui->textEdit_4->setTextColor(Qt::red);
                    if (pos==4)
                        ui->textEdit_5->setTextColor(Qt::red);
                    if (pos==5)
                        ui->textEdit_6->setTextColor(Qt::red);
                    if (pos==6)
                        ui->textEdit_7->setTextColor(Qt::red);
                    if (pos==7)
                        ui->textEdit_8->setTextColor(Qt::red);
                    if (pos==8)
                        ui->textEdit_9->setTextColor(Qt::red);
                    if (pos==9)
                        ui->textEdit_10->setTextColor(Qt::red);
                    if (pos==10)
                        ui->textEdit_11->setTextColor(Qt::red);
                    if (pos==11)
                        ui->textEdit_12->setTextColor(Qt::red);
                    if (pos==12)
                        ui->textEdit_13->setTextColor(Qt::red);
                    if (pos==13)
                        ui->textEdit_14->setTextColor(Qt::red);
                    if (pos==14)
                        ui->textEdit_15->setTextColor(Qt::red);
                    if (pos==15)
                        ui->textEdit_16->setTextColor(Qt::red);
                    if (pos==16)
                        ui->textEdit_17->setTextColor(Qt::red);
                    if (pos==17)
                        ui->textEdit_18->setTextColor(Qt::red);
                    if (pos==18)
                        ui->textEdit_19->setTextColor(Qt::red);
                    if (pos==19)
                        ui->textEdit_20->setTextColor(Qt::red);
                    if (pos==20)
                        ui->textEdit_21->setTextColor(Qt::red);
                    if (pos==21)
                        ui->textEdit_22->setTextColor(Qt::red);
                    if (pos==22)
                        ui->textEdit_23->setTextColor(Qt::red);
                    if (pos==23)
                        ui->textEdit_24->setTextColor(Qt::red);
                    if (pos==24)
                        ui->textEdit_25->setTextColor(Qt::red);
                }
                }
            writeletter(string (1,word[i]) ,pos);
            pos+=1;
            }

    }
}





void Wordle2::on_test_clicked()
{
    //writeletter();
    line++;
}

