#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// === Symptom Checker ===
class SymptomChecker {
public:
    SymptomChecker() {
        diseases["Cold"] = {"cough", "sore throat", "runny nose"};
        diseases["Flu"] = {"fever", "cough", "body ache"};
        diseases["COVID-19"] = {"fever", "cough", "loss of taste"};
    }

    string diagnose(const vector<string>& symptoms) {
        string likelyDisease = "Unknown";
        int maxMatches = 0;
        
        // Use a loop without structured bindings
        for (auto it = diseases.begin(); it != diseases.end(); ++it) {
            int matchCount = countMatches(symptoms, it->second);
            if (matchCount > maxMatches) {
                maxMatches = matchCount;
                likelyDisease = it->first;
            }
        }
        return likelyDisease;
    }

private:
    unordered_map<string, vector<string>> diseases;

    int countMatches(const vector<string>& symptoms, const vector<string>& diseaseSymptoms) {
        int count = 0;
        for (const auto& symptom : symptoms) {
            // Use find from <algorithm> to check for matching symptoms
            if (std::find(diseaseSymptoms.begin(), diseaseSymptoms.end(), symptom) != diseaseSymptoms.end()) {
                count++;
            }
        }
        return count;
    }
};

// === Medicine Inventory ===
class MedicineInventory {
public:
    void addMedicine(const string& name, int quantity) {
        inventory[name] += quantity;
        cout << "Added " << quantity << " of " << name << " to inventory.\n";
    }

    void removeMedicine(const string& name, int quantity) {
        if (inventory[name] >= quantity) {
            inventory[name] -= quantity;
            cout << "Removed " << quantity << " of " << name << " from inventory.\n";
        } else {
            cout << "Not enough stock of " << name << ".\n";
        }
    }

    int checkMedicine(const string& name) const {
        auto it = inventory.find(name);
        if (it != inventory.end()) {
            return it->second;
        }
        return 0;
    }

private:
    unordered_map<string, int> inventory;
};

// === Appointment Scheduler ===
class AppointmentScheduler {
public:
    void scheduleAppointment(const string& name, const string& date) {
        appointments.push_back({name, date});
        cout << "Scheduled appointment for " << name << " on " << date << ".\n";
    }

    void showAppointments() const {
        cout << "Appointments:\n";
        for (const auto& appt : appointments) {
            cout << appt.name << " on " << appt.date << "\n";
        }
    }

private:
    struct Appointment {
        string name;
        string date;
    };
    vector<Appointment> appointments;
};

// === Main Function ===
int main() {
    SymptomChecker symptomChecker;
    MedicineInventory medicineInventory;
    AppointmentScheduler appointmentScheduler;

    int choice;
    do {
        cout << "\n--- Simple Healthcare Assistant ---\n";
        cout << "1. Diagnose Symptoms\n";
        cout << "2. Manage Medicine Inventory\n";
        cout << "3. Schedule Appointment\n";
        cout << "4. View Appointments\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            int symptomCount;
            cout << "Enter number of symptoms: ";
            cin >> symptomCount;
            vector<string> symptoms(symptomCount);
            cout << "Enter symptoms:\n";
            for (int i = 0; i < symptomCount; ++i) {
                cin >> symptoms[i];
            }
            cout << "Diagnosis: " << symptomChecker.diagnose(symptoms) << "\n";

        } else if (choice == 2) {
            int action;
            cout << "1. Add Medicine\n2. Remove Medicine\n3. Check Medicine\nChoose action: ";
            cin >> action;

            string name;
            int quantity;
            if (action == 1) {
                cout << "Enter medicine name and quantity to add: ";
                cin >> name >> quantity;
                medicineInventory.addMedicine(name, quantity);
            } else if (action == 2) {
                cout << "Enter medicine name and quantity to remove: ";
                cin >> name >> quantity;
                medicineInventory.removeMedicine(name, quantity);
            } else if (action == 3) {
                cout << "Enter medicine name to check: ";
                cin >> name;
                cout << name << " stock: " << medicineInventory.checkMedicine(name) << " units\n";
            }

        } else if (choice == 3) {
            string name, date;
            cout << "Enter appointment name and date (DD/MM/YYYY): ";
            cin >> name >> date;
            appointmentScheduler.scheduleAppointment(name, date);

        } else if (choice == 4) {
            appointmentScheduler.showAppointments();

        } else if (choice != 0) {
            cout << "Invalid choice, try again.\n";
        }

    } while (choice != 0);

    cout << "Exiting Healthcare Assistant.\n";
    return 0;
}
