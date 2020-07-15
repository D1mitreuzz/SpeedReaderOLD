#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "historywindow.h"
#include "settingswindow.h"
#include "displaywindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private :
    HistoryWindow *w_HW;
    SettingsWindow *w_SW;
    DisplayWindow *w_DW;


public slots:
    void on_HistoryButton_clicked();

    void on_SettingsButton_clicked();

    void on_HideButton_clicked();

    void on_launchButton_clicked();




private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
