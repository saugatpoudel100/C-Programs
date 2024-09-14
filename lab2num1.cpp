#include<iostream>
#include<cmath>
using namespace std;
 
inline int multiply(int a, int b)
 {
     int c;
     c=a*b;
     return c;

 }

 int main(){
  int a,b,mult;
  cout<<"enter a\n"<<"enter b"<<endl;
  cin>>a>>b;
  mult=multiply(a,b);
  cout<<mult<<endl;
  return 0;

 }