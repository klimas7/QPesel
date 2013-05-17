/********************************************************************************
** Form generated from reading UI file 'Pesel.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PESEL_H
#define UI_PESEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PeselClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *sbRok;
    QCheckBox *cbRok;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *sbMsc;
    QCheckBox *cbMsc;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *sbDzien;
    QCheckBox *cbDzien;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboPlec;
    QCheckBox *cbPlec;
    QPushButton *btnLosuj;
    QLineEdit *tfPesel;
    QPushButton *btnGeneruj;

    void setupUi(QWidget *PeselClass)
    {
        if (PeselClass->objectName().isEmpty())
            PeselClass->setObjectName(QString::fromUtf8("PeselClass"));
        PeselClass->resize(250, 180);
        PeselClass->setMinimumSize(QSize(250, 180));
        PeselClass->setMaximumSize(QSize(250, 180));
        gridLayout = new QGridLayout(PeselClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(PeselClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(50, 0));
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label);

        sbRok = new QSpinBox(PeselClass);
        sbRok->setObjectName(QString::fromUtf8("sbRok"));
        sbRok->setMinimumSize(QSize(80, 0));
        sbRok->setMaximumSize(QSize(80, 16777215));
        sbRok->setMinimum(1900);
        sbRok->setMaximum(2010);
        sbRok->setValue(1972);

        horizontalLayout->addWidget(sbRok);

        cbRok = new QCheckBox(PeselClass);
        cbRok->setObjectName(QString::fromUtf8("cbRok"));
        cbRok->setMinimumSize(QSize(25, 0));
        cbRok->setMaximumSize(QSize(25, 16777215));
        cbRok->setChecked(true);

        horizontalLayout->addWidget(cbRok);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(PeselClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(label_2);

        sbMsc = new QSpinBox(PeselClass);
        sbMsc->setObjectName(QString::fromUtf8("sbMsc"));
        sbMsc->setMinimumSize(QSize(80, 0));
        sbMsc->setMaximumSize(QSize(80, 16777215));
        sbMsc->setMinimum(1);
        sbMsc->setMaximum(12);

        horizontalLayout_2->addWidget(sbMsc);

        cbMsc = new QCheckBox(PeselClass);
        cbMsc->setObjectName(QString::fromUtf8("cbMsc"));
        cbMsc->setMinimumSize(QSize(25, 0));
        cbMsc->setMaximumSize(QSize(25, 16777215));
        cbMsc->setChecked(true);

        horizontalLayout_2->addWidget(cbMsc);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(PeselClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(50, 0));
        label_3->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(label_3);

        sbDzien = new QSpinBox(PeselClass);
        sbDzien->setObjectName(QString::fromUtf8("sbDzien"));
        sbDzien->setMinimumSize(QSize(80, 0));
        sbDzien->setMaximumSize(QSize(80, 16777215));
        sbDzien->setMinimum(1);
        sbDzien->setMaximum(31);
        sbDzien->setSingleStep(1);

        horizontalLayout_3->addWidget(sbDzien);

        cbDzien = new QCheckBox(PeselClass);
        cbDzien->setObjectName(QString::fromUtf8("cbDzien"));
        cbDzien->setMinimumSize(QSize(25, 0));
        cbDzien->setMaximumSize(QSize(25, 16777215));
        cbDzien->setChecked(true);

        horizontalLayout_3->addWidget(cbDzien);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(PeselClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(50, 0));
        label_4->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(label_4);

        comboPlec = new QComboBox(PeselClass);
        comboPlec->setObjectName(QString::fromUtf8("comboPlec"));
        comboPlec->setMinimumSize(QSize(80, 0));
        comboPlec->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(comboPlec);

        cbPlec = new QCheckBox(PeselClass);
        cbPlec->setObjectName(QString::fromUtf8("cbPlec"));
        cbPlec->setMinimumSize(QSize(25, 0));
        cbPlec->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_4->addWidget(cbPlec);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        btnLosuj = new QPushButton(PeselClass);
        btnLosuj->setObjectName(QString::fromUtf8("btnLosuj"));
        btnLosuj->setMinimumSize(QSize(65, 27));

        gridLayout->addWidget(btnLosuj, 0, 1, 1, 1);

        tfPesel = new QLineEdit(PeselClass);
        tfPesel->setObjectName(QString::fromUtf8("tfPesel"));
        tfPesel->setReadOnly(true);

        gridLayout->addWidget(tfPesel, 1, 0, 1, 1);

        btnGeneruj = new QPushButton(PeselClass);
        btnGeneruj->setObjectName(QString::fromUtf8("btnGeneruj"));
        btnGeneruj->setMinimumSize(QSize(65, 27));
        btnGeneruj->setMaximumSize(QSize(65, 27));

        gridLayout->addWidget(btnGeneruj, 1, 1, 1, 1);


        retranslateUi(PeselClass);

        QMetaObject::connectSlotsByName(PeselClass);
    } // setupUi

    void retranslateUi(QWidget *PeselClass)
    {
        PeselClass->setWindowTitle(QApplication::translate("PeselClass", "Pesel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PeselClass", "Rok", 0, QApplication::UnicodeUTF8));
        cbRok->setText(QString());
        label_2->setText(QApplication::translate("PeselClass", "Miesi\304\205c", 0, QApplication::UnicodeUTF8));
        sbMsc->setPrefix(QString());
        cbMsc->setText(QString());
        label_3->setText(QApplication::translate("PeselClass", "Dzie\305\204", 0, QApplication::UnicodeUTF8));
        sbDzien->setSuffix(QString());
        sbDzien->setPrefix(QString());
        cbDzien->setText(QString());
        label_4->setText(QApplication::translate("PeselClass", "P\305\202e\304\207", 0, QApplication::UnicodeUTF8));
        comboPlec->clear();
        comboPlec->insertItems(0, QStringList()
         << QApplication::translate("PeselClass", "\305\274e\305\204ska", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PeselClass", "m\304\231ska", 0, QApplication::UnicodeUTF8)
        );
        cbPlec->setText(QString());
        btnLosuj->setText(QApplication::translate("PeselClass", "Losuj", 0, QApplication::UnicodeUTF8));
        tfPesel->setText(QString());
        btnGeneruj->setText(QApplication::translate("PeselClass", "Generuj", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PeselClass: public Ui_PeselClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PESEL_H
