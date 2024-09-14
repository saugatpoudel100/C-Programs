// class subclass_name : access_mode base_class 
// { 
 //body of subclass 
// };


#include<iostream> 
using namespace std;

 class Room    //base class room
{ 
protected:
 float length, breadth; 
 public: 
 int area()
 {
 return(length*breadth);
 }
};
class BedRoom : public Room    //derived class  class subclass_name = bedroom : acess_mode =public baseclass=room
{ 
private:
float height; 
public: 
void setData(int l,int b, int h)
 { 
length=l; 
breadth=b; 
height=h; 
 }
 
 int volume()
 {
 return(length * breadth * height);
 } };
int main() {
 BedRoom b;                              //derived class ko object banaune
 b.setData(3,4,5); 
 cout<<"Area of bedroom= "<<b.area()<<endl; 
 cout<<"Volume of bedroom="<<b.volume();
}