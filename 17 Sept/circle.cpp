#include <iostream>
using namespace std;
#define PI 3.14159

class Circle {
    double radius;
public:
    void getRadius() {
        cout << "Enter radius: ";
        cin >> this->radius;
    }
    void printArea() {
        double area = PI * this->radius * this->radius;
        cout << "Area: " << area << endl;
    }
    void printPerimeter() {
        double perimeter = 2 * PI * this->radius;
        cout << "Perimeter: " << perimeter << endl;
    }
};

int main() {
    Circle c;
    c.getRadius();
    c.printArea();
    c.printPerimeter();
    return 0;
}