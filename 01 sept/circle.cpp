#include<iostream>
#include<iomanip>
using namespace std;

struct circle{
    double radius;
};

int main(){
    circle c;
    cin>>c.radius;
    double area=3.14*c.radius*c.radius;
}