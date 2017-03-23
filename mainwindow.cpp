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
    // at click: call function
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// this just changes the text and sets up new signal/slot to close the window
// on next click
void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setText("Gut gemacht, now close");
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));
}

