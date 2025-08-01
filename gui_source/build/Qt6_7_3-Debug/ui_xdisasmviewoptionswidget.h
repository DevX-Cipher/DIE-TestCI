/********************************************************************************
** Form generated from reading UI file 'xdisasmviewoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XDISASMVIEWOPTIONSWIDGET_H
#define UI_XDISASMVIEWOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XDisasmViewOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContentsDisasm;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxDisasmSyntax;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxDisasmSyntax;
    QCheckBox *checkBoxDisasmUppercase;
    QCheckBox *checkBoxDisasmLocationColon;
    QGroupBox *groupBoxDisasmHighlight;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonDisasmColors;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *XDisasmViewOptionsWidget)
    {
        if (XDisasmViewOptionsWidget->objectName().isEmpty())
            XDisasmViewOptionsWidget->setObjectName("XDisasmViewOptionsWidget");
        XDisasmViewOptionsWidget->resize(400, 300);
        XDisasmViewOptionsWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(XDisasmViewOptionsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(XDisasmViewOptionsWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContentsDisasm = new QWidget();
        scrollAreaWidgetContentsDisasm->setObjectName("scrollAreaWidgetContentsDisasm");
        scrollAreaWidgetContentsDisasm->setGeometry(QRect(0, 0, 400, 300));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContentsDisasm);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, -1, 0, 0);
        groupBoxDisasmSyntax = new QGroupBox(scrollAreaWidgetContentsDisasm);
        groupBoxDisasmSyntax->setObjectName("groupBoxDisasmSyntax");
        horizontalLayout_2 = new QHBoxLayout(groupBoxDisasmSyntax);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        comboBoxDisasmSyntax = new QComboBox(groupBoxDisasmSyntax);
        comboBoxDisasmSyntax->setObjectName("comboBoxDisasmSyntax");

        horizontalLayout_2->addWidget(comboBoxDisasmSyntax);


        verticalLayout_2->addWidget(groupBoxDisasmSyntax);

        checkBoxDisasmUppercase = new QCheckBox(scrollAreaWidgetContentsDisasm);
        checkBoxDisasmUppercase->setObjectName("checkBoxDisasmUppercase");

        verticalLayout_2->addWidget(checkBoxDisasmUppercase);

        checkBoxDisasmLocationColon = new QCheckBox(scrollAreaWidgetContentsDisasm);
        checkBoxDisasmLocationColon->setObjectName("checkBoxDisasmLocationColon");

        verticalLayout_2->addWidget(checkBoxDisasmLocationColon);

        groupBoxDisasmHighlight = new QGroupBox(scrollAreaWidgetContentsDisasm);
        groupBoxDisasmHighlight->setObjectName("groupBoxDisasmHighlight");
        groupBoxDisasmHighlight->setCheckable(true);
        groupBoxDisasmHighlight->setChecked(false);
        horizontalLayout_3 = new QHBoxLayout(groupBoxDisasmHighlight);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        pushButtonDisasmColors = new QPushButton(groupBoxDisasmHighlight);
        pushButtonDisasmColors->setObjectName("pushButtonDisasmColors");

        horizontalLayout_3->addWidget(pushButtonDisasmColors);

        horizontalSpacer_2 = new QSpacerItem(294, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(groupBoxDisasmHighlight);

        verticalSpacer = new QSpacerItem(20, 231, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContentsDisasm);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(XDisasmViewOptionsWidget);

        QMetaObject::connectSlotsByName(XDisasmViewOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *XDisasmViewOptionsWidget)
    {
        groupBoxDisasmSyntax->setTitle(QCoreApplication::translate("XDisasmViewOptionsWidget", "Syntax", nullptr));
        checkBoxDisasmUppercase->setText(QCoreApplication::translate("XDisasmViewOptionsWidget", "Uppercase", nullptr));
        checkBoxDisasmLocationColon->setText(QCoreApplication::translate("XDisasmViewOptionsWidget", "Show colons in addresses", nullptr));
        groupBoxDisasmHighlight->setTitle(QCoreApplication::translate("XDisasmViewOptionsWidget", "Highlight", nullptr));
        pushButtonDisasmColors->setText(QCoreApplication::translate("XDisasmViewOptionsWidget", "Colors", nullptr));
        (void)XDisasmViewOptionsWidget;
    } // retranslateUi

};

namespace Ui {
    class XDisasmViewOptionsWidget: public Ui_XDisasmViewOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XDISASMVIEWOPTIONSWIDGET_H
