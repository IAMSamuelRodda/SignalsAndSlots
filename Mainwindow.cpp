#include "Mainwindow.hpp"
#include "ui_Mainwindow.h"

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

int FirstNum, SecondNum, Result;

void MainWindow::on_PlusPushButton_clicked()
{
    FirstNum = ui -> Txt1stNumber -> text().toInt();
    SecondNum = ui -> Txt2ndNumber -> text().toInt();
    Result = FirstNum + SecondNum;
    ui -> TxtResult -> setText(QString::number(Result));
}

