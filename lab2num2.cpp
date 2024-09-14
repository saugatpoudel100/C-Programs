#include<iostream>
using namespace std;

  inline int max_num(int x,int y,int z){
     if(x>y&&x>z)
     return (x);
     else if (y>z)
     return (y);
     else 
     return(z);
     }
  
  int main(){
      int x,y,z;
      cin>>x>>y>>z;
      cout<<"greatest of (x,y,z)"<<max_num(x,y,z)<<endl;
      return 0;
  }