// SymptomCheckerWindow.cpp
#include "SymptomCheckerWindow.h"
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QStringList>

SymptomCheckerWindow::SymptomCheckerWindow(QWidget *parent) : QWidget(parent)
{
    auto *layout = new QVBoxLayout(this);

    QLabel *label = new QLabel("Enter symptoms (comma-separated):", this);
    QLineEdit *symptomInput = new QLineEdit(this);
    QPushButton *diagnoseButton = new QPushButton("Diagnose", this);
    QLabel *resultLabel = new QLabel(this);

    layout->addWidget(label);
    layout->addWidget(symptomInput);
    layout->addWidget(diagnoseButton);
    layout->addWidget(resultLabel);

    connect(diagnoseButton, &QPushButton::clicked, [=]() {
        QStringList symptoms = symptomInput->text().split(",");
        QVector<QString> symptomList;
        for (const auto& symptom : symptoms) {
            symptomList.push_back(symptom.trimmed());
        }
        
        QString diagnosis = QString::fromStdString(symptomChecker.diagnose(symptomList.toStdVector()));
        resultLabel->setText("Diagnosis: " + diagnosis);
    });
}
