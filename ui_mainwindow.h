/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTentang_Aplikasi;
    QAction *actionKeluar;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(621, 322);
        actionTentang_Aplikasi = new QAction(MainWindow);
        actionTentang_Aplikasi->setObjectName(QString::fromUtf8("actionTentang_Aplikasi"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Kali aja bisa/settings-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTentang_Aplikasi->setIcon(icon);
        actionKeluar = new QAction(MainWindow);
        actionKeluar->setObjectName(QString::fromUtf8("actionKeluar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Kali aja bisa/restricted-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKeluar->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 80, 621, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft New Tai Lue"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 200, 101, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 621, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Kali aja bisa/Untitled-1.png")));
        label_2->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 621, 26));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionTentang_Aplikasi);
        menuMenu->addAction(actionKeluar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionTentang_Aplikasi->setText(QCoreApplication::translate("MainWindow", "Tentang Aplikasi", nullptr));
        actionKeluar->setText(QCoreApplication::translate("MainWindow", "Keluar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Aplikasi Sederhana Perhitungan Gaji Karyawan pada PT. Indah Makmur,. Tbk.", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        label_2->setText(QString());
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
