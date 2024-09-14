#include <iostream>
using namespace std;
class Student
{
  string sname;
  int marks_arr[5];
  int total;
  int tmax;
  int avg;
  
public:
  Student(){
    sname="";
    total=0;
    avg=0;
    tmax=0;
  }
  
  int assign(){
    cout << "Enter your name: ";
    cin >> sname;
    for(int i=0;i<5;i++){
      cout << "Marks in subject:" << i:  ;
      cin >> marks_arr[i];
      if(marks_arr[i]>=tmax){
	   tmax=marks_arr[i];
      }
      
    }
   return 0;
  }
  int compute(){
    for (int i=0;i<5;++i){
      total=total+marks_arr[i];
    }
    avg=total/5.0;
    return 0;
  }
  
  void display(){
    cout << "Total: " << total << endl;
    cout<<"Average:"<<avg<<endl;
    cout << "Tmax: " << tmax <<endl;
    
  }
  
};
int main()
{
  Student o;
  o.assign();
  o.compute();
  o.display();
  return 0;
}
