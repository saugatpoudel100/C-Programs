#include<iostream>
using namespace std ;
void area();
double area(double,double);
double area(double);

void area() {
    int a;
    cout<<"enter side :"<<endl;
    cin>>a;
  cout<<"the area of square is :"<<a*a<<endl;
}

double area(double x, double y) {
  return 2*(x + y);
}
double area(double r){
    return 3.14*r*r;
}
int main() {
  double x,y,r;
  cout<<"enter the value of x y r"<<endl;
  cin>>x>>y>>r;
  area();
  cout<<"the area of rectangle is :"<< area(x,y)<<endl;
  cout<<"the area of circle is :"<<area(r)<<endl;
  return 0;

}