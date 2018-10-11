#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //create the parent
    test* parent = new test(&a);

    parent->dog = new animal(parent);

    delete parent;

    return a.exec();
    //a deconstructed!!!
}
