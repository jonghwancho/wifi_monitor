#include <QCoreApplication>
#include "iw_list.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    iwlist_main(argc, argv);
    //iwlist_main();

    return a.exec();
}
