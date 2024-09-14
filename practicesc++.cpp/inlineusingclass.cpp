//inline in class

#include<iostream>
using namespace std;

class demo {
    public:
    inline void display();
};

inline void demo :: display(){
    cout<<"Hello world";
} 

int main(){
    demo a;
    a.display();
}