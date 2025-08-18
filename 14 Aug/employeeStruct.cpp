#include<iostream>
using namespace std;

struct employee {
    int eid;
    string ename;
    float salary;

    void read() {
        cout << "Enter Employee ID: ";
        cin >> eid;
        cout << "Enter Employee Name: ";
        cin >> ename;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << endl;
    }

    void display() {
        cout << "Employee info:\n";
        cout << "ID: " << eid << endl;
        cout << "Name: " << ename << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    employee emp;
    emp.read();
    emp.display();
    return 0;
}