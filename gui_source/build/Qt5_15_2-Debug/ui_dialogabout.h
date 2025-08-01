/********************************************************************************
** Form generated from reading UI file 'dialogabout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGABOUT_H
#define UI_DIALOGABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xaboutwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogAbout
{
public:
    QVBoxLayout *verticalLayout;
    XAboutWidget *widgetAbout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogAbout)
    {
        if (DialogAbout->objectName().isEmpty())
            DialogAbout->setObjectName(QString::fromUtf8("DialogAbout"));
        DialogAbout->setWindowModality(Qt::WindowModal);
        DialogAbout->resize(584, 312);
        DialogAbout->setModal(true);
        verticalLayout = new QVBoxLayout(DialogAbout);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widgetAbout = new XAboutWidget(DialogAbout);
        widgetAbout->setObjectName(QString::fromUtf8("widgetAbout"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetAbout->sizePolicy().hasHeightForWidth());
        widgetAbout->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetAbout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(DialogAbout);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogAbout);

        QMetaObject::connectSlotsByName(DialogAbout);
    } // setupUi

    void retranslateUi(QDialog *DialogAbout)
    {
        DialogAbout->setWindowTitle(QCoreApplication::translate("DialogAbout", "About", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogAbout", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAbout: public Ui_DialogAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGABOUT_H
