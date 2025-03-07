#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "userwindow.h"
#include "itemsmainwindow.h"

#include <QPixmap>

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





void MainWindow::on_items_clicked()
{
    ItemsMainWindow* itemWindow=new ItemsMainWindow;
    itemWindow->show();
}


void MainWindow::on_jobs_clicked()
{

    JobMainWindow* newJobWindow=new JobMainWindow;
    newJobWindow->show();
}


void MainWindow::on_users_clicked()
{
    userWindow* newUserwindow=new userWindow;
    newUserwindow->show();
}

