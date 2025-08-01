/********************************************************************************
** Form generated from reading UI file 'dialogshowimage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSHOWIMAGE_H
#define UI_DIALOGSHOWIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogShowImage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelImage;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogShowImage)
    {
        if (DialogShowImage->objectName().isEmpty())
            DialogShowImage->setObjectName("DialogShowImage");
        DialogShowImage->setWindowModality(Qt::ApplicationModal);
        DialogShowImage->resize(400, 300);
        DialogShowImage->setModal(true);
        verticalLayout = new QVBoxLayout(DialogShowImage);
        verticalLayout->setObjectName("verticalLayout");
        labelImage = new QLabel(DialogShowImage);
        labelImage->setObjectName("labelImage");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelImage->sizePolicy().hasHeightForWidth());
        labelImage->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(labelImage);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(DialogShowImage);
        pushButtonClose->setObjectName("pushButtonClose");

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogShowImage);

        QMetaObject::connectSlotsByName(DialogShowImage);
    } // setupUi

    void retranslateUi(QDialog *DialogShowImage)
    {
        DialogShowImage->setWindowTitle(QCoreApplication::translate("DialogShowImage", "Image", nullptr));
        labelImage->setText(QString());
        pushButtonClose->setText(QCoreApplication::translate("DialogShowImage", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogShowImage: public Ui_DialogShowImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSHOWIMAGE_H
