// test of class
#include<iostream>
using namespace std;
 
 class students{
   int id;
   float math,science,eng;
   char name[50];
    float totalmarks(){
        return (math+science+eng);
    }
    public:
        void setdata(){
            cout<<"enter id"<<endl;
            cin>>id;
            cout<<"enter math ,science,eng marks"<<endl;
            cin>>math>>science>>eng;
            cout<<"enter name"<<endl;
            cin>>name;

        }
        void getdata(){
            int t;
            cout<<"id="<<id<<endl;
            cout<<"marks"<<math<<endl<<science<<endl<<eng<<endl;;
            t=totalmarks();
            cout<<"total"<<t;
        }
 };
 int main(){
    students a;
    a.setdata();
    a.getdata();
 }