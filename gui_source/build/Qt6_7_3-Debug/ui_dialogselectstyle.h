/********************************************************************************
** Form generated from reading UI file 'dialogselectstyle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSELECTSTYLE_H
#define UI_DIALOGSELECTSTYLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_DialogSelectStyle
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonStyle1;
    QToolButton *toolButtonStyle2;

    void setupUi(QDialog *DialogSelectStyle)
    {
        if (DialogSelectStyle->objectName().isEmpty())
            DialogSelectStyle->setObjectName("DialogSelectStyle");
        DialogSelectStyle->resize(590, 212);
        horizontalLayout = new QHBoxLayout(DialogSelectStyle);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButtonStyle1 = new QToolButton(DialogSelectStyle);
        toolButtonStyle1->setObjectName("toolButtonStyle1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonStyle1->sizePolicy().hasHeightForWidth());
        toolButtonStyle1->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(toolButtonStyle1);

        toolButtonStyle2 = new QToolButton(DialogSelectStyle);
        toolButtonStyle2->setObjectName("toolButtonStyle2");
        sizePolicy.setHeightForWidth(toolButtonStyle2->sizePolicy().hasHeightForWidth());
        toolButtonStyle2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(toolButtonStyle2);


        retranslateUi(DialogSelectStyle);

        QMetaObject::connectSlotsByName(DialogSelectStyle);
    } // setupUi

    void retranslateUi(QDialog *DialogSelectStyle)
    {
        DialogSelectStyle->setWindowTitle(QCoreApplication::translate("DialogSelectStyle", "Style", nullptr));
        toolButtonStyle1->setText(QString());
        toolButtonStyle2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogSelectStyle: public Ui_DialogSelectStyle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSELECTSTYLE_H
