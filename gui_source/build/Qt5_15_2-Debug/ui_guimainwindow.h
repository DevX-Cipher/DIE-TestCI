/********************************************************************************
** Form generated from reading UI file 'guimainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIMAINWINDOW_H
#define UI_GUIMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "formatswidget.h"

QT_BEGIN_NAMESPACE

class Ui_GuiMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxFileName;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonRecentFiles;
    QLineEdit *lineEditFileName;
    QToolButton *toolButtonOpenFile;
    QHBoxLayout *horizontalLayout_2;
    FormatsWidget *widgetFormats;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBoxExtra;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxAdvanced;
    QToolButton *toolButtonDemangle;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButtonShortcuts;
    QToolButton *toolButtonOptions;
    QToolButton *toolButtonAbout;
    QToolButton *toolButtonExit;

    void setupUi(QMainWindow *GuiMainWindow)
    {
        if (GuiMainWindow->objectName().isEmpty())
            GuiMainWindow->setObjectName(QString::fromUtf8("GuiMainWindow"));
        GuiMainWindow->resize(720, 500);
        GuiMainWindow->setWindowTitle(QString::fromUtf8("GuiMainWindow"));
        centralwidget = new QWidget(GuiMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBoxFileName = new QGroupBox(centralwidget);
        groupBoxFileName->setObjectName(QString::fromUtf8("groupBoxFileName"));
        horizontalLayout = new QHBoxLayout(groupBoxFileName);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButtonRecentFiles = new QToolButton(groupBoxFileName);
        toolButtonRecentFiles->setObjectName(QString::fromUtf8("toolButtonRecentFiles"));
        toolButtonRecentFiles->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(toolButtonRecentFiles);

        lineEditFileName = new QLineEdit(groupBoxFileName);
        lineEditFileName->setObjectName(QString::fromUtf8("lineEditFileName"));

        horizontalLayout->addWidget(lineEditFileName);

        toolButtonOpenFile = new QToolButton(groupBoxFileName);
        toolButtonOpenFile->setObjectName(QString::fromUtf8("toolButtonOpenFile"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButtonOpenFile->sizePolicy().hasHeightForWidth());
        toolButtonOpenFile->setSizePolicy(sizePolicy);
        toolButtonOpenFile->setMinimumSize(QSize(80, 0));
        toolButtonOpenFile->setText(QString::fromUtf8("..."));

        horizontalLayout->addWidget(toolButtonOpenFile);


        verticalLayout_3->addWidget(groupBoxFileName);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widgetFormats = new FormatsWidget(centralwidget);
        widgetFormats->setObjectName(QString::fromUtf8("widgetFormats"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetFormats->sizePolicy().hasHeightForWidth());
        widgetFormats->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(widgetFormats);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBoxExtra = new QGroupBox(centralwidget);
        groupBoxExtra->setObjectName(QString::fromUtf8("groupBoxExtra"));
        verticalLayout = new QVBoxLayout(groupBoxExtra);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxAdvanced = new QCheckBox(groupBoxExtra);
        checkBoxAdvanced->setObjectName(QString::fromUtf8("checkBoxAdvanced"));

        verticalLayout->addWidget(checkBoxAdvanced);

        toolButtonDemangle = new QToolButton(groupBoxExtra);
        toolButtonDemangle->setObjectName(QString::fromUtf8("toolButtonDemangle"));
        sizePolicy.setHeightForWidth(toolButtonDemangle->sizePolicy().hasHeightForWidth());
        toolButtonDemangle->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButtonDemangle);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        toolButtonShortcuts = new QToolButton(groupBoxExtra);
        toolButtonShortcuts->setObjectName(QString::fromUtf8("toolButtonShortcuts"));
        sizePolicy.setHeightForWidth(toolButtonShortcuts->sizePolicy().hasHeightForWidth());
        toolButtonShortcuts->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButtonShortcuts);

        toolButtonOptions = new QToolButton(groupBoxExtra);
        toolButtonOptions->setObjectName(QString::fromUtf8("toolButtonOptions"));
        sizePolicy.setHeightForWidth(toolButtonOptions->sizePolicy().hasHeightForWidth());
        toolButtonOptions->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButtonOptions);

        toolButtonAbout = new QToolButton(groupBoxExtra);
        toolButtonAbout->setObjectName(QString::fromUtf8("toolButtonAbout"));
        sizePolicy.setHeightForWidth(toolButtonAbout->sizePolicy().hasHeightForWidth());
        toolButtonAbout->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButtonAbout);

        toolButtonExit = new QToolButton(groupBoxExtra);
        toolButtonExit->setObjectName(QString::fromUtf8("toolButtonExit"));
        sizePolicy.setHeightForWidth(toolButtonExit->sizePolicy().hasHeightForWidth());
        toolButtonExit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(toolButtonExit);


        verticalLayout_2->addWidget(groupBoxExtra);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        GuiMainWindow->setCentralWidget(centralwidget);

        retranslateUi(GuiMainWindow);

        QMetaObject::connectSlotsByName(GuiMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GuiMainWindow)
    {
        groupBoxFileName->setTitle(QCoreApplication::translate("GuiMainWindow", "File name", nullptr));
        checkBoxAdvanced->setText(QCoreApplication::translate("GuiMainWindow", "Advanced", nullptr));
        toolButtonDemangle->setText(QCoreApplication::translate("GuiMainWindow", "Demangle", nullptr));
        toolButtonShortcuts->setText(QCoreApplication::translate("GuiMainWindow", "Shortcuts", nullptr));
        toolButtonOptions->setText(QCoreApplication::translate("GuiMainWindow", "Options", nullptr));
        toolButtonAbout->setText(QCoreApplication::translate("GuiMainWindow", "About", nullptr));
        toolButtonExit->setText(QCoreApplication::translate("GuiMainWindow", "Exit", nullptr));
        (void)GuiMainWindow;
    } // retranslateUi

};

namespace Ui {
    class GuiMainWindow: public Ui_GuiMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIMAINWINDOW_H
