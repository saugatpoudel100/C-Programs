#include<iostream>
using namespace std;

float findarea(float r){
  
    return ((3.14)*r*r);
}

int main(){
    float r, area;
    cin>>r;
    area=findarea(r);
   cout<<"area of circle is :"<<area<<endl;
    return 0;
}