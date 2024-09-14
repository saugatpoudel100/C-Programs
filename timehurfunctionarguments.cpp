#include<iostream>
using namespace std;
class time{
    int hours,minute;
    public:
    void gettime(){
        cout<<"enter hours and minute"<<endl;
        cin>>hours>>minute;

    }
    void add(time a,time b){
        minute=a.minute+b.minute;
        

    }
};