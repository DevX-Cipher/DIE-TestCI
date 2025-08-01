/********************************************************************************
** Form generated from reading UI file 'machofatwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHOFATWIDGET_H
#define UI_MACHOFATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MACHOFATWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxFilePart;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *MACHOFATWidget)
    {
        if (MACHOFATWidget->objectName().isEmpty())
            MACHOFATWidget->setObjectName("MACHOFATWidget");
        MACHOFATWidget->resize(656, 428);
        verticalLayout = new QVBoxLayout(MACHOFATWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBoxFilePart = new QComboBox(MACHOFATWidget);
        comboBoxFilePart->setObjectName("comboBoxFilePart");
        comboBoxFilePart->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(comboBoxFilePart);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(MACHOFATWidget);
        stackedWidget->setObjectName("stackedWidget");

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(MACHOFATWidget);

        QMetaObject::connectSlotsByName(MACHOFATWidget);
    } // setupUi

    void retranslateUi(QWidget *MACHOFATWidget)
    {
        MACHOFATWidget->setWindowTitle(QCoreApplication::translate("MACHOFATWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MACHOFATWidget: public Ui_MACHOFATWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHOFATWIDGET_H
