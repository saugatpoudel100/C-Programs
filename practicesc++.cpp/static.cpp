//static data member and static data functions

#include<iostream>
using namespace std;
 
 class demo{
    private:
    static int x;         //static data member
    static int y;
    public:
    static void display(){         //static data function
        cout<<"value of x:"<<x<<endl;
        cout<<"value of y:"<<y<<endl;
    }

 };

 int demo :: x=10;
 int demo :: y=20;

 int main(){
    demo a;               
    a.display();//acessing class name with object name
    demo ::display();     //acessing  class name with class name
 }

 