    // Ambiguity/Problem with multiple inheritance
   //error can be solved by using object_name.class_name :: member function

#include<iostream>
using namespace std;
class class1
{ 
 protected: 
int a; 
public: 
 void get(int x)       //same name member function
 {
 a=x;
 }
 
};
class class2
{
 protected: 
 int b; 
public: void 
get(int x)        //same name member function
 {
 b=x;
 }
};
class class3: public class1, public class2
{
 public: 
void displaytotal()
 {
 cout<<"Total= "<<(a+b);
 } 
};
int main()
{
 class3 a;
 //a.get();// the request for get() is ambiguous as get() is defined in both class1 and class2 
a.class1::get(5);        
 a.class2::get(6);
 a.displaytotal();
}