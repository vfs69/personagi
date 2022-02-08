#include <QCoreApplication>
#include "Tiny.h"
#include "pudge.h"
#include "riki.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Tiny u1;
    Pudge u2;
    Riki u3;

    u1.attack(u2);
    u2.MeatHook(u1);
    u3.MeatHook(u2);
    u3.MeatHook(u1);


    return a.exec();
}
