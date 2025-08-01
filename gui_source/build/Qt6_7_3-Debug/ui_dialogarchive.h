/********************************************************************************
** Form generated from reading UI file 'dialogarchive.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGARCHIVE_H
#define UI_DIALOGARCHIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "archive_widget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogArchive
{
public:
    QVBoxLayout *verticalLayout;
    Archive_widget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOpen;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogArchive)
    {
        if (DialogArchive->objectName().isEmpty())
            DialogArchive->setObjectName("DialogArchive");
        DialogArchive->resize(592, 283);
        verticalLayout = new QVBoxLayout(DialogArchive);
        verticalLayout->setObjectName("verticalLayout");
        widget = new Archive_widget(DialogArchive);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOpen = new QPushButton(DialogArchive);
        pushButtonOpen->setObjectName("pushButtonOpen");

        horizontalLayout->addWidget(pushButtonOpen);

        pushButtonClose = new QPushButton(DialogArchive);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogArchive);

        QMetaObject::connectSlotsByName(DialogArchive);
    } // setupUi

    void retranslateUi(QDialog *DialogArchive)
    {
        DialogArchive->setWindowTitle(QCoreApplication::translate("DialogArchive", "Archive", nullptr));
        pushButtonOpen->setText(QCoreApplication::translate("DialogArchive", "Open", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogArchive", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogArchive: public Ui_DialogArchive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGARCHIVE_H
