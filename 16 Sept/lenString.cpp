#include <iostream>
using namespace std;

int main() {
    char str[1000];
    cout << "Enter a string: ";
    cin.getline(str, 1000);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of the string: " << length << endl;
    return 0;
}