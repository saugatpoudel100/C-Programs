// defult arguments int area(int a,int b=80)  int b=80(default value)
#include<iostream>
using namespace std;


int main(){
int divide(int a,int b=6);
cout<<divide(12)<<endl;
cout<<divide(10,2);
return 0;
}

int divide (int a ,int b){
    int r;
    r=a/b;
    return r;
}