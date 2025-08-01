/********************************************************************************
** Form generated from reading UI file 'xmultidisasmwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XMULTIDISASMWIDGET_H
#define UI_XMULTIDISASMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xdisasmview.h"

QT_BEGIN_NAMESPACE

class Ui_XMultiDisasmWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBoxControls;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxType;
    QComboBox *comboBoxMode;
    QToolButton *toolButtonVisitedPrev;
    QToolButton *toolButtonVisitedNext;
    QComboBox *comboBoxView;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBoxReadonly;
    QFrame *frameAnalize;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxMethod;
    QSpacerItem *horizontalSpacer;
    XDisasmView *scrollAreaDisasm;

    void setupUi(QWidget *XMultiDisasmWidget)
    {
        if (XMultiDisasmWidget->objectName().isEmpty())
            XMultiDisasmWidget->setObjectName("XMultiDisasmWidget");
        XMultiDisasmWidget->resize(859, 447);
        verticalLayout = new QVBoxLayout(XMultiDisasmWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBoxControls = new QGroupBox(XMultiDisasmWidget);
        groupBoxControls->setObjectName("groupBoxControls");
        groupBoxControls->setTitle(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(groupBoxControls);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        comboBoxType = new QComboBox(groupBoxControls);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(comboBoxType);

        comboBoxMode = new QComboBox(groupBoxControls);
        comboBoxMode->setObjectName("comboBoxMode");
        comboBoxMode->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(comboBoxMode);

        toolButtonVisitedPrev = new QToolButton(groupBoxControls);
        toolButtonVisitedPrev->setObjectName("toolButtonVisitedPrev");
        toolButtonVisitedPrev->setMaximumSize(QSize(24, 16777215));
        toolButtonVisitedPrev->setText(QString::fromUtf8("<"));

        horizontalLayout_2->addWidget(toolButtonVisitedPrev);

        toolButtonVisitedNext = new QToolButton(groupBoxControls);
        toolButtonVisitedNext->setObjectName("toolButtonVisitedNext");
        toolButtonVisitedNext->setMaximumSize(QSize(24, 16777215));
        toolButtonVisitedNext->setText(QString::fromUtf8(">"));

        horizontalLayout_2->addWidget(toolButtonVisitedNext);

        comboBoxView = new QComboBox(groupBoxControls);
        comboBoxView->setObjectName("comboBoxView");
        comboBoxView->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(comboBoxView);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        checkBoxReadonly = new QCheckBox(groupBoxControls);
        checkBoxReadonly->setObjectName("checkBoxReadonly");

        horizontalLayout_2->addWidget(checkBoxReadonly);


        horizontalLayout->addWidget(groupBoxControls);


        verticalLayout->addLayout(horizontalLayout);

        frameAnalize = new QFrame(XMultiDisasmWidget);
        frameAnalize->setObjectName("frameAnalize");
        horizontalLayout_3 = new QHBoxLayout(frameAnalize);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBoxMethod = new QComboBox(frameAnalize);
        comboBoxMethod->setObjectName("comboBoxMethod");
        comboBoxMethod->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(comboBoxMethod);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addWidget(frameAnalize);

        scrollAreaDisasm = new XDisasmView(XMultiDisasmWidget);
        scrollAreaDisasm->setObjectName("scrollAreaDisasm");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaDisasm->sizePolicy().hasHeightForWidth());
        scrollAreaDisasm->setSizePolicy(sizePolicy);
        scrollAreaDisasm->setProperty("widgetResizable", QVariant(true));

        verticalLayout->addWidget(scrollAreaDisasm);


        retranslateUi(XMultiDisasmWidget);

        QMetaObject::connectSlotsByName(XMultiDisasmWidget);
    } // setupUi

    void retranslateUi(QWidget *XMultiDisasmWidget)
    {
        XMultiDisasmWidget->setWindowTitle(QCoreApplication::translate("XMultiDisasmWidget", "Form", nullptr));
        checkBoxReadonly->setText(QCoreApplication::translate("XMultiDisasmWidget", "Readonly", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XMultiDisasmWidget: public Ui_XMultiDisasmWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XMULTIDISASMWIDGET_H
