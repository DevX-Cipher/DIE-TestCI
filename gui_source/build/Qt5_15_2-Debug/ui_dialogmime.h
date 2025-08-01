/********************************************************************************
** Form generated from reading UI file 'dialogmime.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMIME_H
#define UI_DIALOGMIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xmimewidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogMIME
{
public:
    QVBoxLayout *verticalLayout;
    XMIMEWidget *widgetMIME;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogMIME)
    {
        if (DialogMIME->objectName().isEmpty())
            DialogMIME->setObjectName(QString::fromUtf8("DialogMIME"));
        DialogMIME->resize(510, 182);
        DialogMIME->setWindowTitle(QString::fromUtf8("MIME"));
        verticalLayout = new QVBoxLayout(DialogMIME);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widgetMIME = new XMIMEWidget(DialogMIME);
        widgetMIME->setObjectName(QString::fromUtf8("widgetMIME"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetMIME->sizePolicy().hasHeightForWidth());
        widgetMIME->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetMIME);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogMIME);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogMIME);

        QMetaObject::connectSlotsByName(DialogMIME);
    } // setupUi

    void retranslateUi(QDialog *DialogMIME)
    {
        pushButtonClose->setText(QCoreApplication::translate("DialogMIME", "Close", nullptr));
        (void)DialogMIME;
    } // retranslateUi

};

namespace Ui {
    class DialogMIME: public Ui_DialogMIME {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMIME_H
