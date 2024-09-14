#include <iostream>
#include<string>
using namespace std;

//Operator Overloading in c++

class Student

{
 string name;
 int a;
public:
Student(){
a = 10;

}

//Binary operator overloading

Student operator +(Student s)
{
Student temp;
temp.a = a+s.a;
return temp;
}


//Uniary operator overloading :

//prefix increment operator overloading :

//method 1:
Student operator ++()
{
   Student s;
   s.a = ++a;
   return s;
}

//method 2 :

// void operator ++()
// {
//                 a++;
// }
//prefix decrement operator overloading :

//method 1:
Student operator --()
{
                Student s;
                s.a = --a;
                return s;
}

//method 2 :

// void operator --()
// {
//                 a--;
// }

//postfix increment operator overloading :

//method 1:

Student operator ++ (int){
Student s;
                s.a = a++;
                return s;
}
//method 2 :

// void operator ++ (int){
// a++
// }

//postfix decrement operator oveloading :

//method 1:
Student operator --(int){
Student s;
                s.a = a--;
                return s;
}

//method 2 :

// void operator --(int){
// a--;
// }





void display(){
cout<<a<<endl;
}
};
int main()
{

Student s1,s2, s3;
//pretfix increment:
    ++s1;
   
   //prefix decrement:
   --s1;
   
   //ppostfix increment
   s2++;
   
   //postfix decrement:
   s2--;
   


        //uniary operator for adding 2 ojects;
s3 = s1 + s2;

s1.display();
s2.display();
s3.display();
    return 0;
}
