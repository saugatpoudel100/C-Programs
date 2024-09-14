//function overlaoding
#include<iostream>
using namespace std;
int area(int);     //int = arguments return from int main in form of area(5)
int area(int,int);
int area(int,int,int);

int main(){
    cout<<area(5)<<endl;;
    cout<<area(5,6)<<endl;
    cout<<area(5,5,5)<<endl;
}
int area(int a){
    return a*a;                //same name but different arguments
}
int area(int a,int b ){
    return (a*b);
}
int area(int a,int b,int c)
{
    return (a*b*c);
}