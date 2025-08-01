/********************************************************************************
** Form generated from reading UI file 'dialogsearchstrings.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSEARCHSTRINGS_H
#define UI_DIALOGSEARCHSTRINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "searchstringswidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogSearchStrings
{
public:
    QVBoxLayout *verticalLayout;
    SearchStringsWidget *widgetSearchStrings;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *dialogSearchStrings)
    {
        if (dialogSearchStrings->objectName().isEmpty())
            dialogSearchStrings->setObjectName("dialogSearchStrings");
        dialogSearchStrings->setWindowModality(Qt::NonModal);
        dialogSearchStrings->resize(763, 599);
        dialogSearchStrings->setModal(false);
        verticalLayout = new QVBoxLayout(dialogSearchStrings);
        verticalLayout->setObjectName("verticalLayout");
        widgetSearchStrings = new SearchStringsWidget(dialogSearchStrings);
        widgetSearchStrings->setObjectName("widgetSearchStrings");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetSearchStrings->sizePolicy().hasHeightForWidth());
        widgetSearchStrings->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetSearchStrings);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(dialogSearchStrings);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(dialogSearchStrings);

        QMetaObject::connectSlotsByName(dialogSearchStrings);
    } // setupUi

    void retranslateUi(QDialog *dialogSearchStrings)
    {
        dialogSearchStrings->setWindowTitle(QCoreApplication::translate("DialogSearchStrings", "Strings", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogSearchStrings", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSearchStrings: public Ui_DialogSearchStrings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSEARCHSTRINGS_H
