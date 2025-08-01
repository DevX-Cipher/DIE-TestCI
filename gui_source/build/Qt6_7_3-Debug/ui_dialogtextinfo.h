/********************************************************************************
** Form generated from reading UI file 'dialogtextinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEXTINFO_H
#define UI_DIALOGTEXTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogTextInfo
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEditInfo;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogTextInfo)
    {
        if (DialogTextInfo->objectName().isEmpty())
            DialogTextInfo->setObjectName("DialogTextInfo");
        DialogTextInfo->setWindowModality(Qt::ApplicationModal);
        DialogTextInfo->resize(542, 351);
        DialogTextInfo->setModal(true);
        verticalLayout = new QVBoxLayout(DialogTextInfo);
        verticalLayout->setObjectName("verticalLayout");
        textEditInfo = new QTextEdit(DialogTextInfo);
        textEditInfo->setObjectName("textEditInfo");
        textEditInfo->setReadOnly(true);

        verticalLayout->addWidget(textEditInfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonSave = new QPushButton(DialogTextInfo);
        pushButtonSave->setObjectName("pushButtonSave");

        horizontalLayout->addWidget(pushButtonSave);

        pushButtonClose = new QPushButton(DialogTextInfo);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogTextInfo);

        QMetaObject::connectSlotsByName(DialogTextInfo);
    } // setupUi

    void retranslateUi(QDialog *DialogTextInfo)
    {
        DialogTextInfo->setWindowTitle(QCoreApplication::translate("DialogTextInfo", "Info", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("DialogTextInfo", "Save", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogTextInfo", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTextInfo: public Ui_DialogTextInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEXTINFO_H
