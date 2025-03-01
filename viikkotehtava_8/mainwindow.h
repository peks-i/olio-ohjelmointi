#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool peliKaynnissa = false;

private slots:
    void on_pushButton_2_clicked();
    void updateProgressBar();
    void on_pushButton_7_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    int p1Time;
    int p2Time;
    int currentPlayer = 1;
    int gameTime = 0;
    QTimer *timer = nullptr;

};
#endif // MAINWINDOW_H
