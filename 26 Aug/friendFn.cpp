#include<iostream>
using namespace std;
class Sample{
    int x;
    public:
    int y;
    void setx(){
        cout<<"Enter x and y: ";
        cin>>x>>y;
    }
    void getx(){
        cout<<"\nValue of x: "<<x<<" "<<y;
    }
    friend void updatex(Sample ob);
};
void updatex(Sample ob){
    ob.x=ob.x+10;
    ob.y=ob.y+10;
    cout<<"\nAfter update: "<<ob.x;
    cout<<"\nAfter update: "<<ob.y;
}
int main(){
    Sample ob;
    ob.setx();
    ob.getx();
    updatex(ob);
}