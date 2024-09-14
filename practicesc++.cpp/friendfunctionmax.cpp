#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    void getdata(){
        cout<<"enter a"<<endl;
        cin>>a;
    }
    friend void max (A,B);
};
class B{
    int b;
    public:
    void getdata(){
        cout<<"enter b"<<endl;
        cin>>b;
    }
    friend void max(A,B);

};

void max (A p,B q){
    if(p.a>q.b){
        cout<<"a is max"<<endl;
    }
    cout<<"b is max"<<endl;
}

int main(){
    A  x;
    x.getdata();
    B y;
    y.getdata();
    max(x,y);
}