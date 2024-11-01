// MedicineInventoryWindow.cpp
#include "MedicineInventoryWindow.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

MedicineInventoryWindow::MedicineInventoryWindow(QWidget *parent) : QWidget(parent)
{
    auto *layout = new QVBoxLayout(this);

    QLineEdit *nameInput = new QLineEdit(this);
    QLineEdit *quantityInput = new QLineEdit(this);
    QPushButton *addButton = new QPushButton("Add Medicine", this);
    QPushButton *removeButton = new QPushButton("Remove Medicine", this);
    QPushButton *checkButton = new QPushButton("Check Medicine", this);
    QLabel *resultLabel = new QLabel(this);

    layout->addWidget(new QLabel("Medicine Name:", this));
    layout->addWidget(nameInput);
    layout->addWidget(new QLabel("Quantity:", this));
    layout->addWidget(quantityInput);
    layout->addWidget(addButton);
    layout->addWidget(removeButton);
    layout->addWidget(checkButton);
    layout->addWidget(resultLabel);

    connect(addButton, &QPushButton::clicked, [=]() {
        QString name = nameInput->text();
        int quantity = quantityInput->text().toInt();
        medicineInventory.addMedicine(name.toStdString(), quantity);
        resultLabel->setText("Added medicine.");
    });

    connect(removeButton, &QPushButton::clicked, [=]() {
        QString name = nameInput->text();
        int quantity = quantityInput->text().toInt();
        medicineInventory.removeMedicine(name.toStdString(), quantity);
        resultLabel->setText("Removed medicine.");
    });

    connect(checkButton, &QPushButton::clicked, [=]() {
        QString name = nameInput->text();
        int quantity = medicineInventory.checkMedicine(name.toStdString());
        resultLabel->setText("Stock: " + QString::number(quantity));
    });
}
