#include<iostream>
using namespace std;
int main(){
    int a=100;
    int* const ptr=&a;
    cout<<*ptr<<endl;
    *ptr=200;
    cout<<*ptr<<endl;

    int b=300;
}