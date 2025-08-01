/********************************************************************************
** Form generated from reading UI file 'dialoghexedit.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHEXEDIT_H
#define UI_DIALOGHEXEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xhexedit.h"

QT_BEGIN_NAMESPACE

class Ui_DialogHexEdit
{
public:
    QVBoxLayout *verticalLayout;
    XHexEdit *widgetHexEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogHexEdit)
    {
        if (DialogHexEdit->objectName().isEmpty())
            DialogHexEdit->setObjectName("DialogHexEdit");
        DialogHexEdit->setWindowModality(Qt::ApplicationModal);
        DialogHexEdit->resize(569, 370);
        DialogHexEdit->setModal(true);
        verticalLayout = new QVBoxLayout(DialogHexEdit);
        verticalLayout->setObjectName("verticalLayout");
        widgetHexEdit = new XHexEdit(DialogHexEdit);
        widgetHexEdit->setObjectName("widgetHexEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetHexEdit->sizePolicy().hasHeightForWidth());
        widgetHexEdit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetHexEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogHexEdit);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogHexEdit);

        QMetaObject::connectSlotsByName(DialogHexEdit);
    } // setupUi

    void retranslateUi(QDialog *DialogHexEdit)
    {
        DialogHexEdit->setWindowTitle(QCoreApplication::translate("DialogHexEdit", "Edit", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogHexEdit", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogHexEdit: public Ui_DialogHexEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHEXEDIT_H
