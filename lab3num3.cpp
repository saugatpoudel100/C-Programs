#include<iostream>
using namespace std;

class square{
    public:
    int length,tarea,tperimeter;
    void getlength(){
        cout<<"enter a length"<<endl;
        cin>>length;
}
    
    void area(){
        tarea=length*length;
    }
    void printarea(){
        cout<<"the area is :"<<tarea<<endl;
    }
    void perimeter(){
        tperimeter =4*length;
    }
    void printperimeter(){
        cout<<"the perimeter is :"<<tperimeter<<endl;
    }
};
int main(){
    square sq;
    sq.getlength();
    sq.area(); 
    sq.printarea();
    sq.perimeter();
    sq.printperimeter();
    return 0;
}