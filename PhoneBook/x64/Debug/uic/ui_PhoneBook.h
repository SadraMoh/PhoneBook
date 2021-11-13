/********************************************************************************
** Form generated from reading UI file 'PhoneBook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEBOOK_H
#define UI_PHONEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhoneBookClass
{
public:
    QAction *actionNew;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionCut;
    QAction *actionSelect_All;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtSearch;
    QPushButton *btnSearch;
    QPushButton *btnAdd;
    QListView *listContacts;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PhoneBookClass)
    {
        if (PhoneBookClass->objectName().isEmpty())
            PhoneBookClass->setObjectName(QString::fromUtf8("PhoneBookClass"));
        PhoneBookClass->resize(658, 445);
        actionNew = new QAction(PhoneBookClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionExit = new QAction(PhoneBookClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(PhoneBookClass);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(PhoneBookClass);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDelete = new QAction(PhoneBookClass);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionCut = new QAction(PhoneBookClass);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionSelect_All = new QAction(PhoneBookClass);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        centralWidget = new QWidget(PhoneBookClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtSearch = new QLineEdit(centralWidget);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));

        horizontalLayout->addWidget(txtSearch);

        btnSearch = new QPushButton(centralWidget);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));

        horizontalLayout->addWidget(btnSearch);

        btnAdd = new QPushButton(centralWidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        horizontalLayout->addWidget(btnAdd);


        verticalLayout->addLayout(horizontalLayout);

        listContacts = new QListView(centralWidget);
        listContacts->setObjectName(QString::fromUtf8("listContacts"));

        verticalLayout->addWidget(listContacts);


        verticalLayout_2->addLayout(verticalLayout);

        PhoneBookClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PhoneBookClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        PhoneBookClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PhoneBookClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PhoneBookClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PhoneBookClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PhoneBookClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionSelect_All);

        retranslateUi(PhoneBookClass);
        QObject::connect(btnAdd, SIGNAL(clicked()), PhoneBookClass, SLOT(addContact()));

        QMetaObject::connectSlotsByName(PhoneBookClass);
    } // setupUi

    void retranslateUi(QMainWindow *PhoneBookClass)
    {
        PhoneBookClass->setWindowTitle(QCoreApplication::translate("PhoneBookClass", "PhoneBook", nullptr));
        actionNew->setText(QCoreApplication::translate("PhoneBookClass", "New Contact", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("PhoneBookClass", "Alt+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("PhoneBookClass", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("PhoneBookClass", "Alt+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("PhoneBookClass", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("PhoneBookClass", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("PhoneBookClass", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("PhoneBookClass", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("PhoneBookClass", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("PhoneBookClass", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("PhoneBookClass", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("PhoneBookClass", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelect_All->setText(QCoreApplication::translate("PhoneBookClass", "Select All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_All->setShortcut(QCoreApplication::translate("PhoneBookClass", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        btnSearch->setText(QCoreApplication::translate("PhoneBookClass", "Search", nullptr));
        btnAdd->setText(QCoreApplication::translate("PhoneBookClass", "Add Contact", nullptr));
        menuFile->setTitle(QCoreApplication::translate("PhoneBookClass", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("PhoneBookClass", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhoneBookClass: public Ui_PhoneBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEBOOK_H
