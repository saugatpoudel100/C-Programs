#include<iostream>
using namespace std;
template<class T>

 class Demo{
    T x;
    public:
    Demo(T p)
    {
        x=p;
    }
    void show (){
        cout<<x<<endl;

    }
 };
 int main(){
    Demo<char *> p1("GCES");
    Demo<char> p2 ('A');
    Demo <int> p3 (12);
    Demo <float> p4 (2.5);
    p1.show();
    p2.show();
    p3.show();
    p4.show();
    return 0;


 }