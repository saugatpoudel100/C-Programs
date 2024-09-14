#include<iostream>
using namespace std ;
void volume();
int volume(int ,int, int);
int volume(int);
  
  void  volume(){
      int a,b;
     cout<<"enter a,b"<<endl;
     cin>>a>>b;
      cout<<"the volume of cylinder is :"<< 3.14 *a*a *b<<endl;
}

 int volume(int p, int q ,int r ) {
  return p*q*r;
}
int volume(int u){
    return u*u*u;
}
int main() {
  int x,y,h,l;
  cout<<"enter x,y,h,l"<<endl;
  cin>>x>>y>>h>>l;
  volume();
  //cout << "volume of cylinder: " << volume(x,h)<< "\n";
  cout << "volume of cuboid :" << volume(x,y,h)<< endl;
  cout << "volume of cube: " << volume(l);;
  return 0;
}