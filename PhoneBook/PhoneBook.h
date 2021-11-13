#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PhoneBook.h"

#include <qmainwindow.h>

#include <qfile.h>
#include <qfiledialog.h>
#include <qtextstream.h>
#include <qmessagebox.h>
#include <qdialog.h>

using namespace std;

namespace Ui {
	class MainWindow {

	};
}

class PhoneBook : public QMainWindow
{
	Q_OBJECT

public:
	PhoneBook(QWidget* parent = Q_NULLPTR);

public slots:
	void addContact();

private:
	Ui::PhoneBookClass ui;
	QString currentFile = "";
};
