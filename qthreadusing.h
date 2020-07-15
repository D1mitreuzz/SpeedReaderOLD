#ifndef QTHREADUSING_H
#define QTHREADUSING_H

#include <QObject>
#include <QThread>
#include <QString>

class QThreadUsing : public QObject
{
    Q_OBJECT
public:
    explicit QThreadUsing(QObject *parent = nullptr);//QObject *parent = nullptr

    void run();
signals:
    void send(int);
private:
    QString name;

};

#endif // QTHREADUSING_H
