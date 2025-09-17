#include <iostream>
using namespace std;

class Account {
    string name;
    int amount, age;
public:
    Account(string n, int a, int ag) {
        name = n;
        amount = a;
        age = ag;
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Amount: " << amount << endl;
    }
};

int main() {
    Account acc("John Doe", 5000, 30);
    acc.show();
    return 0;
}