/********************************************************************************
** Form generated from reading UI file 'dialoghexsignature.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHEXSIGNATURE_H
#define UI_DIALOGHEXSIGNATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogHexSignature
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *GroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout0;
    QHBoxLayout *horizontalLayout1;
    QHBoxLayout *horizontalLayout2;
    QHBoxLayout *horizontalLayout3;
    QHBoxLayout *horizontalLayout4;
    QHBoxLayout *horizontalLayout5;
    QHBoxLayout *horizontalLayout6;
    QHBoxLayout *horizontalLayout7;
    QTextEdit *textEditSignature;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxSpaces;
    QCheckBox *checkBoxUpper;
    QLabel *labelWildcard;
    QLineEdit *lineEditWildcard;
    QCheckBox *checkBoxANSI;
    QPushButton *pushButtonScan;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonCopy;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogHexSignature)
    {
        if (DialogHexSignature->objectName().isEmpty())
            DialogHexSignature->setObjectName("DialogHexSignature");
        DialogHexSignature->setWindowModality(Qt::ApplicationModal);
        DialogHexSignature->resize(576, 420);
        DialogHexSignature->setModal(true);
        verticalLayout_2 = new QVBoxLayout(DialogHexSignature);
        verticalLayout_2->setObjectName("verticalLayout_2");
        GroupBox = new QGroupBox(DialogHexSignature);
        GroupBox->setObjectName("GroupBox");
        GroupBox->setMinimumSize(QSize(0, 160));
        verticalLayout = new QVBoxLayout(GroupBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout0 = new QHBoxLayout();
        horizontalLayout0->setSpacing(0);
        horizontalLayout0->setObjectName("horizontalLayout0");
        horizontalLayout0->setSizeConstraint(QLayout::SetDefaultConstraint);

        verticalLayout->addLayout(horizontalLayout0);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setSpacing(0);
        horizontalLayout1->setObjectName("horizontalLayout1");

        verticalLayout->addLayout(horizontalLayout1);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setSpacing(0);
        horizontalLayout2->setObjectName("horizontalLayout2");

        verticalLayout->addLayout(horizontalLayout2);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setSpacing(0);
        horizontalLayout3->setObjectName("horizontalLayout3");

        verticalLayout->addLayout(horizontalLayout3);

        horizontalLayout4 = new QHBoxLayout();
        horizontalLayout4->setSpacing(0);
        horizontalLayout4->setObjectName("horizontalLayout4");

        verticalLayout->addLayout(horizontalLayout4);

        horizontalLayout5 = new QHBoxLayout();
        horizontalLayout5->setSpacing(0);
        horizontalLayout5->setObjectName("horizontalLayout5");

        verticalLayout->addLayout(horizontalLayout5);

        horizontalLayout6 = new QHBoxLayout();
        horizontalLayout6->setSpacing(0);
        horizontalLayout6->setObjectName("horizontalLayout6");

        verticalLayout->addLayout(horizontalLayout6);

        horizontalLayout7 = new QHBoxLayout();
        horizontalLayout7->setSpacing(0);
        horizontalLayout7->setObjectName("horizontalLayout7");

        verticalLayout->addLayout(horizontalLayout7);


        verticalLayout_2->addWidget(GroupBox);

        textEditSignature = new QTextEdit(DialogHexSignature);
        textEditSignature->setObjectName("textEditSignature");
        textEditSignature->setReadOnly(true);
        textEditSignature->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8.25pt;\"><br /></p></body></html>"));

        verticalLayout_2->addWidget(textEditSignature);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBoxSpaces = new QCheckBox(DialogHexSignature);
        checkBoxSpaces->setObjectName("checkBoxSpaces");

        horizontalLayout_2->addWidget(checkBoxSpaces);

        checkBoxUpper = new QCheckBox(DialogHexSignature);
        checkBoxUpper->setObjectName("checkBoxUpper");
        checkBoxUpper->setChecked(true);

        horizontalLayout_2->addWidget(checkBoxUpper);

        labelWildcard = new QLabel(DialogHexSignature);
        labelWildcard->setObjectName("labelWildcard");

        horizontalLayout_2->addWidget(labelWildcard);

        lineEditWildcard = new QLineEdit(DialogHexSignature);
        lineEditWildcard->setObjectName("lineEditWildcard");
        lineEditWildcard->setMaximumSize(QSize(20, 16777215));
        lineEditWildcard->setText(QString::fromUtf8("."));
        lineEditWildcard->setMaxLength(1);
        lineEditWildcard->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEditWildcard);

        checkBoxANSI = new QCheckBox(DialogHexSignature);
        checkBoxANSI->setObjectName("checkBoxANSI");
        checkBoxANSI->setText(QString::fromUtf8("ANSI"));

        horizontalLayout_2->addWidget(checkBoxANSI);

        pushButtonScan = new QPushButton(DialogHexSignature);
        pushButtonScan->setObjectName("pushButtonScan");

        horizontalLayout_2->addWidget(pushButtonScan);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonCopy = new QPushButton(DialogHexSignature);
        pushButtonCopy->setObjectName("pushButtonCopy");

        horizontalLayout_2->addWidget(pushButtonCopy);

        pushButtonOK = new QPushButton(DialogHexSignature);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout_2->addWidget(pushButtonOK);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(DialogHexSignature);

        QMetaObject::connectSlotsByName(DialogHexSignature);
    } // setupUi

    void retranslateUi(QDialog *DialogHexSignature)
    {
        DialogHexSignature->setWindowTitle(QCoreApplication::translate("DialogHexSignature", "Signature", nullptr));
        checkBoxSpaces->setText(QCoreApplication::translate("DialogHexSignature", "Spaces", nullptr));
        checkBoxUpper->setText(QCoreApplication::translate("DialogHexSignature", "Upper", nullptr));
        labelWildcard->setText(QCoreApplication::translate("DialogHexSignature", "Wildcard", nullptr));
        pushButtonScan->setText(QCoreApplication::translate("DialogHexSignature", "Scan", nullptr));
        pushButtonCopy->setText(QCoreApplication::translate("DialogHexSignature", "Copy", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogHexSignature", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogHexSignature: public Ui_DialogHexSignature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHEXSIGNATURE_H
