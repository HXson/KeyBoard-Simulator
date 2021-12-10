/********************************************************************************
** Form generated from reading UI file 'inputwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTWIDGET_H
#define UI_INPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputWidget
{
public:
    QTextBrowser *textBrowser_input_test_data;
    QTextBrowser *textBrowser_input_user_data;
    QFrame *frame_input_main;
    QGroupBox *groupBox_input_time;
    QLabel *label_input_time_remains;
    QLabel *label_3;
    QLabel *label_8;
    QGroupBox *groupBox_input_mistakes;
    QLabel *label_input_mistakes_percent;
    QLabel *label_4;
    QLabel *label_input_mistakes_total;
    QLabel *label_5;
    QLabel *label_9;
    QGroupBox *groupBox_input_speed;
    QLabel *label_input_speed_average_per_sec;
    QLabel *label_input_speed_current_per_sec;
    QLabel *label_7;
    QLabel *label_input_speed_average_per_min;
    QLabel *label_6;
    QLabel *label_input_speed_current_per_min;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton_input_drop;
    QPushButton *pushButton_input_save;
    QPushButton *pushButton_input_quit;

    void setupUi(QWidget *InputWidget)
    {
        if (InputWidget->objectName().isEmpty())
            InputWidget->setObjectName(QString::fromUtf8("InputWidget"));
        InputWidget->resize(800, 400);
        InputWidget->setMinimumSize(QSize(800, 400));
        InputWidget->setMaximumSize(QSize(800, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/src/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        InputWidget->setWindowIcon(icon);
        InputWidget->setStyleSheet(QString::fromUtf8("color:#f8f8f8;\n"
"background-color:#181818;"));
        textBrowser_input_test_data = new QTextBrowser(InputWidget);
        textBrowser_input_test_data->setObjectName(QString::fromUtf8("textBrowser_input_test_data"));
        textBrowser_input_test_data->setGeometry(QRect(20, 260, 751, 61));
        textBrowser_input_test_data->setFocusPolicy(Qt::NoFocus);
        textBrowser_input_test_data->setTextInteractionFlags(Qt::NoTextInteraction);
        textBrowser_input_user_data = new QTextBrowser(InputWidget);
        textBrowser_input_user_data->setObjectName(QString::fromUtf8("textBrowser_input_user_data"));
        textBrowser_input_user_data->setGeometry(QRect(20, 180, 751, 61));
        textBrowser_input_user_data->setFocusPolicy(Qt::NoFocus);
        textBrowser_input_user_data->setTextInteractionFlags(Qt::NoTextInteraction);
        frame_input_main = new QFrame(InputWidget);
        frame_input_main->setObjectName(QString::fromUtf8("frame_input_main"));
        frame_input_main->setGeometry(QRect(10, 20, 771, 141));
        frame_input_main->setFrameShape(QFrame::StyledPanel);
        frame_input_main->setFrameShadow(QFrame::Raised);
        groupBox_input_time = new QGroupBox(frame_input_main);
        groupBox_input_time->setObjectName(QString::fromUtf8("groupBox_input_time"));
        groupBox_input_time->setGeometry(QRect(30, 20, 191, 91));
        label_input_time_remains = new QLabel(groupBox_input_time);
        label_input_time_remains->setObjectName(QString::fromUtf8("label_input_time_remains"));
        label_input_time_remains->setGeometry(QRect(70, 50, 50, 15));
        label_input_time_remains->setMinimumSize(QSize(50, 15));
        label_input_time_remains->setMaximumSize(QSize(50, 15));
        label_3 = new QLabel(groupBox_input_time);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(5, 50, 50, 15));
        label_3->setMinimumSize(QSize(50, 15));
        label_3->setMaximumSize(QSize(50, 15));
        label_8 = new QLabel(groupBox_input_time);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(130, 50, 50, 15));
        label_8->setMinimumSize(QSize(50, 15));
        label_8->setMaximumSize(QSize(50, 15));
        groupBox_input_mistakes = new QGroupBox(frame_input_main);
        groupBox_input_mistakes->setObjectName(QString::fromUtf8("groupBox_input_mistakes"));
        groupBox_input_mistakes->setGeometry(QRect(280, 30, 181, 80));
        label_input_mistakes_percent = new QLabel(groupBox_input_mistakes);
        label_input_mistakes_percent->setObjectName(QString::fromUtf8("label_input_mistakes_percent"));
        label_input_mistakes_percent->setGeometry(QRect(70, 50, 50, 15));
        label_input_mistakes_percent->setMinimumSize(QSize(50, 15));
        label_input_mistakes_percent->setMaximumSize(QSize(50, 15));
        label_input_mistakes_percent->setSizeIncrement(QSize(0, 0));
        label_4 = new QLabel(groupBox_input_mistakes);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(5, 20, 50, 15));
        label_4->setMinimumSize(QSize(50, 15));
        label_4->setMaximumSize(QSize(50, 15));
        label_input_mistakes_total = new QLabel(groupBox_input_mistakes);
        label_input_mistakes_total->setObjectName(QString::fromUtf8("label_input_mistakes_total"));
        label_input_mistakes_total->setGeometry(QRect(70, 20, 50, 15));
        label_input_mistakes_total->setMinimumSize(QSize(50, 15));
        label_input_mistakes_total->setMaximumSize(QSize(50, 15));
        label_input_mistakes_total->setSizeIncrement(QSize(0, 0));
        label_5 = new QLabel(groupBox_input_mistakes);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(5, 50, 50, 15));
        label_5->setMinimumSize(QSize(50, 15));
        label_5->setMaximumSize(QSize(50, 15));
        label_9 = new QLabel(groupBox_input_mistakes);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(130, 50, 50, 15));
        label_9->setMinimumSize(QSize(50, 15));
        label_9->setMaximumSize(QSize(50, 15));
        groupBox_input_speed = new QGroupBox(frame_input_main);
        groupBox_input_speed->setObjectName(QString::fromUtf8("groupBox_input_speed"));
        groupBox_input_speed->setGeometry(QRect(490, 10, 181, 111));
        groupBox_input_speed->setMinimumSize(QSize(0, 15));
        groupBox_input_speed->setSizeIncrement(QSize(0, 15));
        label_input_speed_average_per_sec = new QLabel(groupBox_input_speed);
        label_input_speed_average_per_sec->setObjectName(QString::fromUtf8("label_input_speed_average_per_sec"));
        label_input_speed_average_per_sec->setGeometry(QRect(70, 70, 50, 15));
        label_input_speed_average_per_sec->setMinimumSize(QSize(50, 15));
        label_input_speed_average_per_sec->setMaximumSize(QSize(50, 15));
        label_input_speed_average_per_sec->setSizeIncrement(QSize(0, 0));
        label_input_speed_current_per_sec = new QLabel(groupBox_input_speed);
        label_input_speed_current_per_sec->setObjectName(QString::fromUtf8("label_input_speed_current_per_sec"));
        label_input_speed_current_per_sec->setGeometry(QRect(70, 20, 50, 15));
        label_input_speed_current_per_sec->setMinimumSize(QSize(50, 15));
        label_input_speed_current_per_sec->setMaximumSize(QSize(50, 15));
        label_input_speed_current_per_sec->setSizeIncrement(QSize(0, 0));
        label_7 = new QLabel(groupBox_input_speed);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(5, 70, 50, 15));
        label_7->setMinimumSize(QSize(50, 15));
        label_7->setMaximumSize(QSize(50, 15));
        label_input_speed_average_per_min = new QLabel(groupBox_input_speed);
        label_input_speed_average_per_min->setObjectName(QString::fromUtf8("label_input_speed_average_per_min"));
        label_input_speed_average_per_min->setGeometry(QRect(70, 90, 50, 15));
        label_input_speed_average_per_min->setMinimumSize(QSize(50, 15));
        label_input_speed_average_per_min->setMaximumSize(QSize(50, 15));
        label_input_speed_average_per_min->setSizeIncrement(QSize(0, 0));
        label_6 = new QLabel(groupBox_input_speed);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(5, 20, 50, 15));
        label_6->setMinimumSize(QSize(50, 15));
        label_6->setMaximumSize(QSize(50, 15));
        label_input_speed_current_per_min = new QLabel(groupBox_input_speed);
        label_input_speed_current_per_min->setObjectName(QString::fromUtf8("label_input_speed_current_per_min"));
        label_input_speed_current_per_min->setGeometry(QRect(70, 40, 50, 15));
        label_input_speed_current_per_min->setMinimumSize(QSize(50, 15));
        label_input_speed_current_per_min->setMaximumSize(QSize(50, 15));
        label_input_speed_current_per_min->setSizeIncrement(QSize(0, 0));
        label_10 = new QLabel(groupBox_input_speed);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(130, 20, 50, 15));
        label_10->setMinimumSize(QSize(50, 15));
        label_10->setMaximumSize(QSize(50, 15));
        label_11 = new QLabel(groupBox_input_speed);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(130, 40, 50, 15));
        label_11->setMinimumSize(QSize(50, 15));
        label_11->setMaximumSize(QSize(50, 15));
        label_12 = new QLabel(groupBox_input_speed);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(130, 70, 50, 15));
        label_12->setMinimumSize(QSize(50, 15));
        label_12->setMaximumSize(QSize(50, 15));
        label_13 = new QLabel(groupBox_input_speed);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(130, 90, 50, 15));
        label_13->setMinimumSize(QSize(50, 15));
        label_13->setMaximumSize(QSize(50, 15));
        pushButton_input_drop = new QPushButton(InputWidget);
        pushButton_input_drop->setObjectName(QString::fromUtf8("pushButton_input_drop"));
        pushButton_input_drop->setGeometry(QRect(140, 350, 80, 21));
        pushButton_input_drop->setFocusPolicy(Qt::NoFocus);
        pushButton_input_drop->setStyleSheet(QString::fromUtf8("background-color:#383838;"));
        pushButton_input_save = new QPushButton(InputWidget);
        pushButton_input_save->setObjectName(QString::fromUtf8("pushButton_input_save"));
        pushButton_input_save->setGeometry(QRect(310, 350, 131, 21));
        pushButton_input_save->setFocusPolicy(Qt::NoFocus);
        pushButton_input_save->setStyleSheet(QString::fromUtf8("background-color:#383838;"));
        pushButton_input_quit = new QPushButton(InputWidget);
        pushButton_input_quit->setObjectName(QString::fromUtf8("pushButton_input_quit"));
        pushButton_input_quit->setGeometry(QRect(510, 350, 131, 21));
        pushButton_input_quit->setFocusPolicy(Qt::NoFocus);
        pushButton_input_quit->setStyleSheet(QString::fromUtf8("background-color:#383838;"));

        retranslateUi(InputWidget);

        QMetaObject::connectSlotsByName(InputWidget);
    } // setupUi

    void retranslateUi(QWidget *InputWidget)
    {
        InputWidget->setWindowTitle(QCoreApplication::translate("InputWidget", "\320\242\320\265\321\201\321\202 \320\275\320\260\321\207\320\260\320\273\321\201\321\217", nullptr));
        textBrowser_input_user_data->setPlaceholderText(QCoreApplication::translate("InputWidget", "\320\232\320\260\320\272 \321\202\320\276\320\273\321\214\320\272\320\276 \320\262\321\213 \320\275\320\260\320\266\320\274\320\265\321\202\320\265 \320\275\320\260 Enter, \321\202\320\265\321\201\321\202 \320\275\320\260\321\207\320\275\320\265\321\202\321\201\321\217, \321\202\321\203\321\202 \320\261\321\203\320\264\320\265\321\202 \320\277\320\276\321\217\320\262\320\273\321\217\321\202\321\214\321\201\321\217 \320\262\320\262\320\276\320\264\320\270\320\274\321\213\320\271 \320\262\320\260\320\274\320\270 \321\202\320\265\320\272\321\201\321\202", nullptr));
        groupBox_input_time->setTitle(QCoreApplication::translate("InputWidget", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        label_input_time_remains->setText(QCoreApplication::translate("InputWidget", "0", nullptr));
        label_3->setText(QCoreApplication::translate("InputWidget", "\320\236\321\201\321\202\320\260\320\273\320\276\321\201\321\214:", nullptr));
        label_8->setText(QCoreApplication::translate("InputWidget", "\321\201\320\265\320\272\321\203\320\275\320\264", nullptr));
        groupBox_input_mistakes->setTitle(QCoreApplication::translate("InputWidget", "\320\236\321\210\320\270\320\261\320\272\320\270", nullptr));
        label_input_mistakes_percent->setText(QCoreApplication::translate("InputWidget", "0", nullptr));
        label_4->setText(QCoreApplication::translate("InputWidget", "\320\222\321\201\320\265\320\263\320\276:", nullptr));
        label_input_mistakes_total->setText(QCoreApplication::translate("InputWidget", "0", nullptr));
        label_5->setText(QCoreApplication::translate("InputWidget", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202:", nullptr));
        label_9->setText(QCoreApplication::translate("InputWidget", "%", nullptr));
        groupBox_input_speed->setTitle(QCoreApplication::translate("InputWidget", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        label_input_speed_average_per_sec->setText(QCoreApplication::translate("InputWidget", "0", nullptr));
        label_input_speed_current_per_sec->setText(QCoreApplication::translate("InputWidget", "0", nullptr));
        label_7->setText(QCoreApplication::translate("InputWidget", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217:", nullptr));
        label_input_speed_average_per_min->setText(QCoreApplication::translate("InputWidget", "0", nullptr));
        label_6->setText(QCoreApplication::translate("InputWidget", "\320\242\320\265\320\272\321\203\321\211\320\260\321\217:", nullptr));
        label_input_speed_current_per_min->setText(QCoreApplication::translate("InputWidget", "0", nullptr));
        label_10->setText(QCoreApplication::translate("InputWidget", "\321\201\320\274\320\262/\321\201\320\265\320\272", nullptr));
        label_11->setText(QCoreApplication::translate("InputWidget", "\321\201\320\274\320\262/\320\274\320\270\320\275", nullptr));
        label_12->setText(QCoreApplication::translate("InputWidget", "\321\201\320\274\320\262/\321\201\320\265\320\272", nullptr));
        label_13->setText(QCoreApplication::translate("InputWidget", "\321\201\320\274\320\262/\320\274\320\270\320\275", nullptr));
        pushButton_input_drop->setText(QCoreApplication::translate("InputWidget", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214", nullptr));
        pushButton_input_save->setText(QCoreApplication::translate("InputWidget", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        pushButton_input_quit->setText(QCoreApplication::translate("InputWidget", "\320\222\321\213\320\271\321\202\320\270 \320\262 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputWidget: public Ui_InputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTWIDGET_H
