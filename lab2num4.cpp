#include<iostream>
using namespace std;

  inline float kg (float pounds ){
      return (pounds*0.453592);
   
     }
  
  int main(){
      float pounds;
      cin>> pounds;
      cout<<"the pounds to kg is : :"<<kg (  pounds )<<endl;
      return 0;
  }