// add the real and imaginary  part of function

#include<iostream>
using namespace std;
 class complex{
    int x ,y;
    public:
    void input(int real , int img){
       x=real;
       y=img;
    }
    complex sum (complex c1,complex c2){
        complex c3;
        c3.x=c1.x+c2.x;
        c3.y=c1.y+c1.y;
        return c3;
    }
    void showdata(){
        cout<<"real="<<x<<endl;
        cout<<"img="<<y<<endl;
    }
 };
 int main(){
    complex a,b,c;
    a.input(2,2);
    b.input(8,4);
    c=c.sum(a,b);
    c.showdata();

 }