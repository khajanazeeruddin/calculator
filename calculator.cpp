#include "calculator.h"
#include "ui_calculator.h"

//#include "qdebug.h"

QString line;
QString temp;
QString digit;

QString final;

int operators=0;

QString result;

QString finalresult;

int a,s,m,d=0;
float floatint=0;

static int r=0;

QString answer;

int intresult=0;
static double inttemp;


calculator::calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calculator)
{
    ui->setupUi(this);
}



calculator::~calculator()
{
    delete ui;
}


void calculator::on_pushButton_1_clicked()
{


    ui->lineEdit->setText(ui->lineEdit->text()+"1");
    QString digit=ui->lineEdit->text();
    line+=digit;
    ui->lineEdit_2->setText(line);
}


void calculator::on_pushButton_2_clicked()\
{
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
}

void calculator::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
}

void calculator::on_pushButton_8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
}

void calculator::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
}

void calculator::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
}


void calculator::on_pushButton_12_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
}

void calculator::on_pushButton_11_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"8");


}

void calculator::on_pushButton_10_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"9");



}

void calculator::on_pushButton_15_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"0");



}

void calculator::on_pushButton_4_clicked()
{
    //++++
    if(inttemp!=0)
    {
     r=inttemp;
     ui->lineEdit->setText(" ");
    }
    else
    {
    ui->lineEdit_2->setText("+");
    temp=ui->lineEdit_2->text();
   // ui->lineEdit_3->setText(temp);
    a = ui->lineEdit->text().toInt();
    ui->lineEdit->setText("    ");
    ::r+=a;
    }
}

void calculator::on_pushButton_5_clicked()

{
    if(inttemp!=0)
    {
     r=inttemp;
     ui->lineEdit->setText(" ");
    }
    else{
    ui->lineEdit_2->setText("-");
    temp=ui->lineEdit_2->text();
    a= ui->lineEdit->text().toInt();
    ui->lineEdit->setText(" ");
    r=a;
    }
}

void calculator::on_pushButton_9_clicked()
{
    if(inttemp!=0)
    {
     r=inttemp;
     ui->lineEdit->setText(" ");
     ui->lineEdit->setText(QString::number(inttemp));
    }
    else
    {
    ui->lineEdit_2->setText("*");
    temp=ui->lineEdit_2->text();
    a = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText(" ");
    r=1;
    r*=a;
    }
}

void calculator::on_pushButton_13_clicked()
{
    if(inttemp!=0)
    {
    r=inttemp;
    ui->lineEdit->setText(" ");
    }
    else
    {
     ui->lineEdit_2->setText("/");
     temp=ui->lineEdit_2->text();
    a = ui->lineEdit->text().toInt();
    ui->lineEdit->setText(" ");
    r=a;
    }
}

void calculator::on_pushButton_18_clicked()
{ //=answer=====


    if(QString::compare(temp,"+")==0)

       {

        a = ui->lineEdit->text().toInt();

        r+=a;

        }

    if(QString::compare(temp,"/")==0)

    {
        a = ui->lineEdit->text().toInt();

        r/=a;
    }

    if(QString::compare(temp,"-")==0)
    {
        a = ui->lineEdit->text().toInt();

        ::r=r-a;
    }

    if(QString::compare(temp,"*")==0)
     {

        a = ui->lineEdit->text().toInt();

        r*=a;
    }

    final=QString::number(r);

    ui->lineEdit->setText(final);

}

void calculator::on_pushButton_clear_clicked()
{
    //clearr
        ui->lineEdit->clear();

        ui->lineEdit_2->clear();

        ui->lineEdit->setText("   ");

        ui->lineEdit_2->setText("   ");
        inttemp=0;

        final=" ";

        temp=" ";

        r=0;

        a=0;
}

void calculator::on_pushButton_16_clicked()
{


    ui->lineEdit->setText(ui->lineEdit->text()+".");
    floatint = ui->lineEdit->text().toFloat();

}


void calculator::on_pushButton_14_clicked()
{
    if(inttemp!=0)
    {
     a=inttemp/100;
     r=a;
     ui->lineEdit->setText(QString::number(a));

    }

    else
    {
    inttemp=ui->lineEdit->text().toDouble();
    ui->lineEdit->setText(" ");
    inttemp=(inttemp/100);
    final = QString::number(inttemp);
    ui->lineEdit->setText(final);
    }
}

void calculator::on_Ans_clicked()
{

    inttemp = ui->lineEdit->text().toInt();
    if(inttemp!=0)
        ui->lineEdit->setText(QString::number(inttemp));

}
