#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Fill VE Table
    ui->tableWidget_ve->setRowCount(5);
    ui->tableWidget_ve->setColumnCount(5);
    for(int row = 0; row < 5; ++row) {
        for(int col = 0; col < 5; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(QString::number(row*col));
            ui->tableWidget_ve->setItem(row, col, item);
        }
    }

    // Fill Ignition Table
    ui->tableWidget_ignition->setRowCount(5);
    ui->tableWidget_ignition->setColumnCount(5);
    for(int row = 0; row < 5; ++row) {
        for(int col = 0; col < 5; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(QString::number(row+col));
            ui->tableWidget_ignition->setItem(row, col, item);
        }
    }

    // Write to Logs
    ui->textEdit_logs->append("Application started.");
    ui->textEdit_logs->append("VE and Ignition tables populated.");
}

MainWindow::~MainWindow()
{
    delete ui;
}
