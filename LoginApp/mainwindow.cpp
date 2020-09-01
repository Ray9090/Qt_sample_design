#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //v_11
    //QPixmap pix("C:/Users/User/Documents/Qt/Qt Pic/login icon png.png");

    //V_13 : using resource path
    QPixmap pix(":/resources/img/login icon png.png");

    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    //v_11
    //if(username == "test" && password == "test"){
        //QMessageBox::information(this,"Login","Username and password is correct");
        //hide();
        //secDialog = new SecDialog(this);
        //secDialog->show();
    //}
    //else {
        //QMessageBox::warning(this,"Login","Username and password is not correct");
    //}


    //v_12
    if(username == "test" && password == "test"){

        ui->statusbar->showMessage("Username and password is correct", 5000);
    }
    else {
        ui->statusbar->showMessage("Username and password is not correct", 500);
    }

    //v_14: hide the password character: .ui >> property >> eQlineEdit >> echomode >> password
}
