

#include<iostream>
using namespace std;
class Student                //class 1
{ 
protected: 
int roll; 
public:
 void setroll(int r)
 { 
roll=r;
 } 
 };


  class Test: public Student            //class 2 inherite the properties of class 1
{ 
protected:
 float sub1, sub2; 
public:
 void setmark(float m1, float m2)
 {
 sub1=m1; 
sub2=m2; 
 } };
 
  class Result : public Test        //class 3 inherite the properties of class 2
  { 
private:
   float total; 
public:
 void display()
 {
 total=sub1+sub2; 
 cout<<"Roll number= "<<roll<<endl; 
  cout<<"Mark in first subject= "<<sub1<<endl; 
  cout<<"Mark in second subject= "<<sub2<<endl; 
  cout<<"Total= "<<total;
 } 
};
 int main()
{
 int r; 
 float s1,s2; 
 cout<<"Enter roll number"<<endl; 
cin>>r;
 cout<<"Enter marks in two subject"<<endl; 
cin>>s1>>s2;
 Result res; 
 res.setroll(r); 
res.setmark(s1,s2); 
res.display(); 
}