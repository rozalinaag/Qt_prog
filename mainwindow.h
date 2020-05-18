#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <secondwindow.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_action_triggered();

    void on_action_3_triggered();

    void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
    Secondwindow *win;
};
#endif // MAINWINDOW_H
