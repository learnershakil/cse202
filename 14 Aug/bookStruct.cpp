#include<iostream>
using namespace std;

struct book {
    int id;
    string name;
    float price;

    void read() {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Name: ";
        cin >> name;
        cout << "Enter Book Price: ";
        cin >> price;
        cout << endl;
    }

    void display() {
        cout << "Book info:\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int findMaxPriceBook(book books[], int n) {
    int maxIdx = 0;
    for(int i = 1; i < n; ++i) {
        if(books[i].price > books[maxIdx].price)
            maxIdx = i;
    }
    return maxIdx;
}

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    book books[n];

    for(int i = 0; i < n; ++i) {
        cout << "Book " << i+1 << ":\n";
        books[i].read();
    }

    cout << "\nAll Books:\n";
    for(int i = 0; i < n; ++i) {
        books[i].display();
        cout << endl;
    }

    int maxIdx = findMaxPriceBook(books, n);
    cout << "Book with maximum price:\n";
    books[maxIdx].display();

    return 0;
}