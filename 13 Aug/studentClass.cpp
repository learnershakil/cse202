#include<iostream>
using namespace std;
class student{
    string name;
    float marks;
    public:
        int roll;
    
    void getdata(){
        cout<<"Enter Your Roll no.:";
        cin>>roll;
        cout<<"Enter your Name:";
        cin>>name;
        cout<<"Enter Marks:";
        cin>>marks;
        cout<<endl;
    }

    void display(){
        cout<<"Student info:\n";
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
        cout<<"Marks:"<<marks<<endl;
    }

};

int main(){
    student ob;
    ob.getdata();
    ob.display();
};