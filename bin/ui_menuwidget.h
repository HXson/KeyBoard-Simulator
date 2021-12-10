/********************************************************************************
** Form generated from reading UI file 'menuwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWIDGET_H
#define UI_MENUWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWidget
{
public:
    QGroupBox *groupBox_main_lang;
    QRadioButton *radioButton_ru;
    QRadioButton *radioButton_en;
    QRadioButton *radioButton_spec;
    QPushButton *pushButton_main_start;
    QLabel *label_main_stat;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpinBox *spinBox_main_time;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *comboBox_main_type;
    QTableWidget *tableWidget_main_stat;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_main_username;

    void setupUi(QWidget *MenuWidget)
    {
        if (MenuWidget->objectName().isEmpty())
            MenuWidget->setObjectName(QString::fromUtf8("MenuWidget"));
        MenuWidget->resize(800, 400);
        MenuWidget->setMinimumSize(QSize(800, 400));
        MenuWidget->setMaximumSize(QSize(800, 400));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        MenuWidget->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/logo/src/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MenuWidget->setWindowIcon(icon);
        MenuWidget->setStyleSheet(QString::fromUtf8("color:#f8f8f8;\n"
"background-color:#181818;"));
        groupBox_main_lang = new QGroupBox(MenuWidget);
        groupBox_main_lang->setObjectName(QString::fromUtf8("groupBox_main_lang"));
        groupBox_main_lang->setGeometry(QRect(20, 20, 300, 120));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Open Sans Semibold")});
        groupBox_main_lang->setFont(font1);
        groupBox_main_lang->setLayoutDirection(Qt::LeftToRight);
        groupBox_main_lang->setStyleSheet(QString::fromUtf8(""));
        groupBox_main_lang->setAlignment(Qt::AlignCenter);
        radioButton_ru = new QRadioButton(groupBox_main_lang);
        radioButton_ru->setObjectName(QString::fromUtf8("radioButton_ru"));
        radioButton_ru->setGeometry(QRect(10, 30, 84, 19));
        radioButton_ru->setFont(font1);
        radioButton_ru->setChecked(true);
        radioButton_en = new QRadioButton(groupBox_main_lang);
        radioButton_en->setObjectName(QString::fromUtf8("radioButton_en"));
        radioButton_en->setGeometry(QRect(10, 60, 84, 19));
        radioButton_en->setFont(font1);
        radioButton_spec = new QRadioButton(groupBox_main_lang);
        radioButton_spec->setObjectName(QString::fromUtf8("radioButton_spec"));
        radioButton_spec->setGeometry(QRect(10, 90, 101, 19));
        radioButton_spec->setFont(font1);
        pushButton_main_start = new QPushButton(MenuWidget);
        pushButton_main_start->setObjectName(QString::fromUtf8("pushButton_main_start"));
        pushButton_main_start->setGeometry(QRect(20, 330, 300, 50));
        pushButton_main_start->setMinimumSize(QSize(300, 50));
        pushButton_main_start->setMaximumSize(QSize(300, 50));
        pushButton_main_start->setFont(font1);
        pushButton_main_start->setStyleSheet(QString::fromUtf8("background-color:#383838;"));
        label_main_stat = new QLabel(MenuWidget);
        label_main_stat->setObjectName(QString::fromUtf8("label_main_stat"));
        label_main_stat->setGeometry(QRect(510, 10, 101, 20));
        label_main_stat->setFont(font1);
        label_main_stat->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(MenuWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 220, 302, 50));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        spinBox_main_time = new QSpinBox(layoutWidget);
        spinBox_main_time->setObjectName(QString::fromUtf8("spinBox_main_time"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox_main_time->sizePolicy().hasHeightForWidth());
        spinBox_main_time->setSizePolicy(sizePolicy);
        spinBox_main_time->setMinimumSize(QSize(300, 25));
        spinBox_main_time->setMaximumSize(QSize(300, 25));
        spinBox_main_time->setFont(font1);
        spinBox_main_time->setStyleSheet(QString::fromUtf8("background-color:#383838;"));
        spinBox_main_time->setMinimum(1);
        spinBox_main_time->setMaximum(6);
        spinBox_main_time->setStepType(QAbstractSpinBox::DefaultStepType);
        spinBox_main_time->setDisplayIntegerBase(10);

        verticalLayout->addWidget(spinBox_main_time);

        layoutWidget1 = new QWidget(MenuWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 150, 302, 50));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        comboBox_main_type = new QComboBox(layoutWidget1);
        comboBox_main_type->addItem(QString());
        comboBox_main_type->addItem(QString());
        comboBox_main_type->addItem(QString());
        comboBox_main_type->setObjectName(QString::fromUtf8("comboBox_main_type"));
        comboBox_main_type->setMinimumSize(QSize(300, 25));
        comboBox_main_type->setMaximumSize(QSize(300, 25));
        comboBox_main_type->setFont(font1);
        comboBox_main_type->setStyleSheet(QString::fromUtf8("background-color:#383838;"));

        verticalLayout_2->addWidget(comboBox_main_type);

        tableWidget_main_stat = new QTableWidget(MenuWidget);
        if (tableWidget_main_stat->columnCount() < 5)
            tableWidget_main_stat->setColumnCount(5);
        QFont font2;
        font2.setPointSize(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        tableWidget_main_stat->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        tableWidget_main_stat->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem2->setFont(font2);
        tableWidget_main_stat->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        tableWidget_main_stat->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font2);
        tableWidget_main_stat->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget_main_stat->rowCount() < 10)
            tableWidget_main_stat->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_main_stat->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_main_stat->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_main_stat->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_main_stat->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_main_stat->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_main_stat->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_main_stat->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_main_stat->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_main_stat->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_main_stat->setVerticalHeaderItem(9, __qtablewidgetitem14);
        tableWidget_main_stat->setObjectName(QString::fromUtf8("tableWidget_main_stat"));
        tableWidget_main_stat->setGeometry(QRect(330, 40, 450, 340));
        tableWidget_main_stat->setMinimumSize(QSize(450, 340));
        tableWidget_main_stat->setMaximumSize(QSize(430, 340));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Open Sans Semibold")});
        font3.setPointSize(9);
        tableWidget_main_stat->setFont(font3);
        tableWidget_main_stat->setStyleSheet(QString::fromUtf8("color:#f8f8f8;"));
        tableWidget_main_stat->setFrameShape(QFrame::StyledPanel);
        tableWidget_main_stat->setFrameShadow(QFrame::Sunken);
        tableWidget_main_stat->setLineWidth(1);
        tableWidget_main_stat->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget_main_stat->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_main_stat->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableWidget_main_stat->setAutoScrollMargin(8);
        tableWidget_main_stat->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_main_stat->setTabKeyNavigation(false);
        tableWidget_main_stat->setProperty("showDropIndicator", QVariant(false));
        tableWidget_main_stat->setDragDropOverwriteMode(false);
        tableWidget_main_stat->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_main_stat->setShowGrid(true);
        tableWidget_main_stat->setGridStyle(Qt::SolidLine);
        tableWidget_main_stat->setSortingEnabled(true);
        tableWidget_main_stat->setWordWrap(true);
        tableWidget_main_stat->setCornerButtonEnabled(false);
        tableWidget_main_stat->horizontalHeader()->setVisible(true);
        tableWidget_main_stat->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_main_stat->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget_main_stat->horizontalHeader()->setDefaultSectionSize(85);
        tableWidget_main_stat->horizontalHeader()->setHighlightSections(false);
        tableWidget_main_stat->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_main_stat->verticalHeader()->setVisible(false);
        tableWidget_main_stat->verticalHeader()->setMinimumSectionSize(30);
        tableWidget_main_stat->verticalHeader()->setDefaultSectionSize(30);
        tableWidget_main_stat->verticalHeader()->setHighlightSections(false);
        layoutWidget2 = new QWidget(MenuWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 280, 302, 49));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        lineEdit_main_username = new QLineEdit(layoutWidget2);
        lineEdit_main_username->setObjectName(QString::fromUtf8("lineEdit_main_username"));
        lineEdit_main_username->setMinimumSize(QSize(300, 0));
        lineEdit_main_username->setMaximumSize(QSize(300, 16777215));
        lineEdit_main_username->setFont(font1);
        lineEdit_main_username->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(lineEdit_main_username);


        retranslateUi(MenuWidget);

        QMetaObject::connectSlotsByName(MenuWidget);
    } // setupUi

    void retranslateUi(QWidget *MenuWidget)
    {
        MenuWidget->setWindowTitle(QCoreApplication::translate("MenuWidget", "KeyBoard-Typer", nullptr));
        groupBox_main_lang->setTitle(QCoreApplication::translate("MenuWidget", "\320\240\320\265\320\266\320\270\320\274 \320\262\320\262\320\276\320\264\320\260", nullptr));
        radioButton_ru->setText(QCoreApplication::translate("MenuWidget", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        radioButton_en->setText(QCoreApplication::translate("MenuWidget", "\320\220\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271", nullptr));
        radioButton_spec->setText(QCoreApplication::translate("MenuWidget", "\320\241\320\277\320\265\321\206. \321\201\320\270\320\274\320\262\320\276\320\273\321\213", nullptr));
        pushButton_main_start->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\260\321\207\320\260\321\202\321\214 \321\202\320\265\321\201\321\202", nullptr));
        label_main_stat->setText(QCoreApplication::translate("MenuWidget", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MenuWidget", "\320\222\321\200\320\265\320\274\321\217 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("MenuWidget", "\320\242\320\270\320\277 \320\262\320\262\320\276\320\264\320\260", nullptr));
        comboBox_main_type->setItemText(0, QCoreApplication::translate("MenuWidget", "\320\236\320\264\320\270\320\275\320\276\321\207\320\275\321\213\320\265 \321\201\320\270\320\274\320\262\320\276\320\273\321\213", nullptr));
        comboBox_main_type->setItemText(1, QCoreApplication::translate("MenuWidget", "\320\241\320\273\320\276\320\262\320\260", nullptr));
        comboBox_main_type->setItemText(2, QCoreApplication::translate("MenuWidget", "\320\242\320\265\320\272\321\201\321\202", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableWidget_main_stat->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MenuWidget", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_main_stat->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MenuWidget", "\320\242\320\270\320\277 \320\262\320\262\320\276\320\264\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_main_stat->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MenuWidget", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_main_stat->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MenuWidget", "\320\236\321\210\320\270\320\261\320\272\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_main_stat->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MenuWidget", "\320\241\320\273\320\276\320\262 \320\262 \320\274\320\270\320\275\321\203\321\202\321\203", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_main_stat->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_main_stat->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_main_stat->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_main_stat->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_main_stat->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_main_stat->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_main_stat->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_main_stat->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_main_stat->verticalHeaderItem(8);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_main_stat->verticalHeaderItem(9);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MenuWidget", "\320\235\320\276\320\262\320\260\321\217 \321\201\321\202\321\200\320\276\320\272\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MenuWidget", "\320\222\320\260\321\210\320\265 \320\270\320\274\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWidget: public Ui_MenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWIDGET_H
