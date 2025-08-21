#include<iostream>
using namespace std;

class MathUtils{
    public:
    static void add(int a, int b){
        cout<<"The sum of "<<a<<"and "<<b<<"is: "<<a+b;
    }
    static void sub(int a, int b){
        cout<<"\nThe subtraction of "<<a<<"and "<<b<<"is: "<<a-b;
    }
};

int main(){
    MathUtils::add(5,2);
    MathUtils::sub(5,2);
};