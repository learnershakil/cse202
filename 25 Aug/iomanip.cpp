#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int b = 8;
    // cout<<setbase(8)<<b<<endl;

    int c = 20;
    cout<<setw(5)<<c<<endl;
    cout<<setw(5)<<setfill('#')<<c<<endl;
}