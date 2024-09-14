#include<iostream>
using namespace std;
class time1;
class time{
    int hours,minutes,seconds;
    public:
    void input(){
        cout<<"enter hours"<<endl;
        cin>>hours;
        cout<<"enter minutes"<<endl;
        cin>>minutes;
        cout<<"enter seconds"<<endl;
        cin>>seconds;

       }
       friend void add(time x,time1 y);
};
class time1{
    int hours1,minutes1,seconds1;
    public:
    void input(){
        cout<<"enter hours"<<endl;
        cin>>hours1;
        cout<<"enter minutes"<<endl;
        cin>>minutes1;
        cout<<"enter seconds"<<endl;
        cin>>seconds1;

       }
       friend void add(time x,time1 y);
};
  void add(time x,time1 y){
      int h,s,m;
      h=x.hours+y.hours1;
      m=x.minutes+y.minutes1;
      s=x.seconds+y.seconds1;
      cout<<"the hours is:"<<h<<endl;
      cout<<"the minutes is:"<<m<<endl;
      cout<<"the seconds is:"<<s<<endl;
      }
    
    int main(){
        time x;
        time1 y;
        x.input();
        y.input();
        add(x,y);
        return 0;
    }