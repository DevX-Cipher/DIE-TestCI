/********************************************************************************
** Form generated from reading UI file 'dialogmodelinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODELINFO_H
#define UI_DIALOGMODELINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogModelInfo
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogModelInfo)
    {
        if (DialogModelInfo->objectName().isEmpty())
            DialogModelInfo->setObjectName(QString::fromUtf8("DialogModelInfo"));
        DialogModelInfo->setWindowModality(Qt::ApplicationModal);
        DialogModelInfo->resize(533, 425);
        DialogModelInfo->setWindowTitle(QString::fromUtf8(""));
        DialogModelInfo->setModal(true);
        verticalLayout = new QVBoxLayout(DialogModelInfo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(DialogModelInfo);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonSave = new QPushButton(DialogModelInfo);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        horizontalLayout->addWidget(pushButtonSave);

        pushButtonOK = new QPushButton(DialogModelInfo);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogModelInfo);

        QMetaObject::connectSlotsByName(DialogModelInfo);
    } // setupUi

    void retranslateUi(QDialog *DialogModelInfo)
    {
        pushButtonSave->setText(QCoreApplication::translate("DialogModelInfo", "Save", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogModelInfo", "OK", nullptr));
        (void)DialogModelInfo;
    } // retranslateUi

};

namespace Ui {
    class DialogModelInfo: public Ui_DialogModelInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODELINFO_H
