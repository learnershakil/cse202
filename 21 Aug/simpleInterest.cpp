#include<iostream>
using namespace std;

class SimpleInterestCalculator {
public:
    static double calculate(double principal, double rate, double time) {
        return (principal * rate * time) / 100.0;
    }
};

int main() {
    double principal = 5000;
    double rate = 5; 
    double time = 1; 

    // class name se call krte hue
    double interest1 = SimpleInterestCalculator::calculate(principal, rate, time);
    cout << "Simple Interest (class name use krte hue): " << interest1 << " INR" << endl;

    // Object se call karte hue
    SimpleInterestCalculator sic;
    double interest2 = sic.calculate(principal, rate, time);
    cout << "Simple Interest (object use krte hue): " << interest2 << " INR" << endl;

    // directly call krte hue
    cout << "Simple Interest (direct call krte hue): " << SimpleInterestCalculator::calculate(principal, rate, time) << " INR" << endl;

    return 0;
}