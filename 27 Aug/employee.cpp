// Employee and HR

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employee_id;
    double salary;
public:
    Employee(string n, int id, double sal) : name(n), employee_id(id), salary(sal) {}

    void display() {
        cout << "Name: " << name << ", ID: " << employee_id << ", Salary: " << salary << endl;
    }

    friend class HR;
};

class HR {
public:
    void giveAppraisal(Employee &e, double percent) {
        e.salary += e.salary * percent / 100.0;
        cout << "Appraisal given. New Salary: " << e.salary << endl;
    }
};

int main() {
    Employee emp("Alice", 101, 50000);
    HR hr;
    emp.display();
    hr.giveAppraisal(emp, 10);
    emp.display();
    return 0;
}