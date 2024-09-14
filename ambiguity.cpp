// ambiguity error
// multiple inheritance

// erro fix garna ko lagai last ma hami le 
//   object.classA::function_name(arguments)
// object.classB::function_name(arfuments)




#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void getdata(int x){
      a=x;

    }
};
class B:public A{
   int  b;
   public:
   void getdata(int x){
    b=x;
   }
   void sum(){
    int sum;
    sum=a+b;
    cout<<"the sum is:"<<sum<<endl;
   }
};
int main(){
    B p;
    p.A::getdata(3);
    p.B::getdata(4);
    p.sum();
}