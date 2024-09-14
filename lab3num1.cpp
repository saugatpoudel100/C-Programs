#include <iostream>
using namespace std;
class myclass
{
    // Access specifier
    public:
 
    // Data Members
    string fullname;
 
    // Member Functions()
    void printname()
    {
       cout << "i am saugat " << fullname;
    }
};
 
int main() {
 
    // Declare an object of class myclass
    myclass obj1;
 
    // accessing data member
    obj1.fullname = "saugat";
 
    // accessing member function
    obj1.printname();
    return 0;
}