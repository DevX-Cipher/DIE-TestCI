/********************************************************************************
** Form generated from reading UI file 'dialogfindtext.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFINDTEXT_H
#define UI_DIALOGFINDTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogFindText
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditText;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxMatchCase;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DialogFindText)
    {
        if (DialogFindText->objectName().isEmpty())
            DialogFindText->setObjectName("DialogFindText");
        DialogFindText->setWindowModality(Qt::ApplicationModal);
        DialogFindText->resize(422, 118);
        DialogFindText->setModal(true);
        verticalLayout = new QVBoxLayout(DialogFindText);
        verticalLayout->setObjectName("verticalLayout");
        lineEditText = new QLineEdit(DialogFindText);
        lineEditText->setObjectName("lineEditText");

        verticalLayout->addWidget(lineEditText);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        checkBoxMatchCase = new QCheckBox(DialogFindText);
        checkBoxMatchCase->setObjectName("checkBoxMatchCase");

        horizontalLayout->addWidget(checkBoxMatchCase);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonOK = new QPushButton(DialogFindText);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout_2->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(DialogFindText);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout_2->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(DialogFindText);

        QMetaObject::connectSlotsByName(DialogFindText);
    } // setupUi

    void retranslateUi(QDialog *DialogFindText)
    {
        DialogFindText->setWindowTitle(QCoreApplication::translate("DialogFindText", "Find", nullptr));
        checkBoxMatchCase->setText(QCoreApplication::translate("DialogFindText", "Match case", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogFindText", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("DialogFindText", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFindText: public Ui_DialogFindText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFINDTEXT_H
