#include<iostream>
#include<string.h>
using namespace std;
class person{
    char name[30], address[30];
    int age, citizenship_number;
    public:
    person( char n[],char d[],int a,int c){
        strcpy(name,n);
        strcpy(address,d);
        age=a;
        citizenship_number=c;

    }
     void showdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"address:"<<address<<endl;
        cout<<"citizenship number:"<<citizenship_number<<endl;


     }


};

int main(){
    // person x("saugat","pokhara",18,2345);
    char n[30],d[30];
    int a,c;
    cout<<"enter name"<<endl;
    cin>>n;
    cout<<"enter address"<<endl;
    cin>>d;
    cout<<"enter age"<<endl;
    cin>>a;
    if(a>16){
        cout<<"enter citizenship number:"<<endl;
    cin>>c;
    }
    person x(n,d,a,c);
    x.showdata();

}
