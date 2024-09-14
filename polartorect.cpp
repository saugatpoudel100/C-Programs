#include<iostream>
#include<math.h>
using namespace std;
class rectangle{
    float x,y;
    public:
    rectangle(){

    }
    rectangle(float a,float b){
        x=a;
        y=b;
         }
         void display1(){
            cout<<"value of x and y is"<<x<<","<<y<<endl;
         }
};
class polar{
    float angle,radius;
    public:
    polar(){

    }
    polar(float An,float r){
        angle=An;
        radius=r;

    }
    void display(){
        cout<<"angle and radius is:"<<angle<<","<<radius<<endl;
    }
    operator rectangle(){
        float p,q;
        p=radius*cos(angle);
        q=radius*sin(angle);
        return rectangle(p,q);
    }

};
int main(){
    rectangle rec;
    polar p(1.2,3.23);
    rec=p;

    p.display();
    rec.display1();

}