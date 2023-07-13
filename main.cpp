#include <QCoreApplication>
#include <finder.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    Finder find;
    find.start();

    return a.exec();
}
