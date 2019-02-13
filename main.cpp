#include <QCoreApplication>
#include "CCore.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // CCore object
    if (argc > 2)
        return 0;

    return a.exec();
}
