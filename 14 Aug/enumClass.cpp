#include<iostream>
using namespace std;

enum class color{
    red,green,yellow
};

enum class trafficLight{
    red,green,yellow
};

int main(){
    color c=color::green;
    cout<<(int)c;
};