#include <iostream>

using namespace std;

void getarea();  
int main()
{
    getarea(); 
  
}
void getarea(){  
    int length,breadth;
     cout<<"Enter the length and breadth"<<endl;
     cin>>length>>breadth;                                  
      cout<<"The area is = "<<length*breadth<<endl;;         
}