/********************************************************************************
** Form generated from reading UI file 'dialogxvirustotal.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGXVIRUSTOTAL_H
#define UI_DIALOGXVIRUSTOTAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xvirustotalwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogXVirusTotal
{
public:
    QVBoxLayout *verticalLayout;
    XVirusTotalWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogXVirusTotal)
    {
        if (DialogXVirusTotal->objectName().isEmpty())
            DialogXVirusTotal->setObjectName("DialogXVirusTotal");
        DialogXVirusTotal->setWindowModality(Qt::ApplicationModal);
        DialogXVirusTotal->resize(785, 429);
        DialogXVirusTotal->setWindowTitle(QString::fromUtf8("VirusTotal"));
        DialogXVirusTotal->setModal(true);
        verticalLayout = new QVBoxLayout(DialogXVirusTotal);
        verticalLayout->setObjectName("verticalLayout");
        widget = new XVirusTotalWidget(DialogXVirusTotal);
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

        pushButtonClose = new QPushButton(DialogXVirusTotal);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogXVirusTotal);

        QMetaObject::connectSlotsByName(DialogXVirusTotal);
    } // setupUi

    void retranslateUi(QDialog *DialogXVirusTotal)
    {
        pushButtonClose->setText(QCoreApplication::translate("DialogXVirusTotal", "Close", nullptr));
        (void)DialogXVirusTotal;
    } // retranslateUi

};

namespace Ui {
    class DialogXVirusTotal: public Ui_DialogXVirusTotal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGXVIRUSTOTAL_H
