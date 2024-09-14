// pass by value

#include<iostream>
using namespace std;
void swap(int,int);

int main(){
    int x,y;
    x=10;
    y=20;
    swap(x,y);
    cout<<x<<endl;;
    cout<<y<<endl;
    return 0;

}

void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
}