#include <iostream>
using namespace std;

int main(){
    int n,mul;
    cout<<"Please enter a no.: ";
    cin>>n;
    for(int i=1; i<=10; i++){
        mul = n*i;
        cout<<n<<"x"<<i<<"="<<mul<<"\n";
    }
}