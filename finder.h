#ifndef FINDER_H
#define FINDER_H

#include <QObject>
#include <QTextStream>
#include <iostream>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFile>

class Finder : public QObject
{
    Q_OBJECT
public:
    explicit Finder(QObject *parent = 0);
    const char* config[4];

private:
    static QTextStream qout;
    QSqlDatabase db;
    
signals:
    
public slots:
    void start();
    void printMsg(const char* msg);

private slots:
    void connect();
    QList<QString> getTable();
};

#endif // FINDER_H
