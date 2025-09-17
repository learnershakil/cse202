#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    // length and size
    cout << "Length: " << str.length() << endl;
    cout << "Size: " << str.size() << endl;

    // max_size and capacity
    cout << "Max size: " << str.max_size() << endl;
    cout << "Capacity: " << str.capacity() << endl;

    // reverse
    string rev = str;
    reverse(rev.begin(), rev.end());
    cout << "Reversed: " << rev << endl;

    // append
    str.append(" C++");
    cout << "After append: " << str << endl;

    // insert
    str.insert(7, "beautiful ");
    cout << "After insert: " << str << endl;

    // erase
    str.erase(7, 10); // remove "beautiful "
    cout << "After erase: " << str << endl;

    // replace
    str.replace(7, 5, "amazing");
    cout << "After replace: " << str << endl;

    // find
    size_t pos = str.find("World");
    if (pos != string::npos)
        cout << "\"World\" found at: " << pos << endl;

    // rfind
    pos = str.rfind("l");
    if (pos != string::npos)
        cout << "Last 'l' found at: " << pos << endl;

    // swap
    string other = "Goodbye!";
    cout << "Before swap: str = " << str << ", other = " << other << endl;
    str.swap(other);
    cout << "After swap: str = " << str << ", other = " << other << endl;

    // clear
    str.clear();
    cout << "After clear: str = \"" << str << "\"" << endl;

    // empty
    cout << "Is str empty? " << (str.empty() ? "Yes" : "No") << endl;

    return 0;
}