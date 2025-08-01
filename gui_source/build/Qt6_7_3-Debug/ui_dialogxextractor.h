/********************************************************************************
** Form generated from reading UI file 'dialogxextractor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGXEXTRACTOR_H
#define UI_DIALOGXEXTRACTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xextractorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogXExtractor
{
public:
    QVBoxLayout *verticalLayout;
    XExtractorWidget *widgetExtractor;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogXExtractor)
    {
        if (DialogXExtractor->objectName().isEmpty())
            DialogXExtractor->setObjectName("DialogXExtractor");
        DialogXExtractor->resize(784, 346);
        verticalLayout = new QVBoxLayout(DialogXExtractor);
        verticalLayout->setObjectName("verticalLayout");
        widgetExtractor = new XExtractorWidget(DialogXExtractor);
        widgetExtractor->setObjectName("widgetExtractor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetExtractor->sizePolicy().hasHeightForWidth());
        widgetExtractor->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetExtractor);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogXExtractor);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogXExtractor);

        QMetaObject::connectSlotsByName(DialogXExtractor);
    } // setupUi

    void retranslateUi(QDialog *DialogXExtractor)
    {
        DialogXExtractor->setWindowTitle(QCoreApplication::translate("DialogXExtractor", "Extractor", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogXExtractor", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogXExtractor: public Ui_DialogXExtractor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGXEXTRACTOR_H
