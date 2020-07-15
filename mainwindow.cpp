#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <stdlib.h>
#include <stdio.h>

#include "iostream"
#include <QString>
#include <QPlainTextEdit>
#include <QLabel>
#include <QVector>

#include "QMessageBox"
#include <qmessagebox.h>

#include <QThread>
#include <QTest>

#include "QDebug"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
/*--------------------------------------------------------------------------------*/
/*                                  СТИЛИ/STYLES                                  */
/*--------------------------------------------------------------------------------*/
{
    ui->setupUi(this);
    MainWindow::setStyleSheet("background-color:rgb(39,40,42);"
                              "color:rgb(255,255,255);");
    ui->HideButton->setStyleSheet("background-color:rgb(54,62,77)");
    ui->HistoryButton->setStyleSheet("background-color:rgb(54,62,77)");
    ui->SettingsButton->setStyleSheet("background-color:rgb(54,62,77)");
    ui->line->setStyleSheet("background-color:rgb(211,214,219)");
/*--------------------------------------------------------------------------------*/

//int WPM(Words Per Minute) = 75; использую позже, когда скорость можно будет изменять прямо в приложении
}

MainWindow::~MainWindow()//деструктор
{
    delete ui;
}

/*void MainWindow::update(int i)
{

}*/

/*--------------------------------------------------------------------------------*/
/*                      ОБРАБОТКА КНОПОК/PROCESSING BUTTONS                       */
/*--------------------------------------------------------------------------------*/

void MainWindow::on_HistoryButton_clicked()
{
    this -> w_HW = new HistoryWindow(this);
    this -> w_HW -> show();
}

void MainWindow::on_SettingsButton_clicked()
{
    this -> w_SW = new SettingsWindow(this);
    this -> w_SW -> show();
}

void MainWindow::on_HideButton_clicked()
{
    QMessageBox::StandardButton FutureAlert;
    FutureAlert = QMessageBox::information(this,
                                           "FututreIsSomewhereHere.srvc",
                                           "В ближайшем будущем...");
}

void MainWindow::on_launchButton_clicked()
{
    QString allText;
    allText = ui->plainTextEdit->toPlainText();
    auto parts = allText.split(QRegExp("\\s+"),
                               QString::SkipEmptyParts);

    QVector<QString> allWords(parts.size());

    for(int i = 0; i < parts.size(); i++)
    {
        //qDebug() << parts[i] << endl;
        allWords[i] = parts[i];
    }


    qDebug() << allWords;

    this -> w_DW = new DisplayWindow(this, &allWords);
    this -> w_DW -> show();





        //w_DW->ui->textLabel->setText(allWords[i]);//выводит ошибку, потому что -> member access into incomplete type 'Ui::DisplayWindow'
        //invalid use of incomplete type 'class Ui::DisplayWindow'




}
/*--------------------------------------------------------------------------------*/
/*                      ЗОНА КОММЕНТАРИЕВ/COMMENTARY ZONE                         */
/*--------------------------------------------------------------------------------*/
/*    for(int i = 0; i < allWords.size(); i++)
    {
        ui->label->setText(allWords[i]);//будет выводить ошибку, потому что label не относится к mainwindow.
                                          //Мне нужен label из displaywindow
        //должна быть задержка, но QThread фризит процесс :/
    }
*/
/*--------------------------------------------------------------------------------*/

