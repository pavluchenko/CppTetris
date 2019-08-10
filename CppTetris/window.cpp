#include "window.h"
#include "ui_mainwindow.h"

Window::Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

Window::~Window()
{
    delete ui;
}
