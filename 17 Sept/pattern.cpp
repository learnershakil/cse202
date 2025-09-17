#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < t; i++) {
        for(int j = arr[i]; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}
