//inline function

#include<iostream>
using namespace std;
int cube(int x);

int main(){

    cout<<cube(5);
    return 0;
}
inline int cube(int x){
    
    return x*x*x;
}