// MainWindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "SymptomCheckerWindow.h"
#include "MedicineInventoryWindow.h"
#include "AppointmentSchedulerWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_diagnoseButton_clicked()
{
    SymptomCheckerWindow *symptomWindow = new SymptomCheckerWindow(this);
    symptomWindow->show();
}

void MainWindow::on_medicineButton_clicked()
{
    MedicineInventoryWindow *medicineWindow = new MedicineInventoryWindow(this);
    medicineWindow->show();
}

void MainWindow::on_appointmentButton_clicked()
{
    AppointmentSchedulerWindow *appointmentWindow = new AppointmentSchedulerWindow(this);
    appointmentWindow->show();
}
