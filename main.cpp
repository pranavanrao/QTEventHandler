#include "mywidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();

    MyWidget w1;
    w1.show();

    w.setObjectName("Salman Kan");
    w1.setObjectName("Katrina Kaif");
    return a.exec();
}
