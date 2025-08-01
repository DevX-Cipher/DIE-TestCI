/********************************************************************************
** Form generated from reading UI file 'dialogxstruct.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGXSTRUCT_H
#define UI_DIALOGXSTRUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogXStruct
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxStruct;
    QComboBox *comboBoxType;
    QSpacerItem *horizontalSpacer;
    QWidget *widgetStructs;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogXStruct)
    {
        if (DialogXStruct->objectName().isEmpty())
            DialogXStruct->setObjectName("DialogXStruct");
        DialogXStruct->setWindowModality(Qt::WindowModality::NonModal);
        DialogXStruct->resize(678, 350);
        DialogXStruct->setModal(false);
        verticalLayout = new QVBoxLayout(DialogXStruct);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxStruct = new QComboBox(DialogXStruct);
        comboBoxStruct->setObjectName("comboBoxStruct");
        comboBoxStruct->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxStruct);

        comboBoxType = new QComboBox(DialogXStruct);
        comboBoxType->setObjectName("comboBoxType");
        comboBoxType->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBoxType);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        widgetStructs = new QWidget(DialogXStruct);
        widgetStructs->setObjectName("widgetStructs");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetStructs->sizePolicy().hasHeightForWidth());
        widgetStructs->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widgetStructs);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonOK = new QPushButton(DialogXStruct);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout_2->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DialogXStruct);

        QMetaObject::connectSlotsByName(DialogXStruct);
    } // setupUi

    void retranslateUi(QDialog *DialogXStruct)
    {
        DialogXStruct->setWindowTitle(QCoreApplication::translate("DialogXStruct", "Structs", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogXStruct", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogXStruct: public Ui_DialogXStruct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGXSTRUCT_H
