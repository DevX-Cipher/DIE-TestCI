/********************************************************************************
** Form generated from reading UI file 'dialogdiehexviewer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDIEHEXVIEWER_H
#define UI_DIALOGDIEHEXVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogDieHexViewer
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *DialogDieHexViewer)
    {
        if (DialogDieHexViewer->objectName().isEmpty())
            DialogDieHexViewer->setObjectName("DialogDieHexViewer");
        DialogDieHexViewer->resize(835, 425);
        verticalLayout = new QVBoxLayout(DialogDieHexViewer);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 371, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonOK = new QPushButton(DialogDieHexViewer);
        pushButtonOK->setObjectName("pushButtonOK");

        horizontalLayout->addWidget(pushButtonOK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogDieHexViewer);

        QMetaObject::connectSlotsByName(DialogDieHexViewer);
    } // setupUi

    void retranslateUi(QDialog *DialogDieHexViewer)
    {
        DialogDieHexViewer->setWindowTitle(QCoreApplication::translate("DialogDieHexViewer", "Scripts", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("DialogDieHexViewer", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDieHexViewer: public Ui_DialogDieHexViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDIEHEXVIEWER_H
