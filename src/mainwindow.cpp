#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *e)
{
    int width = this->width();
    int height = this->height();
    ui->frame->setGeometry(0,0,width*2/3,height);
    ui->toolBox->setGeometry(width*2/3,0,width-width*2/3,height);
}

