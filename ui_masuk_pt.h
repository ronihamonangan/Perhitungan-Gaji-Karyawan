/********************************************************************************
** Form generated from reading UI file 'masuk_pt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASUK_PT_H
#define UI_MASUK_PT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_masuk_pt
{
public:
    QAction *actionTentang_Aplikasi;
    QAction *actionKeluar;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *masuk_pt)
    {
        if (masuk_pt->objectName().isEmpty())
            masuk_pt->setObjectName(QString::fromUtf8("masuk_pt"));
        masuk_pt->resize(751, 413);
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        masuk_pt->setFont(font);
        actionTentang_Aplikasi = new QAction(masuk_pt);
        actionTentang_Aplikasi->setObjectName(QString::fromUtf8("actionTentang_Aplikasi"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Kali aja bisa/settings-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTentang_Aplikasi->setIcon(icon);
        actionKeluar = new QAction(masuk_pt);
        actionKeluar->setObjectName(QString::fromUtf8("actionKeluar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Kali aja bisa/restricted-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKeluar->setIcon(icon1);
        centralwidget = new QWidget(masuk_pt);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 751, 111));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setPixmap(QPixmap(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Kali aja bisa/Untitled-1.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 150, 201, 151));
        label_2->setPixmap(QPixmap(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Project Aplikasi Sederhana/pc.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 170, 121, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(400, 170, 311, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 240, 121, 31));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(400, 240, 311, 31));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 300, 161, 41));
        masuk_pt->setCentralWidget(centralwidget);
        menubar = new QMenuBar(masuk_pt);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 751, 26));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        masuk_pt->setMenuBar(menubar);
        statusbar = new QStatusBar(masuk_pt);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        masuk_pt->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionTentang_Aplikasi);
        menuMenu->addAction(actionKeluar);

        retranslateUi(masuk_pt);

        QMetaObject::connectSlotsByName(masuk_pt);
    } // setupUi

    void retranslateUi(QMainWindow *masuk_pt)
    {
        masuk_pt->setWindowTitle(QCoreApplication::translate("masuk_pt", "MainWindow", nullptr));
        actionTentang_Aplikasi->setText(QCoreApplication::translate("masuk_pt", "Tentang Aplikasi", nullptr));
        actionKeluar->setText(QCoreApplication::translate("masuk_pt", "Keluar", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("masuk_pt", "Username :", nullptr));
        label_4->setText(QCoreApplication::translate("masuk_pt", "Password  :", nullptr));
        pushButton->setText(QCoreApplication::translate("masuk_pt", "LOGIN", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("masuk_pt", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class masuk_pt: public Ui_masuk_pt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASUK_PT_H
