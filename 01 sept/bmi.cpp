#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class HealthProfile{
    public:
    string name;
    int age;
    double height;
    double weight;
    void displayProfile(HealthProfile p){
        double bmi=weight/(height*height);
        cout<<"BMI: "<<fixed<<setprecision(2)<<bmi;
    }
};

int main(){
    HealthProfile learner;
    learner.name = "shakil";
    learner.age = 21;
    learner.height = 1.75;
    learner.weight = 62;
    learner.displayProfile(learner);
}