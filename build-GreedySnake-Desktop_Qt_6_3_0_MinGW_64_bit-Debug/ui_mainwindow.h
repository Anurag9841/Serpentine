/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionSpeed_Up;
    QAction *actionSpeed_Down;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *playground;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnRestart;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAutoManual;
    QSpacerItem *horizontalSpacer_2;
    QLabel *timeout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(735, 581);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionSpeed_Up = new QAction(MainWindow);
        actionSpeed_Up->setObjectName(QString::fromUtf8("actionSpeed_Up"));
        actionSpeed_Down = new QAction(MainWindow);
        actionSpeed_Down->setObjectName(QString::fromUtf8("actionSpeed_Down"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 10, 571, 471));
        playground = new QGridLayout(gridLayoutWidget);
        playground->setSpacing(6);
        playground->setContentsMargins(11, 11, 11, 11);
        playground->setObjectName(QString::fromUtf8("playground"));
        playground->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 490, 481, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnRestart = new QPushButton(layoutWidget);
        btnRestart->setObjectName(QString::fromUtf8("btnRestart"));

        horizontalLayout->addWidget(btnRestart);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnAutoManual = new QPushButton(layoutWidget);
        btnAutoManual->setObjectName(QString::fromUtf8("btnAutoManual"));

        horizontalLayout->addWidget(btnAutoManual);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        timeout = new QLabel(layoutWidget);
        timeout->setObjectName(QString::fromUtf8("timeout"));

        horizontalLayout->addWidget(timeout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSpeed_Up->setText(QCoreApplication::translate("MainWindow", "Speed Up", nullptr));
#if QT_CONFIG(shortcut)
        actionSpeed_Up->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSpeed_Down->setText(QCoreApplication::translate("MainWindow", "Speed Down", nullptr));
#if QT_CONFIG(shortcut)
        actionSpeed_Down->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        btnRestart->setText(QCoreApplication::translate("MainWindow", "&Restart", nullptr));
        btnAutoManual->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        timeout->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
