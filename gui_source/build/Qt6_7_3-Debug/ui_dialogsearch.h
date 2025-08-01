/********************************************************************************
** Form generated from reading UI file 'dialogsearch.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSEARCH_H
#define UI_DIALOGSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSearch
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBoxSearchFrom;
    QTabWidget *tabWidgetSearch;
    QWidget *tabString;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEditString;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxMatchCase;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBoxType;
    QWidget *tabSignature;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *plainTextEditSignature;
    QWidget *tabValue;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditValue;
    QComboBox *comboBoxEndianness;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonUshort;
    QRadioButton *radioButtonChar;
    QRadioButton *radioButtonInt;
    QRadioButton *radioButtonByte;
    QRadioButton *radioButtonShort;
    QRadioButton *radioButtonFloat;
    QRadioButton *radioButtonUchar;
    QRadioButton *radioButtonWord;
    QRadioButton *radioButtonDword;
    QRadioButton *radioButtonQword;
    QRadioButton *radioButtonUint;
    QRadioButton *radioButtonInt64;
    QRadioButton *radioButtonUint64;
    QRadioButton *radioButtonDouble;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEditHex;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DialogSearch)
    {
        if (DialogSearch->objectName().isEmpty())
            DialogSearch->setObjectName("DialogSearch");
        DialogSearch->setWindowModality(Qt::ApplicationModal);
        DialogSearch->resize(421, 371);
        DialogSearch->setModal(true);
        verticalLayout_4 = new QVBoxLayout(DialogSearch);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        comboBoxSearchFrom = new QComboBox(DialogSearch);
        comboBoxSearchFrom->setObjectName("comboBoxSearchFrom");

        horizontalLayout_2->addWidget(comboBoxSearchFrom);


        verticalLayout_4->addLayout(horizontalLayout_2);

        tabWidgetSearch = new QTabWidget(DialogSearch);
        tabWidgetSearch->setObjectName("tabWidgetSearch");
        tabString = new QWidget();
        tabString->setObjectName("tabString");
        verticalLayout_2 = new QVBoxLayout(tabString);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        plainTextEditString = new QPlainTextEdit(tabString);
        plainTextEditString->setObjectName("plainTextEditString");

        verticalLayout_2->addWidget(plainTextEditString);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBoxMatchCase = new QCheckBox(tabString);
        checkBoxMatchCase->setObjectName("checkBoxMatchCase");

        horizontalLayout_3->addWidget(checkBoxMatchCase);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        comboBoxType = new QComboBox(tabString);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(comboBoxType);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tabWidgetSearch->addTab(tabString, QString());
        tabSignature = new QWidget();
        tabSignature->setObjectName("tabSignature");
        verticalLayout_3 = new QVBoxLayout(tabSignature);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        plainTextEditSignature = new QPlainTextEdit(tabSignature);
        plainTextEditSignature->setObjectName("plainTextEditSignature");

        verticalLayout_3->addWidget(plainTextEditSignature);

        tabWidgetSearch->addTab(tabSignature, QString());
        tabValue = new QWidget();
        tabValue->setObjectName("tabValue");
        verticalLayout_8 = new QVBoxLayout(tabValue);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lineEditValue = new QLineEdit(tabValue);
        lineEditValue->setObjectName("lineEditValue");

        horizontalLayout_4->addWidget(lineEditValue);

        comboBoxEndianness = new QComboBox(tabValue);
        comboBoxEndianness->setObjectName("comboBoxEndianness");

        horizontalLayout_4->addWidget(comboBoxEndianness);


        verticalLayout_8->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        radioButtonUshort = new QRadioButton(tabValue);
        radioButtonUshort->setObjectName("radioButtonUshort");
        radioButtonUshort->setText(QString::fromUtf8("ushort"));

        gridLayout->addWidget(radioButtonUshort, 3, 1, 1, 1);

        radioButtonChar = new QRadioButton(tabValue);
        radioButtonChar->setObjectName("radioButtonChar");
        radioButtonChar->setText(QString::fromUtf8("char"));

        gridLayout->addWidget(radioButtonChar, 0, 1, 1, 1);

        radioButtonInt = new QRadioButton(tabValue);
        radioButtonInt->setObjectName("radioButtonInt");
        radioButtonInt->setText(QString::fromUtf8("int"));

        gridLayout->addWidget(radioButtonInt, 0, 2, 1, 1);

        radioButtonByte = new QRadioButton(tabValue);
        radioButtonByte->setObjectName("radioButtonByte");
        radioButtonByte->setText(QString::fromUtf8("byte"));

        gridLayout->addWidget(radioButtonByte, 0, 0, 1, 1);

        radioButtonShort = new QRadioButton(tabValue);
        radioButtonShort->setObjectName("radioButtonShort");
        radioButtonShort->setText(QString::fromUtf8("short"));

        gridLayout->addWidget(radioButtonShort, 2, 1, 1, 1);

        radioButtonFloat = new QRadioButton(tabValue);
        radioButtonFloat->setObjectName("radioButtonFloat");
        radioButtonFloat->setText(QString::fromUtf8("float"));

        gridLayout->addWidget(radioButtonFloat, 0, 4, 1, 1);

        radioButtonUchar = new QRadioButton(tabValue);
        radioButtonUchar->setObjectName("radioButtonUchar");
        radioButtonUchar->setText(QString::fromUtf8("uchar"));

        gridLayout->addWidget(radioButtonUchar, 1, 1, 1, 1);

        radioButtonWord = new QRadioButton(tabValue);
        radioButtonWord->setObjectName("radioButtonWord");
        radioButtonWord->setText(QString::fromUtf8("word"));

        gridLayout->addWidget(radioButtonWord, 1, 0, 1, 1);

        radioButtonDword = new QRadioButton(tabValue);
        radioButtonDword->setObjectName("radioButtonDword");
        radioButtonDword->setText(QString::fromUtf8("dword"));

        gridLayout->addWidget(radioButtonDword, 2, 0, 1, 1);

        radioButtonQword = new QRadioButton(tabValue);
        radioButtonQword->setObjectName("radioButtonQword");
        radioButtonQword->setText(QString::fromUtf8("qword"));

        gridLayout->addWidget(radioButtonQword, 3, 0, 1, 1);

        radioButtonUint = new QRadioButton(tabValue);
        radioButtonUint->setObjectName("radioButtonUint");
        radioButtonUint->setText(QString::fromUtf8("uint"));

        gridLayout->addWidget(radioButtonUint, 1, 2, 1, 1);

        radioButtonInt64 = new QRadioButton(tabValue);
        radioButtonInt64->setObjectName("radioButtonInt64");
        radioButtonInt64->setText(QString::fromUtf8("int64"));

        gridLayout->addWidget(radioButtonInt64, 2, 2, 1, 1);

        radioButtonUint64 = new QRadioButton(tabValue);
        radioButtonUint64->setObjectName("radioButtonUint64");
        radioButtonUint64->setText(QString::fromUtf8("uint64"));

        gridLayout->addWidget(radioButtonUint64, 3, 2, 1, 1);

        radioButtonDouble = new QRadioButton(tabValue);
        radioButtonDouble->setObjectName("radioButtonDouble");
        radioButtonDouble->setText(QString::fromUtf8("double"));

        gridLayout->addWidget(radioButtonDouble, 1, 4, 1, 1);


        verticalLayout_8->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        lineEditHex = new QLineEdit(tabValue);
        lineEditHex->setObjectName("lineEditHex");
        lineEditHex->setReadOnly(true);

        verticalLayout_8->addWidget(lineEditHex);

        tabWidgetSearch->addTab(tabValue, QString());

        verticalLayout_4->addWidget(tabWidgetSearch);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(DialogSearch);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(DialogSearch);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(DialogSearch);

        tabWidgetSearch->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogSearch);
    } // setupUi

    void retranslateUi(QDialog *DialogSearch)
    {
        DialogSearch->setWindowTitle(QCoreApplication::translate("DialogSearch", "Search", nullptr));
        checkBoxMatchCase->setText(QCoreApplication::translate("DialogSearch", "Match case", nullptr));
        tabWidgetSearch->setTabText(tabWidgetSearch->indexOf(tabString), QCoreApplication::translate("DialogSearch", "String", nullptr));
        tabWidgetSearch->setTabText(tabWidgetSearch->indexOf(tabSignature), QCoreApplication::translate("DialogSearch", "Signature", nullptr));
        tabWidgetSearch->setTabText(tabWidgetSearch->indexOf(tabValue), QCoreApplication::translate("DialogSearch", "Value", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogSearch", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("DialogSearch", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSearch: public Ui_DialogSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSEARCH_H
