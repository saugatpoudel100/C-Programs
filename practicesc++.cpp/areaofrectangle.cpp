// are of rectangle
#include<iostream>
using namespace std;

class rectangle{
    float length, breadth;
    public:
    void setdata(){
        cout<<"enter length and breadth"<<endl;
        cin>>length>>breadth;
    }

    void display(){
        float area;
        area=length*breadth;
        cout<<"the area of rectangle is:"<<area<<endl;
    }
};

int main(){
    rectangle a;
    a.setdata();
    a.display();
}