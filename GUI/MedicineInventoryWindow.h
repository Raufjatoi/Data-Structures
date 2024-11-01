// MedicineInventoryWindow.h
#include <QWidget>
#include "MedicineInventory.h"

class MedicineInventoryWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MedicineInventoryWindow(QWidget *parent = nullptr);

private slots:
    void on_addMedicineButton_clicked();
    void on_removeMedicineButton_clicked();
    void on_checkMedicineButton_clicked();

private:
    MedicineInventory medicineInventory;
};
