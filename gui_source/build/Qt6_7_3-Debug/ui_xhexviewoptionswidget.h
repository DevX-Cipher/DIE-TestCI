/********************************************************************************
** Form generated from reading UI file 'xhexviewoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XHEXVIEWOPTIONSWIDGET_H
#define UI_XHEXVIEWOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XHexViewOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContentsHex;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxHexLocationColon;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *XHexViewOptionsWidget)
    {
        if (XHexViewOptionsWidget->objectName().isEmpty())
            XHexViewOptionsWidget->setObjectName("XHexViewOptionsWidget");
        XHexViewOptionsWidget->resize(400, 300);
        XHexViewOptionsWidget->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(XHexViewOptionsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(XHexViewOptionsWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContentsHex = new QWidget();
        scrollAreaWidgetContentsHex->setObjectName("scrollAreaWidgetContentsHex");
        scrollAreaWidgetContentsHex->setGeometry(QRect(0, 0, 400, 300));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContentsHex);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBoxHexLocationColon = new QCheckBox(scrollAreaWidgetContentsHex);
        checkBoxHexLocationColon->setObjectName("checkBoxHexLocationColon");

        verticalLayout_2->addWidget(checkBoxHexLocationColon);

        verticalSpacer = new QSpacerItem(20, 231, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContentsHex);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(XHexViewOptionsWidget);

        QMetaObject::connectSlotsByName(XHexViewOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *XHexViewOptionsWidget)
    {
        checkBoxHexLocationColon->setText(QCoreApplication::translate("XHexViewOptionsWidget", "Show colons in addresses", nullptr));
        (void)XHexViewOptionsWidget;
    } // retranslateUi

};

namespace Ui {
    class XHexViewOptionsWidget: public Ui_XHexViewOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XHEXVIEWOPTIONSWIDGET_H
