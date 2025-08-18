#include<iostream>
using namespace std;

class CarRental {
    string carModel;
    float perDayRent;
    int days;

public:
    void read() {
        cout << "Enter Car Model: ";
        cin >> carModel;
        cout << "Enter Per Day Rent: ";
        cin >> perDayRent;
        cout << "Enter Number of Days: ";
        cin >> days;
        cout << endl;
    }

    void display() {
        cout << "Car Rental Info:\n";
        cout << "Car Model: " << carModel << endl;
        cout << "Per Day Rent: " << perDayRent << endl;
        cout << "Number of Days: " << days << endl;
        cout << "Total Rent: " << calculateRent() << endl;
    }

    float calculateRent() {
        return perDayRent * days;
    }
};

int main() {
    CarRental ob;
    ob.read();
    ob.display();
    return 0;
}