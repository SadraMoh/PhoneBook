#include "PhoneBook.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    PhoneBook window;

    window.show();
    return application.exec();
}
