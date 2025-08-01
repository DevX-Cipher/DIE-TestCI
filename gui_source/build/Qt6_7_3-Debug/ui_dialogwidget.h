/********************************************************************************
** Form generated from reading UI file 'dialogwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWIDGET_H
#define UI_DIALOGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogWidget
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidgetMain;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogWidget)
    {
        if (DialogWidget->objectName().isEmpty())
            DialogWidget->setObjectName("DialogWidget");
        DialogWidget->setWindowModality(Qt::ApplicationModal);
        DialogWidget->resize(1003, 455);
        DialogWidget->setModal(true);
        verticalLayout = new QVBoxLayout(DialogWidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidgetMain = new QStackedWidget(DialogWidget);
        stackedWidgetMain->setObjectName("stackedWidgetMain");

        verticalLayout->addWidget(stackedWidgetMain);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogWidget);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogWidget);

        QMetaObject::connectSlotsByName(DialogWidget);
    } // setupUi

    void retranslateUi(QDialog *DialogWidget)
    {
        DialogWidget->setWindowTitle(QCoreApplication::translate("DialogWidget", "Info", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("DialogWidget", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogWidget: public Ui_DialogWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWIDGET_H
