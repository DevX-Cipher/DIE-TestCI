/********************************************************************************
** Form generated from reading UI file 'xinfodboptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XINFODBOPTIONSWIDGET_H
#define UI_XINFODBOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XInfoDBOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollAreaSearchSignatures;
    QWidget *scrollAreaWidgetSearchSignatures;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxInfoPath;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEditInfoPath;
    QToolButton *toolButtonInfoPath;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *XInfoDBOptionsWidget)
    {
        if (XInfoDBOptionsWidget->objectName().isEmpty())
            XInfoDBOptionsWidget->setObjectName("XInfoDBOptionsWidget");
        XInfoDBOptionsWidget->resize(364, 191);
        verticalLayout = new QVBoxLayout(XInfoDBOptionsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollAreaSearchSignatures = new QScrollArea(XInfoDBOptionsWidget);
        scrollAreaSearchSignatures->setObjectName("scrollAreaSearchSignatures");
        scrollAreaSearchSignatures->setFrameShape(QFrame::NoFrame);
        scrollAreaSearchSignatures->setFrameShadow(QFrame::Plain);
        scrollAreaSearchSignatures->setWidgetResizable(true);
        scrollAreaWidgetSearchSignatures = new QWidget();
        scrollAreaWidgetSearchSignatures->setObjectName("scrollAreaWidgetSearchSignatures");
        scrollAreaWidgetSearchSignatures->setGeometry(QRect(0, 0, 364, 191));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetSearchSignatures);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBoxInfoPath = new QGroupBox(scrollAreaWidgetSearchSignatures);
        groupBoxInfoPath->setObjectName("groupBoxInfoPath");
        horizontalLayout_6 = new QHBoxLayout(groupBoxInfoPath);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEditInfoPath = new QLineEdit(groupBoxInfoPath);
        lineEditInfoPath->setObjectName("lineEditInfoPath");

        horizontalLayout_6->addWidget(lineEditInfoPath);

        toolButtonInfoPath = new QToolButton(groupBoxInfoPath);
        toolButtonInfoPath->setObjectName("toolButtonInfoPath");
        toolButtonInfoPath->setText(QString::fromUtf8("..."));

        horizontalLayout_6->addWidget(toolButtonInfoPath);


        verticalLayout_2->addWidget(groupBoxInfoPath);

        verticalSpacer_2 = new QSpacerItem(20, 149, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        scrollAreaSearchSignatures->setWidget(scrollAreaWidgetSearchSignatures);

        verticalLayout->addWidget(scrollAreaSearchSignatures);


        retranslateUi(XInfoDBOptionsWidget);

        QMetaObject::connectSlotsByName(XInfoDBOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *XInfoDBOptionsWidget)
    {
        XInfoDBOptionsWidget->setWindowTitle(QCoreApplication::translate("XInfoDBOptionsWidget", "Info", nullptr));
        groupBoxInfoPath->setTitle(QCoreApplication::translate("XInfoDBOptionsWidget", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XInfoDBOptionsWidget: public Ui_XInfoDBOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XINFODBOPTIONSWIDGET_H
