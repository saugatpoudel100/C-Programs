#include<iostream>
using namespace std;
class XYZ;
class ABC{
  int a;
  public:
  void input(){
      cout<<"enter a:"<<endl;
      cin>>a;

  }
  friend void max(ABC,XYZ);

};
class XYZ{
 int b;
 public:
 void input(){
     cout<<"enter b:"<<endl;
     cin>>b;
 }
 friend void max(ABC,XYZ);
};

void max(ABC x,XYZ y){
    if(x.a>y.b){
        cout<<"a is greater"<<endl;

    }
    else{
        cout<<"b is greatest"<<endl;
    }
}
int main(){
    ABC x;
    XYZ y;
    x.input();
    y.input();
    max(x,y);
    return 0;
}