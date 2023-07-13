#include "finder.h"

Finder::Finder(QObject *parent) : QObject(parent) {
    this->config[0] = "localhost";  // db-server hostname
    this->config[1] = "mainsql1";       // database name
    this->config[2] = "mainsql1";       // mysql user
    this->config[3] = "f12400a8asd77A";   // mysql password

    this->db = QSqlDatabase::addDatabase("QMYSQL");
} //endconstructor

QTextStream Finder::qout(stdout, QIODevice::WriteOnly);

void Finder::start() {
    connect();
    QList<QString> list = getTable();
    printMsg("####### BEGINNE AUSGABE FEHLENDER BILD DATEINAMEN #######");
    QString elem;
    foreach (elem, list) {
        QFile file("./" + elem);
        if (!file.exists()) {
            printMsg(elem.toStdString().c_str());
        } //endif
    } //endforeach

    printMsg("####### ENDE AUSGABE FEHLENDER BILD DATEINAMEN #######");
    exit(0);
} //endfunction start

void Finder::printMsg(const char* msg) {
    qout << msg << endl;
} //endfunction printMsg

void Finder::connect() {
    printMsg("Connecting to database...");

    this->db.setHostName(config[0]);
    this->db.setDatabaseName(config[1]);
    this->db.setUserName(config[2]);
    this->db.setPassword(config[3]);

    bool ok = db.open();

    if (!ok) {
        printMsg("ERROR: Couldn't connect to database, exiting.");
        exit(0);
    } //endif
} //endfunction connect

QList<QString> Finder::getTable() {
    QList<QString> list;

    QSqlQuery query(QString("SELECT filename FROM gallerifile"));

    if ( !query.isActive() ) {
        printMsg("ERROR: Could not execute the query.");
    } else {
        while (query.next()) {
            list.append(query.value(0).toString());
        } //endwhile
    } //endif

    return list;
} //endfunction getTable
