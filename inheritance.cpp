#include <iostream>
using namespace std ;

class A{
    public:
    int a;
    void input(){
        cout<<"enter a"<<endl;
        cin>>a;
    }

};

class B : public A {
    public:
    void display(){
        cout<<"The number is "<<a<<endl;
    }
};

int main(){
    B x;
    x.input();
    x.display();
    return 0;

}