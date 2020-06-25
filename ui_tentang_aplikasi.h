/********************************************************************************
** Form generated from reading UI file 'tentang_aplikasi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENTANG_APLIKASI_H
#define UI_TENTANG_APLIKASI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Tentang_Aplikasi
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QDialog *Tentang_Aplikasi)
    {
        if (Tentang_Aplikasi->objectName().isEmpty())
            Tentang_Aplikasi->setObjectName(QString::fromUtf8("Tentang_Aplikasi"));
        Tentang_Aplikasi->resize(1068, 595);
        label = new QLabel(Tentang_Aplikasi);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 1051, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox = new QGroupBox(Tentang_Aplikasi);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 150, 721, 441));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 701, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 701, 41));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 160, 701, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 250, 701, 51));
        label_5->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 290, 701, 51));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 340, 701, 31));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 390, 701, 31));
        label_9->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(Tentang_Aplikasi);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 30, 781, 101));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(true);
        label_12 = new QLabel(Tentang_Aplikasi);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(750, 410, 141, 171));
        label_12->setPixmap(QPixmap(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Project Aplikasi Sederhana/123.png")));
        label_12->setScaledContents(true);
        label_10 = new QLabel(Tentang_Aplikasi);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(740, 170, 151, 141));
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setFrameShadow(QFrame::Plain);
        label_10->setPixmap(QPixmap(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Project Aplikasi Sederhana/2020-02-17 11.47.14 1.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(Tentang_Aplikasi);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(900, 320, 151, 141));
        label_11->setPixmap(QPixmap(QString::fromUtf8("D:/Campoes/SEM.2/Struktur Data/Project Aplikasi Sederhana/WhatsApp Image 2020-03-19 at 21.00.16.png")));
        label_11->setScaledContents(true);

        retranslateUi(Tentang_Aplikasi);

        QMetaObject::connectSlotsByName(Tentang_Aplikasi);
    } // setupUi

    void retranslateUi(QDialog *Tentang_Aplikasi)
    {
        Tentang_Aplikasi->setWindowTitle(QCoreApplication::translate("Tentang_Aplikasi", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Tentang_Aplikasi", "Tentang Aplikasi", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Tentang_Aplikasi", "DATA KELOMPOK", nullptr));
        label_2->setText(QCoreApplication::translate("Tentang_Aplikasi", "1. Roni Hamonangan                              (4611419001)", nullptr));
        label_3->setText(QCoreApplication::translate("Tentang_Aplikasi", "2. Tulus Pangidoan S                              (4611419003)", nullptr));
        label_4->setText(QCoreApplication::translate("Tentang_Aplikasi", "3. Novanka Angnes S                              (4611419005)", nullptr));
        label_5->setText(QCoreApplication::translate("Tentang_Aplikasi", "Universitas Negeri Semarang", nullptr));
        label_7->setText(QCoreApplication::translate("Tentang_Aplikasi", "Fakultas Ilmu Pengetahuan Alam dan Matematika", nullptr));
        label_8->setText(QCoreApplication::translate("Tentang_Aplikasi", "Ilmu Komputer/Teknik Informatika", nullptr));
        label_9->setText(QCoreApplication::translate("Tentang_Aplikasi", "2019", nullptr));
        label_6->setText(QCoreApplication::translate("Tentang_Aplikasi", "Aplikasi ini dibuat dalam rangka menyelesaikan Tugas Akhir Mata Kuliah Struktrur Data dengan Bahasa Pemrograman C++", nullptr));
        label_12->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tentang_Aplikasi: public Ui_Tentang_Aplikasi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENTANG_APLIKASI_H
