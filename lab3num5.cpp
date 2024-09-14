#include<iostream>
using namespace std;
 
 class batsman{
     public:
     string name[5];
     int runs[5],nofours[5],nosixes[5];
     void initial(){
         cout<<" informatio of data "<<endl;
         for(int i=0;i<5;++i)
         {
            cout<<"enter name"<<endl;
            cin>>name[i];
             cout<<"enter runs"<<endl;
             cin>>runs[i];
             cout<<"enter nofours"<<endl;
             cin>>nofours[i];
             cout<<"enter nosixes"<<endl;
             cin>>nosixes[i];
         }
     }
     void display(){
         for(int i=0;i<5;++i){
             cout<<"Name of batsman:"<<name[i];
             cout<<"\t total number of runs:"<<runs[i];
             cout<<"\t total number of fours:"<<nofours[i];
             cout<<"\t total number of sixes:"<<nosixes[i]<<endl;
         }
     }
 };

   int main(){
       batsman b1;
       b1.initial();
       b1.display();
       return 0;
   }