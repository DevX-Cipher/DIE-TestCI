/********************************************************************************
** Form generated from reading UI file 'dialogvisualization.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVISUALIZATION_H
#define UI_DIALOGVISUALIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "xvisualizationwidget.h"

QT_BEGIN_NAMESPACE

class Ui_DialogVisualization
{
public:
    QVBoxLayout *verticalLayout;
    XVisualizationWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogVisualization)
    {
        if (DialogVisualization->objectName().isEmpty())
            DialogVisualization->setObjectName("DialogVisualization");
        DialogVisualization->resize(854, 496);
        verticalLayout = new QVBoxLayout(DialogVisualization);
        verticalLayout->setObjectName("verticalLayout");
        widget = new XVisualizationWidget(DialogVisualization);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogVisualization);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogVisualization);

        QMetaObject::connectSlotsByName(DialogVisualization);
    } // setupUi

    void retranslateUi(QDialog *DialogVisualization)
    {
        DialogVisualization->setWindowTitle(QCoreApplication::translate("DialogVisualization", "Visualization", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogVisualization", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogVisualization: public Ui_DialogVisualization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVISUALIZATION_H
