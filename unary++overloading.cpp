// ++prefix unary operator overloading


#include <iostream>
using namespace std;
class index
{
public:
    int count;
    void getdata(int i)
    {
        count = i;
    }
    void showdata()
    {
        cout << "count=" << count << endl;
    }
    void operator++()
    {
        ++count;
    }
};
int main()
{
    index a1;
    a1.getdata(3);
    a1.showdata();
    ++a1;
    a1.showdata();
    ++a1;
    a1.showdata();
    return 0;
}
