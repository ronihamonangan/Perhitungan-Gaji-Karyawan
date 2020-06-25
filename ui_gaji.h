/********************************************************************************
** Form generated from reading UI file 'gaji.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAJI_H
#define UI_GAJI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gaji
{
public:
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QLabel *label_10;
    QLineEdit *lineEdit_6;
    QLabel *label_11;
    QLineEdit *lineEdit_7;
    QLabel *label_12;
    QLineEdit *lineEdit_8;
    QLabel *label_13;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_nama;

    void setupUi(QDialog *gaji)
    {
        if (gaji->objectName().isEmpty())
            gaji->setObjectName(QString::fromUtf8("gaji"));
        gaji->resize(941, 917);
        label = new QLabel(gaji);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 130, 941, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(gaji);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 170, 941, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(gaji);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 230, 421, 181));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 20, 161, 31));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 20, 241, 31));
        lineEdit->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 80, 161, 31));
        label_4->setFont(font1);
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(170, 80, 241, 31));
        comboBox->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 140, 161, 31));
        label_5->setFont(font1);
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(170, 140, 241, 31));
        comboBox_2->setFont(font1);
        groupBox_2 = new QGroupBox(gaji);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(450, 410, 471, 491));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 201, 31));
        label_6->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 20, 251, 31));
        lineEdit_2->setFont(font1);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 70, 221, 31));
        label_7->setFont(font1);
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(210, 70, 251, 31));
        lineEdit_3->setFont(font1);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 120, 221, 31));
        label_8->setFont(font1);
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(210, 120, 251, 31));
        lineEdit_4->setFont(font1);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 170, 201, 31));
        label_9->setFont(font1);
        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(210, 170, 251, 31));
        lineEdit_5->setFont(font1);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 220, 201, 31));
        label_10->setFont(font1);
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(210, 220, 251, 31));
        lineEdit_6->setFont(font1);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 320, 201, 31));
        label_11->setFont(font1);
        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(210, 270, 251, 31));
        lineEdit_7->setFont(font1);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 270, 201, 31));
        label_12->setFont(font1);
        lineEdit_8 = new QLineEdit(groupBox_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(210, 320, 251, 31));
        lineEdit_8->setFont(font1);
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 390, 201, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_13->setFont(font2);
        lineEdit_9 = new QLineEdit(groupBox_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(210, 390, 251, 31));
        lineEdit_9->setFont(font2);
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 450, 151, 31));
        label_14 = new QLabel(gaji);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 0, 941, 121));
        label_14->setPixmap(QPixmap(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Kali aja bisa/Untitled-1.png")));
        label_14->setScaledContents(true);
        label_15 = new QLabel(gaji);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 430, 361, 381));
        label_15->setPixmap(QPixmap(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Project Aplikasi Sederhana/Mentahan/User_font_awesome.svg.png")));
        label_15->setScaledContents(true);
        lineEdit_nama = new QLineEdit(gaji);
        lineEdit_nama->setObjectName(QString::fromUtf8("lineEdit_nama"));
        lineEdit_nama->setGeometry(QRect(70, 800, 291, 31));
        lineEdit_nama->setFont(font);
        lineEdit_nama->setDragEnabled(false);

        retranslateUi(gaji);

        QMetaObject::connectSlotsByName(gaji);
    } // setupUi

    void retranslateUi(QDialog *gaji)
    {
        gaji->setWindowTitle(QCoreApplication::translate("gaji", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gaji", "INPUT DATA YANG DIPERLUKAN", nullptr));
        label_2->setText(QCoreApplication::translate("gaji", "UNTUK MENGHITUNG GAJI KARYAWAN PT. INDAH MAKMUR,. TBK", nullptr));
        groupBox->setTitle(QCoreApplication::translate("gaji", "Input Awal", nullptr));
        label_3->setText(QCoreApplication::translate("gaji", "Nama Karyawan :", nullptr));
        label_4->setText(QCoreApplication::translate("gaji", "Jabatan             :", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("gaji", "Manajer", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("gaji", "Kepala Divisi", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("gaji", "Karyawan Tetap", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("gaji", "Karyawan Kontrak", nullptr));

        label_5->setText(QCoreApplication::translate("gaji", "Status               :", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("gaji", "Menikah", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("gaji", "Belum Menikah", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("gaji", "Hasil", nullptr));
        label_6->setText(QCoreApplication::translate("gaji", "Nama Karyawan        :", nullptr));
        label_7->setText(QCoreApplication::translate("gaji", "Jabatan                    :", nullptr));
        label_8->setText(QCoreApplication::translate("gaji", "Status                      :", nullptr));
        lineEdit_4->setText(QString());
        label_9->setText(QCoreApplication::translate("gaji", "Gaji Pokok                :", nullptr));
        lineEdit_5->setText(QString());
        label_10->setText(QCoreApplication::translate("gaji", "Tunjangan                :", nullptr));
        lineEdit_6->setText(QString());
        label_11->setText(QCoreApplication::translate("gaji", "Pajak Gaji Karyawan :", nullptr));
        lineEdit_7->setText(QString());
        label_12->setText(QCoreApplication::translate("gaji", "Gaji Kotor                 :", nullptr));
        lineEdit_8->setText(QString());
        label_13->setText(QCoreApplication::translate("gaji", "Gaji Diterima          :", nullptr));
        lineEdit_9->setText(QString());
        pushButton->setText(QCoreApplication::translate("gaji", "HITUNG GAJI", nullptr));
        label_14->setText(QString());
        label_15->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gaji: public Ui_gaji {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAJI_H
