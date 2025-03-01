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
    if (timer) {
    timer->stop();
    delete timer;
    timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    // start game
    if (peliKaynnissa == true) {return;}        // estää, ettei nappia voi painaa pelin ollessa köynnissä
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;
    ui->label->setText("Peli käynnissä..");

    ui->progressBar->setRange(0,gameTime);
    ui->progressBar_2->setRange(0,gameTime);
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);

    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainWindow::updateProgressBar);
    timer->setInterval(1000);   // 1000ms eli 1s
    timer->start();
    peliKaynnissa = true;
}

void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1){
        p1Time--;
        ui->progressBar->setValue(p1Time);
        if (p1Time == 0) {
            ui->label->setText("Pelaaja 2 voitti..");
            // pysäytä ajastin, delete osoitin
        }
    }
    else if (currentPlayer == 2) {
        p2Time--;
        ui->progressBar_2->setValue(p2Time);
        if (p2Time == 0){
            ui->label->setText("Pelaaja 1 voitti..");
            // pysäytä ajastin, delete osoitin
        }
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_pushButton_5_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_pushButton_3_clicked()
{
    if (peliKaynnissa == true)  {return;}
    gameTime = 120;
    ui->label->setText("Valmiina aloittamaan..");
}

void MainWindow::on_pushButton_4_clicked()
{
    if (peliKaynnissa == true)  {return;}
    gameTime = 300;
    ui->label->setText("Valmiina aloittamaan..");
}


void MainWindow::on_pushButton_6_clicked()
{
   // resettaa kaikki
    if (timer) {            // tarkista onko timer olemassa, sitten poista se
    timer->stop();
    delete timer;
    timer = nullptr;
    }
    peliKaynnissa = false;
    ui->label->setText("Peli loppui..");
}

