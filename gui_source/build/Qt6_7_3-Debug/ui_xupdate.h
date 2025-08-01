/********************************************************************************
** Form generated from reading UI file 'xupdate.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XUPDATE_H
#define UI_XUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XUpdate
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *percentageLabel;
    QProgressBar *progressBar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *XUpdate)
    {
        if (XUpdate->objectName().isEmpty())
            XUpdate->setObjectName("XUpdate");
        XUpdate->resize(400, 108);
        centralwidget = new QWidget(XUpdate);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        label->setVisible(false);

        verticalLayout->addWidget(label);

        percentageLabel = new QLabel(centralwidget);
        percentageLabel->setObjectName("percentageLabel");
        percentageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(percentageLabel);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setMinimum(0);
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        progressBar->setTextVisible(true);

        verticalLayout->addWidget(progressBar);

        XUpdate->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(XUpdate);
        statusbar->setObjectName("statusbar");
        XUpdate->setStatusBar(statusbar);

        retranslateUi(XUpdate);

        QMetaObject::connectSlotsByName(XUpdate);
    } // setupUi

    void retranslateUi(QMainWindow *XUpdate)
    {
        XUpdate->setWindowTitle(QCoreApplication::translate("XUpdate", "Updater", nullptr));
        label->setText(QCoreApplication::translate("XUpdate", "Updating, please wait...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XUpdate: public Ui_XUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XUPDATE_H
