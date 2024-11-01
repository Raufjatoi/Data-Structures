// MainWindow.h
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_diagnoseButton_clicked();
    void on_medicineButton_clicked();
    void on_appointmentButton_clicked();

private:
    Ui::MainWindow *ui;
};
