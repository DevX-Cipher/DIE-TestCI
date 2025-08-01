/********************************************************************************
** Form generated from reading UI file 'xdataconvertorwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XDATACONVERTORWIDGET_H
#define UI_XDATACONVERTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xhexview.h"
#include "xlineedithex.h"

QT_BEGIN_NAMESPACE

class Ui_XDataConvertorWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBoxMethod;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidgetMethods;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidgetOptions;
    QWidget *pageXOR;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxXORmethod;
    XLineEditHEX *lineEditXORValue;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonXOR;
    QWidget *pageADDSUB;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *comboBoxADDSUBmethod;
    XLineEditHEX *lineEditADDSUBValue;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonADD;
    QPushButton *pushButtonSUB;
    QWidget *pageBASE64;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonBase64Encode;
    QPushButton *pushButtonBase64Decode;
    QWidget *pageOriginal;
    QGroupBox *groupBoxHexInput;
    QHBoxLayout *horizontalLayout_2;
    XHexView *widgetHexInput;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxSizeInput;
    QHBoxLayout *horizontalLayout_13;
    XLineEditHEX *lineEditSizeInput;
    QGroupBox *groupBoxEntropyInput;
    QHBoxLayout *horizontalLayout_14;
    XLineEditHEX *lineEditEntropyInput;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonDumpInput;
    QGroupBox *groupBoxHexOutput;
    QHBoxLayout *horizontalLayout_12;
    XHexView *widgetHexOutput;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBoxSizeOutput;
    QHBoxLayout *horizontalLayout_8;
    XLineEditHEX *lineEditSizeOutput;
    QGroupBox *groupBoxEntropyOutput;
    QHBoxLayout *horizontalLayout_11;
    XLineEditHEX *lineEditEntropyOutput;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonDumpOutput;

    void setupUi(QWidget *XDataConvertorWidget)
    {
        if (XDataConvertorWidget->objectName().isEmpty())
            XDataConvertorWidget->setObjectName("XDataConvertorWidget");
        XDataConvertorWidget->resize(883, 547);
        verticalLayout_2 = new QVBoxLayout(XDataConvertorWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBoxMethod = new QGroupBox(XDataConvertorWidget);
        groupBoxMethod->setObjectName("groupBoxMethod");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxMethod->sizePolicy().hasHeightForWidth());
        groupBoxMethod->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBoxMethod);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        listWidgetMethods = new QListWidget(groupBoxMethod);
        listWidgetMethods->setObjectName("listWidgetMethods");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidgetMethods->sizePolicy().hasHeightForWidth());
        listWidgetMethods->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(listWidgetMethods);


        horizontalLayout->addWidget(groupBoxMethod);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        stackedWidgetOptions = new QStackedWidget(XDataConvertorWidget);
        stackedWidgetOptions->setObjectName("stackedWidgetOptions");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidgetOptions->sizePolicy().hasHeightForWidth());
        stackedWidgetOptions->setSizePolicy(sizePolicy2);
        stackedWidgetOptions->setMaximumSize(QSize(16777215, 60));
        pageXOR = new QWidget();
        pageXOR->setObjectName("pageXOR");
        sizePolicy1.setHeightForWidth(pageXOR->sizePolicy().hasHeightForWidth());
        pageXOR->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(pageXOR);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBoxXORmethod = new QComboBox(pageXOR);
        comboBoxXORmethod->setObjectName("comboBoxXORmethod");
        comboBoxXORmethod->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(comboBoxXORmethod);

        lineEditXORValue = new XLineEditHEX(pageXOR);
        lineEditXORValue->setObjectName("lineEditXORValue");
        lineEditXORValue->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(lineEditXORValue);

        horizontalSpacer_2 = new QSpacerItem(439, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButtonXOR = new QPushButton(pageXOR);
        pushButtonXOR->setObjectName("pushButtonXOR");
        pushButtonXOR->setText(QString::fromUtf8("XOR"));

        horizontalLayout_3->addWidget(pushButtonXOR);

        stackedWidgetOptions->addWidget(pageXOR);
        pageADDSUB = new QWidget();
        pageADDSUB->setObjectName("pageADDSUB");
        horizontalLayout_6 = new QHBoxLayout(pageADDSUB);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        comboBoxADDSUBmethod = new QComboBox(pageADDSUB);
        comboBoxADDSUBmethod->setObjectName("comboBoxADDSUBmethod");
        comboBoxADDSUBmethod->setMinimumSize(QSize(80, 0));

        horizontalLayout_6->addWidget(comboBoxADDSUBmethod);

        lineEditADDSUBValue = new XLineEditHEX(pageADDSUB);
        lineEditADDSUBValue->setObjectName("lineEditADDSUBValue");
        lineEditADDSUBValue->setMinimumSize(QSize(120, 0));

        horizontalLayout_6->addWidget(lineEditADDSUBValue);

        horizontalSpacer_3 = new QSpacerItem(71, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        pushButtonADD = new QPushButton(pageADDSUB);
        pushButtonADD->setObjectName("pushButtonADD");
        pushButtonADD->setText(QString::fromUtf8("ADD"));

        horizontalLayout_6->addWidget(pushButtonADD);

        pushButtonSUB = new QPushButton(pageADDSUB);
        pushButtonSUB->setObjectName("pushButtonSUB");
        pushButtonSUB->setText(QString::fromUtf8("SUB"));

        horizontalLayout_6->addWidget(pushButtonSUB);

        stackedWidgetOptions->addWidget(pageADDSUB);
        pageBASE64 = new QWidget();
        pageBASE64->setObjectName("pageBASE64");
        horizontalLayout_7 = new QHBoxLayout(pageBASE64);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(301, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButtonBase64Encode = new QPushButton(pageBASE64);
        pushButtonBase64Encode->setObjectName("pushButtonBase64Encode");

        horizontalLayout_7->addWidget(pushButtonBase64Encode);

        pushButtonBase64Decode = new QPushButton(pageBASE64);
        pushButtonBase64Decode->setObjectName("pushButtonBase64Decode");

        horizontalLayout_7->addWidget(pushButtonBase64Decode);

        stackedWidgetOptions->addWidget(pageBASE64);
        pageOriginal = new QWidget();
        pageOriginal->setObjectName("pageOriginal");
        stackedWidgetOptions->addWidget(pageOriginal);

        verticalLayout->addWidget(stackedWidgetOptions);

        groupBoxHexInput = new QGroupBox(XDataConvertorWidget);
        groupBoxHexInput->setObjectName("groupBoxHexInput");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBoxHexInput->sizePolicy().hasHeightForWidth());
        groupBoxHexInput->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(groupBoxHexInput);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        widgetHexInput = new XHexView(groupBoxHexInput);
        widgetHexInput->setObjectName("widgetHexInput");
        sizePolicy3.setHeightForWidth(widgetHexInput->sizePolicy().hasHeightForWidth());
        widgetHexInput->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(widgetHexInput);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBoxSizeInput = new QGroupBox(groupBoxHexInput);
        groupBoxSizeInput->setObjectName("groupBoxSizeInput");
        horizontalLayout_13 = new QHBoxLayout(groupBoxSizeInput);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(2, 2, 2, 2);
        lineEditSizeInput = new XLineEditHEX(groupBoxSizeInput);
        lineEditSizeInput->setObjectName("lineEditSizeInput");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEditSizeInput->sizePolicy().hasHeightForWidth());
        lineEditSizeInput->setSizePolicy(sizePolicy4);

        horizontalLayout_13->addWidget(lineEditSizeInput);


        verticalLayout_5->addWidget(groupBoxSizeInput);

        groupBoxEntropyInput = new QGroupBox(groupBoxHexInput);
        groupBoxEntropyInput->setObjectName("groupBoxEntropyInput");
        horizontalLayout_14 = new QHBoxLayout(groupBoxEntropyInput);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(2, 2, 2, 2);
        lineEditEntropyInput = new XLineEditHEX(groupBoxEntropyInput);
        lineEditEntropyInput->setObjectName("lineEditEntropyInput");
        sizePolicy4.setHeightForWidth(lineEditEntropyInput->sizePolicy().hasHeightForWidth());
        lineEditEntropyInput->setSizePolicy(sizePolicy4);

        horizontalLayout_14->addWidget(lineEditEntropyInput);


        verticalLayout_5->addWidget(groupBoxEntropyInput);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        pushButtonDumpInput = new QPushButton(groupBoxHexInput);
        pushButtonDumpInput->setObjectName("pushButtonDumpInput");

        verticalLayout_5->addWidget(pushButtonDumpInput);


        horizontalLayout_2->addLayout(verticalLayout_5);


        verticalLayout->addWidget(groupBoxHexInput);

        groupBoxHexOutput = new QGroupBox(XDataConvertorWidget);
        groupBoxHexOutput->setObjectName("groupBoxHexOutput");
        sizePolicy3.setHeightForWidth(groupBoxHexOutput->sizePolicy().hasHeightForWidth());
        groupBoxHexOutput->setSizePolicy(sizePolicy3);
        horizontalLayout_12 = new QHBoxLayout(groupBoxHexOutput);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(2, 2, 2, 2);
        widgetHexOutput = new XHexView(groupBoxHexOutput);
        widgetHexOutput->setObjectName("widgetHexOutput");
        sizePolicy3.setHeightForWidth(widgetHexOutput->sizePolicy().hasHeightForWidth());
        widgetHexOutput->setSizePolicy(sizePolicy3);

        horizontalLayout_12->addWidget(widgetHexOutput);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBoxSizeOutput = new QGroupBox(groupBoxHexOutput);
        groupBoxSizeOutput->setObjectName("groupBoxSizeOutput");
        horizontalLayout_8 = new QHBoxLayout(groupBoxSizeOutput);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(2, 2, 2, 2);
        lineEditSizeOutput = new XLineEditHEX(groupBoxSizeOutput);
        lineEditSizeOutput->setObjectName("lineEditSizeOutput");
        sizePolicy4.setHeightForWidth(lineEditSizeOutput->sizePolicy().hasHeightForWidth());
        lineEditSizeOutput->setSizePolicy(sizePolicy4);

        horizontalLayout_8->addWidget(lineEditSizeOutput);


        verticalLayout_4->addWidget(groupBoxSizeOutput);

        groupBoxEntropyOutput = new QGroupBox(groupBoxHexOutput);
        groupBoxEntropyOutput->setObjectName("groupBoxEntropyOutput");
        horizontalLayout_11 = new QHBoxLayout(groupBoxEntropyOutput);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(2, 2, 2, 2);
        lineEditEntropyOutput = new XLineEditHEX(groupBoxEntropyOutput);
        lineEditEntropyOutput->setObjectName("lineEditEntropyOutput");
        sizePolicy4.setHeightForWidth(lineEditEntropyOutput->sizePolicy().hasHeightForWidth());
        lineEditEntropyOutput->setSizePolicy(sizePolicy4);

        horizontalLayout_11->addWidget(lineEditEntropyOutput);


        verticalLayout_4->addWidget(groupBoxEntropyOutput);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        pushButtonDumpOutput = new QPushButton(groupBoxHexOutput);
        pushButtonDumpOutput->setObjectName("pushButtonDumpOutput");

        verticalLayout_4->addWidget(pushButtonDumpOutput);


        horizontalLayout_12->addLayout(verticalLayout_4);


        verticalLayout->addWidget(groupBoxHexOutput);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(XDataConvertorWidget);

        stackedWidgetOptions->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(XDataConvertorWidget);
    } // setupUi

    void retranslateUi(QWidget *XDataConvertorWidget)
    {
        XDataConvertorWidget->setWindowTitle(QCoreApplication::translate("XDataConvertorWidget", "Form", nullptr));
        groupBoxMethod->setTitle(QCoreApplication::translate("XDataConvertorWidget", "Method", nullptr));
        pushButtonBase64Encode->setText(QCoreApplication::translate("XDataConvertorWidget", "Encode", nullptr));
        pushButtonBase64Decode->setText(QCoreApplication::translate("XDataConvertorWidget", "Decode", nullptr));
        groupBoxHexInput->setTitle(QCoreApplication::translate("XDataConvertorWidget", "Input", nullptr));
        groupBoxSizeInput->setTitle(QCoreApplication::translate("XDataConvertorWidget", "Size", nullptr));
        groupBoxEntropyInput->setTitle(QCoreApplication::translate("XDataConvertorWidget", "Entropy", nullptr));
        pushButtonDumpInput->setText(QCoreApplication::translate("XDataConvertorWidget", "Dump", nullptr));
        groupBoxHexOutput->setTitle(QCoreApplication::translate("XDataConvertorWidget", "Output", nullptr));
        groupBoxSizeOutput->setTitle(QCoreApplication::translate("XDataConvertorWidget", "Size", nullptr));
        groupBoxEntropyOutput->setTitle(QCoreApplication::translate("XDataConvertorWidget", "Entropy", nullptr));
        pushButtonDumpOutput->setText(QCoreApplication::translate("XDataConvertorWidget", "Dump", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XDataConvertorWidget: public Ui_XDataConvertorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XDATACONVERTORWIDGET_H
