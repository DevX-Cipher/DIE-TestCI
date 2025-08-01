/********************************************************************************
** Form generated from reading UI file 'dialogxfileinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGXFILEINFO_H
#define UI_DIALOGXFILEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xfileinfowidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogXFileInfo
{
public:
    QVBoxLayout *verticalLayout;
    XFileInfoWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogXFileInfo)
    {
        if (DialogXFileInfo->objectName().isEmpty())
            DialogXFileInfo->setObjectName("DialogXFileInfo");
        DialogXFileInfo->setWindowModality(Qt::ApplicationModal);
        DialogXFileInfo->resize(816, 488);
        DialogXFileInfo->setModal(true);
        verticalLayout = new QVBoxLayout(DialogXFileInfo);
        verticalLayout->setObjectName("verticalLayout");
        widget = new XFileInfoWidget(DialogXFileInfo);
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

        pushButtonClose = new QPushButton(DialogXFileInfo);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogXFileInfo);

        QMetaObject::connectSlotsByName(DialogXFileInfo);
    } // setupUi

    void retranslateUi(QDialog *DialogXFileInfo)
    {
        DialogXFileInfo->setWindowTitle(QCoreApplication::translate("DialogXFileInfo", "Info", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogXFileInfo", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogXFileInfo: public Ui_DialogXFileInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGXFILEINFO_H
