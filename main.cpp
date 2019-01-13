#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    if (argc > 2)
        return 0;

    return a.exec();
}
