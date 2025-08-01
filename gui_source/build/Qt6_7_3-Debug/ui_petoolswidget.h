/********************************************************************************
** Form generated from reading UI file 'petoolswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PETOOLSWIDGET_H
#define UI_PETOOLSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PEToolsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBoxDosStub;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonDosStubAdd;
    QPushButton *pushButtonDosStubRemove;
    QPushButton *pushButtonDosStubDump;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonOverlayAdd;
    QPushButton *pushButtonOverlayRemove;
    QPushButton *pushButtonOverlayDump;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PEToolsWidget)
    {
        if (PEToolsWidget->objectName().isEmpty())
            PEToolsWidget->setObjectName("PEToolsWidget");
        PEToolsWidget->resize(475, 286);
        verticalLayout = new QVBoxLayout(PEToolsWidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBoxDosStub = new QGroupBox(PEToolsWidget);
        groupBoxDosStub->setObjectName("groupBoxDosStub");
        groupBoxDosStub->setTitle(QString::fromUtf8("Dos stub"));
        horizontalLayout = new QHBoxLayout(groupBoxDosStub);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        pushButtonDosStubAdd = new QPushButton(groupBoxDosStub);
        pushButtonDosStubAdd->setObjectName("pushButtonDosStubAdd");

        horizontalLayout->addWidget(pushButtonDosStubAdd);

        pushButtonDosStubRemove = new QPushButton(groupBoxDosStub);
        pushButtonDosStubRemove->setObjectName("pushButtonDosStubRemove");

        horizontalLayout->addWidget(pushButtonDosStubRemove);

        pushButtonDosStubDump = new QPushButton(groupBoxDosStub);
        pushButtonDosStubDump->setObjectName("pushButtonDosStubDump");

        horizontalLayout->addWidget(pushButtonDosStubDump);


        horizontalLayout_3->addWidget(groupBoxDosStub);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox = new QGroupBox(PEToolsWidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonOverlayAdd = new QPushButton(groupBox);
        pushButtonOverlayAdd->setObjectName("pushButtonOverlayAdd");

        horizontalLayout_2->addWidget(pushButtonOverlayAdd);

        pushButtonOverlayRemove = new QPushButton(groupBox);
        pushButtonOverlayRemove->setObjectName("pushButtonOverlayRemove");

        horizontalLayout_2->addWidget(pushButtonOverlayRemove);

        pushButtonOverlayDump = new QPushButton(groupBox);
        pushButtonOverlayDump->setObjectName("pushButtonOverlayDump");

        horizontalLayout_2->addWidget(pushButtonOverlayDump);


        horizontalLayout_4->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 163, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PEToolsWidget);

        QMetaObject::connectSlotsByName(PEToolsWidget);
    } // setupUi

    void retranslateUi(QWidget *PEToolsWidget)
    {
        PEToolsWidget->setWindowTitle(QCoreApplication::translate("PEToolsWidget", "Tools", nullptr));
        pushButtonDosStubAdd->setText(QCoreApplication::translate("PEToolsWidget", "Add", nullptr));
        pushButtonDosStubRemove->setText(QCoreApplication::translate("PEToolsWidget", "Remove", nullptr));
        pushButtonDosStubDump->setText(QCoreApplication::translate("PEToolsWidget", "Dump", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PEToolsWidget", "Overlay", nullptr));
        pushButtonOverlayAdd->setText(QCoreApplication::translate("PEToolsWidget", "Add", nullptr));
        pushButtonOverlayRemove->setText(QCoreApplication::translate("PEToolsWidget", "Remove", nullptr));
        pushButtonOverlayDump->setText(QCoreApplication::translate("PEToolsWidget", "Dump", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PEToolsWidget: public Ui_PEToolsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PETOOLSWIDGET_H
