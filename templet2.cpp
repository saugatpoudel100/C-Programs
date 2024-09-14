#include<iostream>
using namespace std;


//syntax
/*return_typeof_type_t Tfunction_name(Arguements of T)
{
    //body
}
*/

template<class T>

      void swap(T &f,T &s)
      {
                 T temp;
                 temp = f;
                 f=s;
                 s=temp;
      }
    
int main()
{

    string string1="Saugat";
    string string2="Poudel";
    std::cout<<"Before Swapping"<<std::endl;
    std::cout<<"name:"<<string1<<std::endl;
    std::cout << "name:" << string2 << std::endl;
    swap(string1,string2);
    std::cout<<"After Swapping"<<std::endl;
     std::cout<<"name:"<<string1<<std::endl; 
     std::cout<<"name:"<<string2<<std::endl;
return 0;
}