#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_clicked()
{
    if (tila == 3) {
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1 + num2;

    QString resultStr = QString::number(result);
    ui->result->setText(resultStr);
    }
}

void MainWindow::on_sub_clicked()
{
if (tila == 3) {
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1 - num2;

    QString resultStr = QString::number(result);
    ui->result->setText(resultStr);
    }
}

void MainWindow::on_mul_clicked()
{
if (tila == 3) {
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1 * num2;

    QString resultStr = QString::number(result);
    ui->result->setText(resultStr);
    }
}

void MainWindow::on_div_clicked()
{
if (tila == 3) {
    QString num1Str = ui->num1->text();
    float num1 = num1Str.toFloat();
    qDebug() << num1;

    QString num2Str = ui->num2->text();
    float num2 = num2Str.toFloat();
    qDebug() << num2;

    float result = num1 / num2;
    qDebug() << result;

    QString resultStr = QString::number(result, 'f', 2);
    ui->result->setText(resultStr);
    }
}

void MainWindow::on_clear_clicked()
{
    tila = 1;
    ui->num1->setText("0");
    ui->num2->setText("0");
    ui->result->setText("0");
}


void MainWindow::on_n1_clicked()
{
    QString nStr = ui->n1->text();
    int n = nStr.toInt();
    numberClickHandler(n);
}


void MainWindow::on_n2_clicked()
{
    QString nStr = ui->n2->text();
    int n = nStr.toInt();
    numberClickHandler(n);
}


void MainWindow::on_n3_clicked()
{
    QString nStr = ui->n3->text();
    int n = nStr.toInt();
    numberClickHandler(n);
}

void MainWindow::on_n4_clicked()
{
    QString nStr = ui->n4->text();
    int n = nStr.toInt();
    numberClickHandler(n);
}


void MainWindow::on_n5_clicked()
{
    QString nStr = ui->n5->text();
    int n = nStr.toInt();
    numberClickHandler(n);
}


void MainWindow::on_n6_clicked()
{
    QString nStr = ui->n6->text();
    int n = nStr.toInt();
    numberClickHandler(n);
}


void MainWindow::on_n7_clicked()
{
    QString nStr = ui->n7->text();
    int n = nStr.toInt();
    numberClickHandler(n);
}


void MainWindow::on_n8_clicked()
{
    QString nStr = ui->n8->text();
    int n = nStr.toInt();
    numberClickHandler(n);
}

void MainWindow::on_n0_clicked()
{
    QString nStr = ui->n0->text();
    int n = nStr.toInt();
    numberClickHandler(n);
}

void MainWindow::numberClickHandler(int n)
{
    QString str = QString::number(n);
    if (tila == 1)
    {
        ui->num1->setText(str);
        qDebug() << "Tila 1" << Qt::endl;
    }
    else if (tila == 2)
    {
        ui->num2->setText(str);
        qDebug() << "Tila 2" << Qt::endl;
    }
}


void MainWindow::on_enter_clicked()
{
    tila++;
    if (tila == 4)
    {
    qDebug() << "Tila 3" << Qt::endl;
    tila = 1;
    }
}



void MainWindow::on_n9_clicked()
{
    QString nStr = ui->n9->text();
    int n = nStr.toInt();
    numberClickHandler(n);
}

