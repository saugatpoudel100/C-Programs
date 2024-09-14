// multilevel inheritance

#include<iostream>
using namespace std;
class A{
    public:
    int roll;
    void setroll(int r){
    roll=r;

     }


};
class B:public A{
    public:
    float sub1,sub2;
    void setmarks(float p,float q){
        sub1=p;
        sub2=q;

    }

};
class C :public B{
        public:
        float total;
        string name="sauugat";
        void display(){
            int t;
            cout<<"name:"<<name<<endl;
            t=sub1+sub2;
            cout<<"roll number:"<<roll<<endl;
            cout<<"total marks:"<<t<<endl;
        }

};
int main(){
    C c;
    c.setroll(4);
    c.setmarks(99,90);
    c.display();


}