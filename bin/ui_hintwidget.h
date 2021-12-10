/********************************************************************************
** Form generated from reading UI file 'hintwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HINTWIDGET_H
#define UI_HINTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HintWidget
{
public:
    QLabel *label_hint_picmap;
    QCheckBox *checkBox_hint_disable_auto;

    void setupUi(QWidget *HintWidget)
    {
        if (HintWidget->objectName().isEmpty())
            HintWidget->setObjectName(QString::fromUtf8("HintWidget"));
        HintWidget->resize(710, 255);
        HintWidget->setMinimumSize(QSize(710, 255));
        HintWidget->setMaximumSize(QSize(710, 255));
        HintWidget->setTabletTracking(false);
        HintWidget->setFocusPolicy(Qt::ClickFocus);
        HintWidget->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/src/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        HintWidget->setWindowIcon(icon);
        HintWidget->setAutoFillBackground(false);
        HintWidget->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:white;"));
        label_hint_picmap = new QLabel(HintWidget);
        label_hint_picmap->setObjectName(QString::fromUtf8("label_hint_picmap"));
        label_hint_picmap->setGeometry(QRect(5, 5, 700, 200));
        label_hint_picmap->setMaximumSize(QSize(720, 200));
        label_hint_picmap->setFrameShape(QFrame::NoFrame);
        label_hint_picmap->setFrameShadow(QFrame::Sunken);
        label_hint_picmap->setLineWidth(2);
        label_hint_picmap->setTextFormat(Qt::AutoText);
        label_hint_picmap->setPixmap(QPixmap(QString::fromUtf8(":/hint/pixmap/src/hint.png")));
        label_hint_picmap->setScaledContents(true);
        checkBox_hint_disable_auto = new QCheckBox(HintWidget);
        checkBox_hint_disable_auto->setObjectName(QString::fromUtf8("checkBox_hint_disable_auto"));
        checkBox_hint_disable_auto->setGeometry(QRect(230, 210, 310, 30));
        checkBox_hint_disable_auto->setMinimumSize(QSize(310, 30));
        checkBox_hint_disable_auto->setMaximumSize(QSize(310, 30));

        retranslateUi(HintWidget);

        QMetaObject::connectSlotsByName(HintWidget);
    } // setupUi

    void retranslateUi(QWidget *HintWidget)
    {
        HintWidget->setWindowTitle(QCoreApplication::translate("HintWidget", "\320\237\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\260", nullptr));
        label_hint_picmap->setText(QString());
        checkBox_hint_disable_auto->setText(QCoreApplication::translate("HintWidget", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\321\203 \320\277\321\200\320\270 \320\267\320\260\320\277\321\203\321\201\320\272\320\265 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HintWidget: public Ui_HintWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HINTWIDGET_H
