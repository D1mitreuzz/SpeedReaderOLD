#ifndef DISPLAYWINDOW_H
#define DISPLAYWINDOW_H

#include <QDialog>

namespace Ui {
class DisplayWindow;
}

class DisplayWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayWindow(QWidget *parent = nullptr, QVector<QString> *data = nullptr);
    ~DisplayWindow();

private:
    Ui::DisplayWindow *ui;





};

#endif // DISPLAYWINDOW_H
