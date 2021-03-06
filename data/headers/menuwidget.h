#ifndef MENUWIDGET_H
#define MENUWIDGET_H

#include <QWidget>
#include "../headers/globals.h"
#include "../headers/inputwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MenuWidget; }
QT_END_NAMESPACE

// Класс окна нашего основного меню.
class MenuWidget : public QWidget {
    Q_OBJECT

public:
    MenuWidget(QWidget *parent = nullptr);
    ~MenuWidget(); 

signals:
    void sendValues(QString username,QString lang, QString type, QString execution_time);

private slots:
    void on_pushButton_main_start_clicked();
    void updateStats();

    void on_radioButton_spec_clicked();

    void on_radioButton_en_clicked();

    void on_radioButton_ru_clicked();

private:
    Ui::MenuWidget *ui;
    InputWidget *AnotherWindow;
    Globals *global;

    QString username;
    QString lang;
    QString type;
    QString execution_time;


};
#endif // MENUWIDGET_H
