#include "qthreadusing.h"

#include <QDebug>
#include <windows.h>

QThreadUsing::QThreadUsing(QObject *parent) : QObject(parent)//(QObject *parent) : QObject(parent)
{

}

void QThreadUsing::run()
{
    for(int i = 0; i <=100; i++)
    {
        emit send(i);
        Sleep(1000);
    }
}
