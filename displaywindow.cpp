#include "displaywindow.h"
#include "ui_displaywindow.h"

DisplayWindow::DisplayWindow(QWidget *parent, QVector<QString> *data) :
    QDialog(parent),
    ui(new Ui::DisplayWindow)
{
    ui->setupUi(this);
}

DisplayWindow::~DisplayWindow()
{

    DisplayWindow * DWDialog = new DisplayWindow(this);

    DWDialog->exec();


    delete ui;
}
