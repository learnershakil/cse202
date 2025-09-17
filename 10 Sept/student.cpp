#include<iostream>
using namespace std;

class Student{
    int roll;
    float marks;
    public:
    Student& getdata(int roll, float marks){
        this->roll = roll;
        this->marks = marks;
        return *this;
    }
    void display(){
        cout << "roll: " << roll << " Marks: " << marks;
    }
};

int main(){
    Student obj;
    obj.getdata(10, 56).display();
}