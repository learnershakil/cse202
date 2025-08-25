#include <iostream>
using namespace std;

// circle
double area(double radius) {
    return 3.14159 * radius * radius;
}

// rectangle
double area(double length, double width) {
    return length * width;
}

int main() {
    double r, l, w;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle: " << area(r) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    cout << "Area of rectangle: " << area(l, w) << endl;

    return 0;
}