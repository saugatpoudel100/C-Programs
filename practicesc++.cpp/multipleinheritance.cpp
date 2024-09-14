// Syntax:
// class subclass_name : access_mode base_class1, access_mode base_class2, .... 
// { 
 //body of subclass 
// };
// in this cas class 3 inherited the character of class 1 and class 2
  

//   ex ::  class class3 :public class1,public class2{}

#include<iostream>
using namespace std;
class class1
{
 protected: 
int n; 
public:
 void getn(int p)
 {
 n=p;
 }
};
class class2
{
 protected: 
int m;
 public: 
 
void getm(int q)
 { 
m=q;
 }
};
class class3: public class1, public class2
{
 public: 
void displaytotal() 
 {
 int tot;
  tot=n+m; 
cout<<"Sum ="<<tot;
 }
};
int main()
{
 class3 a;
 a.getm(4);
 a.getn(5);
 a.displaytotal(); 
}
