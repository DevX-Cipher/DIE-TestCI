/********************************************************************************
** Form generated from reading UI file 'dialogeditstring.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITSTRING_H
#define UI_DIALOGEDITSTRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogEditString
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxType;
    QLabel *labelAvailable;
    QLineEdit *lineEditString;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxKeepSize;
    QCheckBox *checkBoxNullTerminated;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DialogEditString)
    {
        if (DialogEditString->objectName().isEmpty())
            DialogEditString->setObjectName("DialogEditString");
        DialogEditString->setWindowModality(Qt::ApplicationModal);
        DialogEditString->resize(442, 160);
        DialogEditString->setModal(true);
        verticalLayout = new QVBoxLayout(DialogEditString);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        comboBoxType = new QComboBox(DialogEditString);
        comboBoxType->setObjectName("comboBoxType");

        horizontalLayout_3->addWidget(comboBoxType);

        labelAvailable = new QLabel(DialogEditString);
        labelAvailable->setObjectName("labelAvailable");

        horizontalLayout_3->addWidget(labelAvailable);


        verticalLayout->addLayout(horizontalLayout_3);

        lineEditString = new QLineEdit(DialogEditString);
        lineEditString->setObjectName("lineEditString");

        verticalLayout->addWidget(lineEditString);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBoxKeepSize = new QCheckBox(DialogEditString);
        checkBoxKeepSize->setObjectName("checkBoxKeepSize");

        horizontalLayout_2->addWidget(checkBoxKeepSize);

        checkBoxNullTerminated = new QCheckBox(DialogEditString);
        checkBoxNullTerminated->setObjectName("checkBoxNullTerminated");

        horizontalLayout_2->addWidget(checkBoxNullTerminated);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(DialogEditString);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(DialogEditString);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogEditString);

        QMetaObject::connectSlotsByName(DialogEditString);
    } // setupUi

    void retranslateUi(QDialog *DialogEditString)
    {
        DialogEditString->setWindowTitle(QCoreApplication::translate("DialogEditString", "String", nullptr));
        labelAvailable->setText(QString());
        checkBoxKeepSize->setText(QCoreApplication::translate("DialogEditString", "Keep size", nullptr));
        checkBoxNullTerminated->setText(QCoreApplication::translate("DialogEditString", "Null-terminated", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogEditString", "OK", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("DialogEditString", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogEditString: public Ui_DialogEditString {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITSTRING_H
