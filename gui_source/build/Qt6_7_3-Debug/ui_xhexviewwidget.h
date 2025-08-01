/********************************************************************************
** Form generated from reading UI file 'xhexviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XHEXVIEWWIDGET_H
#define UI_XHEXVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xhexview.h"

QT_BEGIN_NAMESPACE

class Ui_XHexViewWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxType;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *toolButtonDataInspector;
    QToolButton *toolButtonStrings;
    QCheckBox *checkBoxReadonly;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxLocationBase;
    QSpacerItem *horizontalSpacer;
    XHexView *scrollAreaHex;
    QLineEdit *lineEditStatus;

    void setupUi(QWidget *XHexViewWidget)
    {
        if (XHexViewWidget->objectName().isEmpty())
            XHexViewWidget->setObjectName("XHexViewWidget");
        XHexViewWidget->resize(846, 473);
        XHexViewWidget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        verticalLayout = new QVBoxLayout(XHexViewWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxType = new QComboBox(XHexViewWidget);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        toolButtonDataInspector = new QToolButton(XHexViewWidget);
        toolButtonDataInspector->setObjectName("toolButtonDataInspector");
        toolButtonDataInspector->setCheckable(false);
        toolButtonDataInspector->setChecked(false);

        horizontalLayout->addWidget(toolButtonDataInspector);

        toolButtonStrings = new QToolButton(XHexViewWidget);
        toolButtonStrings->setObjectName("toolButtonStrings");

        horizontalLayout->addWidget(toolButtonStrings);

        checkBoxReadonly = new QCheckBox(XHexViewWidget);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout->addWidget(checkBoxReadonly);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboBoxLocationBase = new QComboBox(XHexViewWidget);
        comboBoxLocationBase->setObjectName("comboBoxLocationBase");

        horizontalLayout_2->addWidget(comboBoxLocationBase);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        scrollAreaHex = new XHexView(XHexViewWidget);
        scrollAreaHex->setObjectName("scrollAreaHex");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaHex->sizePolicy().hasHeightForWidth());
        scrollAreaHex->setSizePolicy(sizePolicy);
        scrollAreaHex->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        scrollAreaHex->setProperty("widgetResizable", QVariant(true));

        verticalLayout->addWidget(scrollAreaHex);

        lineEditStatus = new QLineEdit(XHexViewWidget);
        lineEditStatus->setObjectName("lineEditStatus");
        lineEditStatus->setFrame(false);
        lineEditStatus->setReadOnly(true);

        verticalLayout->addWidget(lineEditStatus);


        retranslateUi(XHexViewWidget);

        QMetaObject::connectSlotsByName(XHexViewWidget);
    } // setupUi

    void retranslateUi(QWidget *XHexViewWidget)
    {
        XHexViewWidget->setWindowTitle(QCoreApplication::translate("XHexViewWidget", "Form", nullptr));
        toolButtonDataInspector->setText(QCoreApplication::translate("XHexViewWidget", "Inspector", nullptr));
        toolButtonStrings->setText(QCoreApplication::translate("XHexViewWidget", "Strings", nullptr));
        checkBoxReadonly->setText(QCoreApplication::translate("XHexViewWidget", "Readonly", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XHexViewWidget: public Ui_XHexViewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XHEXVIEWWIDGET_H
