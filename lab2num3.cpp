#include<iostream>
using namespace std;

  inline int centigrade (int fahrenheit ){
      return (((fahrenheit-32)*5/9));
   
     }
  
  int main(){
      int fahrenheit;
      cin>> fahrenheit;
      cout<<"the temperature in  centigrade is :"<<centigrade (fahrenheit )<<endl;
      return 0;
  }