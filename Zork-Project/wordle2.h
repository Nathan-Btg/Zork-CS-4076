#ifndef WORDLE2_H
#define WORDLE2_H

#include <QDialog>
#include <string>
using namespace std;

namespace Ui {
class Wordle2;
}

class Wordle2 : public QDialog
{
    Q_OBJECT

public:
    explicit Wordle2(QWidget *parent = nullptr);
    ~Wordle2();
    int line;
    string answer;
protected:
    string actualtry;



private slots:
    void on_Ab_clicked();

    void on_Kb_clicked();

    void on_Zb_clicked();

    void on_Eb_clicked();

    void on_Rb_clicked();

    void on_Tb_clicked();

    void on_Yb_clicked();

    void on_Ub_clicked();

    void on_Ib_clicked();

    void on_Ob_clicked();

    void on_Pb_clicked();

    void on_Qb_clicked();

    void on_Sb_clicked();

    void on_Db_clicked();

    void on_Fb_clicked();

    void on_Gb_clicked();

    void on_Hb_clicked();

    void on_Lb_clicked();

    void on_Mb_clicked();

    void on_Wb_clicked();

    void on_Xb_clicked();

    void on_Cb_clicked();

    void on_Vb_clicked();

    void on_Bb_clicked();

    void on_Nb_clicked();

    void on_Enter_clicked();

    void on_Jb_clicked();

    void on_test_clicked();

private:
    Ui::Wordle2 *ui;
    void writeletter(string lettre, int pos);
    void verif(string word);
    int pos=0;

};

#endif // WORDLE2_H
