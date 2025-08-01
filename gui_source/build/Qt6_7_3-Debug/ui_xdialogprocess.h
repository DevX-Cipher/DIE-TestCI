/********************************************************************************
** Form generated from reading UI file 'xdialogprocess.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XDIALOGPROCESS_H
#define UI_XDIALOGPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_XDialogProcess
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar0;
    QLabel *labelSpeed0;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *progressBar1;
    QLabel *labelSpeed1;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *progressBar2;
    QLabel *labelSpeed2;
    QHBoxLayout *horizontalLayout_5;
    QProgressBar *progressBar3;
    QLabel *labelSpeed3;
    QHBoxLayout *horizontalLayout_6;
    QProgressBar *progressBar4;
    QLabel *labelSpeed4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTime;
    QCheckBox *checkBoxAdvanced;
    QSpacerItem *horizontalSpacer;
    QLabel *labelRemain;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *XDialogProcess)
    {
        if (XDialogProcess->objectName().isEmpty())
            XDialogProcess->setObjectName("XDialogProcess");
        XDialogProcess->setWindowModality(Qt::ApplicationModal);
        XDialogProcess->resize(772, 247);
        XDialogProcess->setModal(true);
        verticalLayout = new QVBoxLayout(XDialogProcess);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        progressBar0 = new QProgressBar(XDialogProcess);
        progressBar0->setObjectName("progressBar0");
        progressBar0->setMaximum(0);
        progressBar0->setValue(0);
        progressBar0->setAlignment(Qt::AlignCenter);
        progressBar0->setFormat(QString::fromUtf8("%v/%m"));

        horizontalLayout_2->addWidget(progressBar0);

        labelSpeed0 = new QLabel(XDialogProcess);
        labelSpeed0->setObjectName("labelSpeed0");
        labelSpeed0->setMinimumSize(QSize(80, 0));
        labelSpeed0->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelSpeed0);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        progressBar1 = new QProgressBar(XDialogProcess);
        progressBar1->setObjectName("progressBar1");
        progressBar1->setMaximum(0);
        progressBar1->setValue(0);
        progressBar1->setAlignment(Qt::AlignCenter);
        progressBar1->setFormat(QString::fromUtf8("%v/%m"));

        horizontalLayout_3->addWidget(progressBar1);

        labelSpeed1 = new QLabel(XDialogProcess);
        labelSpeed1->setObjectName("labelSpeed1");
        labelSpeed1->setMinimumSize(QSize(80, 0));
        labelSpeed1->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelSpeed1);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        progressBar2 = new QProgressBar(XDialogProcess);
        progressBar2->setObjectName("progressBar2");
        progressBar2->setMaximum(0);
        progressBar2->setValue(0);
        progressBar2->setAlignment(Qt::AlignCenter);
        progressBar2->setFormat(QString::fromUtf8("%v/%m"));

        horizontalLayout_4->addWidget(progressBar2);

        labelSpeed2 = new QLabel(XDialogProcess);
        labelSpeed2->setObjectName("labelSpeed2");
        labelSpeed2->setMinimumSize(QSize(80, 0));
        labelSpeed2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(labelSpeed2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        progressBar3 = new QProgressBar(XDialogProcess);
        progressBar3->setObjectName("progressBar3");
        progressBar3->setMaximum(0);
        progressBar3->setValue(0);
        progressBar3->setAlignment(Qt::AlignCenter);
        progressBar3->setFormat(QString::fromUtf8("%v/%m"));

        horizontalLayout_5->addWidget(progressBar3);

        labelSpeed3 = new QLabel(XDialogProcess);
        labelSpeed3->setObjectName("labelSpeed3");
        labelSpeed3->setMinimumSize(QSize(80, 0));
        labelSpeed3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labelSpeed3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        progressBar4 = new QProgressBar(XDialogProcess);
        progressBar4->setObjectName("progressBar4");
        progressBar4->setMaximum(0);
        progressBar4->setValue(0);
        progressBar4->setAlignment(Qt::AlignCenter);
        progressBar4->setFormat(QString::fromUtf8("%v/%m"));

        horizontalLayout_6->addWidget(progressBar4);

        labelSpeed4 = new QLabel(XDialogProcess);
        labelSpeed4->setObjectName("labelSpeed4");
        labelSpeed4->setMinimumSize(QSize(80, 0));
        labelSpeed4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(labelSpeed4);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelTime = new QLabel(XDialogProcess);
        labelTime->setObjectName("labelTime");
        labelTime->setMinimumSize(QSize(120, 0));
        labelTime->setMaximumSize(QSize(120, 16777215));
        labelTime->setFrameShape(QFrame::NoFrame);
        labelTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelTime);

        checkBoxAdvanced = new QCheckBox(XDialogProcess);
        checkBoxAdvanced->setObjectName("checkBoxAdvanced");

        horizontalLayout->addWidget(checkBoxAdvanced);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelRemain = new QLabel(XDialogProcess);
        labelRemain->setObjectName("labelRemain");
        labelRemain->setMinimumSize(QSize(120, 0));
        labelRemain->setMaximumSize(QSize(120, 16777215));
        labelRemain->setFrameShape(QFrame::NoFrame);
        labelRemain->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelRemain);

        pushButtonCancel = new QPushButton(XDialogProcess);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(XDialogProcess);

        QMetaObject::connectSlotsByName(XDialogProcess);
    } // setupUi

    void retranslateUi(QDialog *XDialogProcess)
    {
        XDialogProcess->setWindowTitle(QCoreApplication::translate("XDialogProcess", "Process", nullptr));
        labelSpeed0->setText(QString());
        labelSpeed1->setText(QString());
        labelSpeed2->setText(QString());
        labelSpeed3->setText(QString());
        labelSpeed4->setText(QString());
        labelTime->setText(QString());
        checkBoxAdvanced->setText(QCoreApplication::translate("XDialogProcess", "Advanced", nullptr));
        labelRemain->setText(QString());
        pushButtonCancel->setText(QCoreApplication::translate("XDialogProcess", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XDialogProcess: public Ui_XDialogProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XDIALOGPROCESS_H
