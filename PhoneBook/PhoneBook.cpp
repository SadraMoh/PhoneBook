#include "PhoneBook.h"

PhoneBook::PhoneBook(QWidget* parent) : QMainWindow(parent)
{
	ui.setupUi(this);

}

void PhoneBook::addContact() {
	QString filename = QFileDialog::getOpenFileName(this, "Open File");


}
