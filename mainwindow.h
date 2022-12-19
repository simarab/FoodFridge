#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonDonate_clicked();

    void on_pushButtonRecieve_clicked();

    void on_pushButtonAdmin_clicked();

private:
    Ui::MainWindow *ui;
    Stock s;

};
#endif // MAINWINDOW_H
