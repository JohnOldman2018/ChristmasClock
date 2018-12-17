#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    p_myTimer = new QTimer;
    connect(p_myTimer, SIGNAL(timeout()), this, SLOT(tick()));
    p_myTimer->start(1000);

    tick();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::tick ()
{
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    QString text = time.toString();
    QString text1 = date.toString("dd:MM:yyyy");
    ui->lcdNumber->display(text1 + "\t\t" + text);
    qDebug() << date << time;
}
