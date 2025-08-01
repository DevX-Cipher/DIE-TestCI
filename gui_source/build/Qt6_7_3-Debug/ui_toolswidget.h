/********************************************************************************
** Form generated from reading UI file 'toolswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLSWIDGET_H
#define UI_TOOLSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "searchstringswidget.h"
#include "xhexview.h"

QT_BEGIN_NAMESPACE

class Ui_ToolsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidgetMain;
    QWidget *tabHex;
    QVBoxLayout *verticalLayout_2;
    XHexView *widgetHex;
    QWidget *tabStrings;
    QVBoxLayout *verticalLayout_3;
    SearchStringsWidget *widgetStrings;

    void setupUi(QWidget *ToolsWidget)
    {
        if (ToolsWidget->objectName().isEmpty())
            ToolsWidget->setObjectName("ToolsWidget");
        ToolsWidget->resize(737, 199);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ToolsWidget->sizePolicy().hasHeightForWidth());
        ToolsWidget->setSizePolicy(sizePolicy);
        ToolsWidget->setWindowTitle(QString::fromUtf8("Form"));
        verticalLayout = new QVBoxLayout(ToolsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetMain = new QTabWidget(ToolsWidget);
        tabWidgetMain->setObjectName("tabWidgetMain");
        tabHex = new QWidget();
        tabHex->setObjectName("tabHex");
        verticalLayout_2 = new QVBoxLayout(tabHex);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetHex = new XHexView(tabHex);
        widgetHex->setObjectName("widgetHex");

        verticalLayout_2->addWidget(widgetHex);

        tabWidgetMain->addTab(tabHex, QString());
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabHex), QString::fromUtf8("Hex"));
        tabStrings = new QWidget();
        tabStrings->setObjectName("tabStrings");
        verticalLayout_3 = new QVBoxLayout(tabStrings);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widgetStrings = new SearchStringsWidget(tabStrings);
        widgetStrings->setObjectName("widgetStrings");

        verticalLayout_3->addWidget(widgetStrings);

        tabWidgetMain->addTab(tabStrings, QString());

        verticalLayout->addWidget(tabWidgetMain);


        retranslateUi(ToolsWidget);

        tabWidgetMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ToolsWidget);
    } // setupUi

    void retranslateUi(QWidget *ToolsWidget)
    {
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabStrings), QCoreApplication::translate("ToolsWidget", "Strings", nullptr));
        (void)ToolsWidget;
    } // retranslateUi

};

namespace Ui {
    class ToolsWidget: public Ui_ToolsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLSWIDGET_H
