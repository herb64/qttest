#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "unistd.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    char text[80];
    strcpy(text, "Klick mich, ");
    ui->pushButton->setText(strcat(text, getlogin()));
    // beim klick actions...
}

MainWindow::~MainWindow()
{
    delete ui;
}
