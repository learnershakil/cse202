#include <iostream>
using namespace std;

class waterBill {
    int *units;
    int total;
public:
    waterBill(int u) {
        units = new int;
        *units = u;
        total = 0;
    }

    void calculateBill() {
        if (*units <= 10)
            total = (*units) * 5;
        else if (*units <= 20)
            total = (10 * 5) + ((*units - 10) * 8);
        else
            total = (10 * 5) + (10 * 8) + ((*units - 20) * 10);
    }

    void display() {
        cout << "Units Consumed: " << *units << endl;
        cout << "Total Bill: " << total << endl;
    }

    ~waterBill() {
        delete units;
    }
};

int main() {
    int u;
    cout << "Enter number of units consumed: ";
    cin >> u;
    waterBill wb(u);
    wb.calculateBill();
    wb.display();
    return 0;
}
