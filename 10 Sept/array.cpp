#include<iostream>
using namespace std;

class Array{
    int* a;
    int n;
    public:
    void getdata(){
        cin >> n;
        a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    }
    int search(int num){
        for(int i=0;i<n;i++){
            if(num == a[i]) return i;
        }
        return -1;
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }   
};

int main(){
    Array arr;
    arr.getdata();
    arr.display();
    cout<<arr.search(4);
}