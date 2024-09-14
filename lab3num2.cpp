#include<iostream>
using namespace std;

 class circle 
 {
    
    
    public:
    int radius,tarea;
    void  getradius(){
      cout<<"enter a radius"<<endl;
      cin>>radius;

    
    }
   void  area(){
        tarea=3.14*radius*radius;
       
         }
         void printarea(){
             cout<<"area is:"<<tarea<<endl;
         }
    
 };

  int main(){
      circle ca;
      ca.getradius();
      ca.area();
      ca.printarea();
      
    
      return 0;
  }