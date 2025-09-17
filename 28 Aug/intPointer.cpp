#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    cout<<arr[0]<<endl;
    cout<<arr<<" "<<&arr[0]<<" "<<*arr<<endl;
    cout<<*(arr+1)<<endl;

    cout<<"Array elements: \n";
}