/********************************************************************************
** Form generated from reading UI file 'dialoghexview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHEXVIEW_H
#define UI_DIALOGHEXVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xhexviewwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogHexView
{
public:
    QVBoxLayout *verticalLayout;
    XHexViewWidget *widgetHex;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogHexView)
    {
        if (DialogHexView->objectName().isEmpty())
            DialogHexView->setObjectName("DialogHexView");
        DialogHexView->setWindowModality(Qt::ApplicationModal);
        DialogHexView->resize(968, 446);
        DialogHexView->setWindowTitle(QString::fromUtf8("Hex"));
        DialogHexView->setModal(true);
        verticalLayout = new QVBoxLayout(DialogHexView);
        verticalLayout->setObjectName("verticalLayout");
        widgetHex = new XHexViewWidget(DialogHexView);
        widgetHex->setObjectName("widgetHex");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetHex->sizePolicy().hasHeightForWidth());
        widgetHex->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetHex);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogHexView);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogHexView);

        QMetaObject::connectSlotsByName(DialogHexView);
    } // setupUi

    void retranslateUi(QDialog *DialogHexView)
    {
        pushButtonClose->setText(QCoreApplication::translate("DialogHexView", "Close", nullptr));
        (void)DialogHexView;
    } // retranslateUi

};

namespace Ui {
    class DialogHexView: public Ui_DialogHexView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGHEXVIEW_H
