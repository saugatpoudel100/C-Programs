#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    void getdata(){
        cout<<"enter value:"<<endl;
        cin>>a>>b;

    }
    friend void sum (A c);
};
void sum (A c){
    int sum;
    sum=c.a+c.b;
    cout<<"sum:"<<sum<<endl;
}

int main(){
    A c;
    c.getdata();
    sum(c);
}