#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void tick();

private:
    Ui::MainWindow *ui;

    QTimer *p_myTimer;
    QDateTime myDate;
    QString qsTemp;
};

#endif // MAINWINDOW_H
