#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBoxD->addItem("Choose a product to Donate:");
    ui->comboBoxD->addItem("Pasta");
    ui->comboBoxD->addItem("Rice");
    ui->comboBoxD->addItem("Canned tomatoes");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonDonate_clicked()
{
    QString pName = ui->comboBoxD->currentText();
    QMessageBox::information(this, "Boop", "Success");

}


void MainWindow::on_pushButtonRecieve_clicked()
{

}


void MainWindow::on_pushButtonAdmin_clicked()
{

}

