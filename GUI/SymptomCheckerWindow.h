// SymptomCheckerWindow.h
#include <QWidget>
#include <QVector>
#include "SymptomChecker.h"

class SymptomCheckerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SymptomCheckerWindow(QWidget *parent = nullptr);

private slots:
    void on_diagnoseButton_clicked();

private:
    SymptomChecker symptomChecker;
};
