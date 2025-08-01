/********************************************************************************
** Form generated from reading UI file 'dialogmultidisasmsignature.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMULTIDISASMSIGNATURE_H
#define UI_DIALOGMULTIDISASMSIGNATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogMultiDisasmSignature
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBoxCount;
    QComboBox *comboBoxMethod;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidgetSignature;
    QTextEdit *textEditSignature;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxSpaces;
    QCheckBox *checkBoxUpper;
    QLabel *labelWildcard;
    QLineEdit *lineEditWildcard;
    QPushButton *pushButtonScan;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonCopy;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogMultiDisasmSignature)
    {
        if (DialogMultiDisasmSignature->objectName().isEmpty())
            DialogMultiDisasmSignature->setObjectName("DialogMultiDisasmSignature");
        DialogMultiDisasmSignature->setWindowModality(Qt::ApplicationModal);
        DialogMultiDisasmSignature->resize(935, 413);
        DialogMultiDisasmSignature->setModal(true);
        verticalLayout = new QVBoxLayout(DialogMultiDisasmSignature);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        spinBoxCount = new QSpinBox(DialogMultiDisasmSignature);
        spinBoxCount->setObjectName("spinBoxCount");
        spinBoxCount->setMinimum(1);
        spinBoxCount->setMaximum(20);
        spinBoxCount->setValue(8);

        horizontalLayout->addWidget(spinBoxCount);

        comboBoxMethod = new QComboBox(DialogMultiDisasmSignature);
        comboBoxMethod->setObjectName("comboBoxMethod");
        comboBoxMethod->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(comboBoxMethod);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableWidgetSignature = new QTableWidget(DialogMultiDisasmSignature);
        tableWidgetSignature->setObjectName("tableWidgetSignature");
        tableWidgetSignature->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetSignature->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetSignature->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetSignature->horizontalHeader()->setVisible(false);
        tableWidgetSignature->verticalHeader()->setVisible(false);
        tableWidgetSignature->verticalHeader()->setMinimumSectionSize(20);
        tableWidgetSignature->verticalHeader()->setDefaultSectionSize(20);

        verticalLayout->addWidget(tableWidgetSignature);

        textEditSignature = new QTextEdit(DialogMultiDisasmSignature);
        textEditSignature->setObjectName("textEditSignature");
        textEditSignature->setMaximumSize(QSize(16777215, 100));
        textEditSignature->setReadOnly(true);
        textEditSignature->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>"));

        verticalLayout->addWidget(textEditSignature);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBoxSpaces = new QCheckBox(DialogMultiDisasmSignature);
        checkBoxSpaces->setObjectName("checkBoxSpaces");

        horizontalLayout_2->addWidget(checkBoxSpaces);

        checkBoxUpper = new QCheckBox(DialogMultiDisasmSignature);
        checkBoxUpper->setObjectName("checkBoxUpper");
        checkBoxUpper->setChecked(true);

        horizontalLayout_2->addWidget(checkBoxUpper);

        labelWildcard = new QLabel(DialogMultiDisasmSignature);
        labelWildcard->setObjectName("labelWildcard");

        horizontalLayout_2->addWidget(labelWildcard);

        lineEditWildcard = new QLineEdit(DialogMultiDisasmSignature);
        lineEditWildcard->setObjectName("lineEditWildcard");
        lineEditWildcard->setMaximumSize(QSize(20, 16777215));
        lineEditWildcard->setText(QString::fromUtf8("."));
        lineEditWildcard->setMaxLength(1);
        lineEditWildcard->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEditWildcard);

        pushButtonScan = new QPushButton(DialogMultiDisasmSignature);
        pushButtonScan->setObjectName("pushButtonScan");

        horizontalLayout_2->addWidget(pushButtonScan);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonCopy = new QPushButton(DialogMultiDisasmSignature);
        pushButtonCopy->setObjectName("pushButtonCopy");

        horizontalLayout_2->addWidget(pushButtonCopy);

        pushButtonOK = new QPushButton(DialogMultiDisasmSignature);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout_2->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DialogMultiDisasmSignature);

        QMetaObject::connectSlotsByName(DialogMultiDisasmSignature);
    } // setupUi

    void retranslateUi(QDialog *DialogMultiDisasmSignature)
    {
        DialogMultiDisasmSignature->setWindowTitle(QCoreApplication::translate("DialogMultiDisasmSignature", "Signature", nullptr));
        checkBoxSpaces->setText(QCoreApplication::translate("DialogMultiDisasmSignature", "Spaces", nullptr));
        checkBoxUpper->setText(QCoreApplication::translate("DialogMultiDisasmSignature", "Upper", nullptr));
        labelWildcard->setText(QCoreApplication::translate("DialogMultiDisasmSignature", "Wildcard", nullptr));
        pushButtonScan->setText(QCoreApplication::translate("DialogMultiDisasmSignature", "Scan", nullptr));
        pushButtonCopy->setText(QCoreApplication::translate("DialogMultiDisasmSignature", "Copy", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogMultiDisasmSignature", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMultiDisasmSignature: public Ui_DialogMultiDisasmSignature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMULTIDISASMSIGNATURE_H
