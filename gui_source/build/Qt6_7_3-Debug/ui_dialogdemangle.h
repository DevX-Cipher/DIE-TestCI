/********************************************************************************
** Form generated from reading UI file 'dialogdemangle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDEMANGLE_H
#define UI_DIALOGDEMANGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xdemanglewidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogDemangle
{
public:
    QVBoxLayout *verticalLayout;
    XDemangleWidget *widgetDemangle;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogDemangle)
    {
        if (DialogDemangle->objectName().isEmpty())
            DialogDemangle->setObjectName("DialogDemangle");
        DialogDemangle->setWindowModality(Qt::ApplicationModal);
        DialogDemangle->resize(362, 275);
        DialogDemangle->setModal(true);
        verticalLayout = new QVBoxLayout(DialogDemangle);
        verticalLayout->setObjectName("verticalLayout");
        widgetDemangle = new XDemangleWidget(DialogDemangle);
        widgetDemangle->setObjectName("widgetDemangle");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetDemangle->sizePolicy().hasHeightForWidth());
        widgetDemangle->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetDemangle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(DialogDemangle);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogDemangle);

        QMetaObject::connectSlotsByName(DialogDemangle);
    } // setupUi

    void retranslateUi(QDialog *DialogDemangle)
    {
        DialogDemangle->setWindowTitle(QCoreApplication::translate("DialogDemangle", "Demangle", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogDemangle", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDemangle: public Ui_DialogDemangle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDEMANGLE_H
