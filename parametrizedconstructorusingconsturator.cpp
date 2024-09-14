
#include <iostream>
using namespace std;
class A // Base class
{
protected:
    int a;
    A(int x) // Base class constructor with one argument(x)
    {
        a = x;
        cout << "Constructor : Class A : value : " << a << endl;
    }
};
class B : public A // Derived class B from base class A
{
protected:
    int b;

public:
    // derived class constructor passing arguments(y, z)
    // y is used in derived class and z is passed base class A
     B(int y, int z) : A(z)
    {
        b = y;
        cout << "Constructor : Class B value : " << b << endl;
    }
};
int main()
{
    // derived class object passing arguments to derived & base class

    B obj(5, 3);
}