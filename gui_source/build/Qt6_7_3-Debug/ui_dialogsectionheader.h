/********************************************************************************
** Form generated from reading UI file 'dialogsectionheader.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSECTIONHEADER_H
#define UI_DIALOGSECTIONHEADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSectionHeader
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *WidgetLayout;

    void setupUi(QDialog *DialogSectionHeader)
    {
        if (DialogSectionHeader->objectName().isEmpty())
            DialogSectionHeader->setObjectName("DialogSectionHeader");
        DialogSectionHeader->setWindowModality(Qt::ApplicationModal);
        DialogSectionHeader->resize(727, 609);
        DialogSectionHeader->setModal(true);
        verticalLayout = new QVBoxLayout(DialogSectionHeader);
        verticalLayout->setObjectName("verticalLayout");
        WidgetLayout = new QVBoxLayout();
        WidgetLayout->setObjectName("WidgetLayout");

        verticalLayout->addLayout(WidgetLayout);


        retranslateUi(DialogSectionHeader);

        QMetaObject::connectSlotsByName(DialogSectionHeader);
    } // setupUi

    void retranslateUi(QDialog *DialogSectionHeader)
    {
        DialogSectionHeader->setWindowTitle(QCoreApplication::translate("DialogSectionHeader", "Section", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSectionHeader: public Ui_DialogSectionHeader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSECTIONHEADER_H
