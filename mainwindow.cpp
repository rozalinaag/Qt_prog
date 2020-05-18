#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>


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


void MainWindow::on_pushButton_clicked()
{
    //ui->label->setText("Кнопка нажата");
    QMessageBox::StandardButton reply = QMessageBox::question(this,"NAME","CLOSE?",
                                                              QMessageBox::No | QMessageBox::Yes);
    if (reply==QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        qDebug()<<"Button NO push";
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this,"Сообщение","Здравствуйте, могу я чем-нибудь вам помочь?\nЕсли вас интересует теория, нажмите на кнопку Теория");
}

void MainWindow::on_pushButton_3_clicked()
{
    QString V = ui->lineEdit->text();
    QString A = ui->lineEdit_2->text();
    if (V=="Codi"&& A=="pass")
    {
        ui->statusbar->showMessage("Сейчас вычислим!");
        //QMessageBox::about(this,"Сообщение","Я знаю кто вы и зачем вы здесь!");
    }
    else
    {
        QMessageBox::warning(this,"УПС","Вы ввели неверные данные!");
    }
    if (ui->radioButton1->isChecked())
    {
       ui->statusbar->showMessage("Ветер по направлению полета");
    }
    if (ui->radioButton2->isChecked())
    {
       ui->statusbar->showMessage("Ветер против направлению полета");
    }
    if (ui->radioButton3->isChecked())
    {
       ui->statusbar->showMessage("Без ветренная погода!");
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    win = new Secondwindow(this);
    win->show();
}



void MainWindow::on_action_triggered()
{
    ui->statusbar->showMessage("Открытие нового проекта");
}

void MainWindow::on_action_3_triggered()
{
    ui->statusbar->showMessage("Создание нового проекта");
}

void MainWindow::on_action_2_triggered()
{
    QApplication::quit();
}
