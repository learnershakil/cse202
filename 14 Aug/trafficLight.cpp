#include<iostream>
using namespace std;

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    TrafficLight signal;
    int choice;
    cout << "Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ";
    cin >> choice;

    signal = static_cast<TrafficLight>(choice);

    if(signal == GREEN) {
        cout << "Go" << endl;
    } else if(signal == RED) {
        cout << "Stop" << endl;
    } else if(signal == YELLOW) {
        cout << "Wait" << endl;
    } else {
        cout << "Invalid input." << endl;
    }

    return 0;
}
