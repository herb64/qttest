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
    // beim klick actions - have it in code here.
    //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setText("Gut gemacht, now close");
    //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_herbsbutton_clicked()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));
}

void MainWindow::on_herbsbutton_clicked()
{
    //this->close();
}
