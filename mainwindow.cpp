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

void MainWindow::on_btnSelectSource_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(
        this,
        "Select Source File",
        QString(),                  // Start in default dir
        "All Files (*.*)"           // File filter
        );

    if (!filePath.isEmpty()) {
        ui->txtFilePath->setText(filePath);
    }
}
