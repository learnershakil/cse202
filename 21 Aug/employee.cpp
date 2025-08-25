#include <iostream>
#include <string>
using namespace std;

void updateSalary(double &salary) {
    salary += 1000;
}

void displayinfo(string name,int id, double salary){
    cout << "\nEmployee Information:\n";
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Salary: " << salary << endl;
}

int main() {
    string name;
    int id;
    double salary;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter employee salary: ";
    cin >> salary;

    displayinfo(name,id,salary);

    char choice;
    cout << "\nDo you want to update salary? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        updateSalary(salary);
        cout << "\nUpdated Employee Information:\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }

    return 0;
}