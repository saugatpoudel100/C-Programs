#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    char  name[30];
    float salary;

public:
    void setName(char *n)
    {
        strcpy(name, n);
    }
    void setSalary(float s)
    {
        salary = s;
    }
    char *getName()
    
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
};
class Manager : public Employee
{
private:
    char section_name[50];

public:
    void setSection_name(char *sn)
    {
        strcpy(section_name, sn);
    }
    char *getSection_name()
    {
        return section_name;
    }
};
class Supervisor : public Employee
{
private:
    int group_id;

public:
    void setGroup_id(int gid)
    {
        group_id = gid;
    }
    int getGroup_id()
    {
        return group_id;
    }
};

int main()
{
    Manager m;
    m.setName("Tara Bahadur Thapa");
    m.setSalary(50000);
    m.setSection_name("Accounts");
    cout << "Name= " << m.getName() << endl;
    cout << "Salary= " << m.getSalary() << endl;
    cout << "Section= " << m.getSection_name() << endl;
    Supervisor s;
    s.setName("Abhigya Thapa");
    s.setSalary(40000);
    s.setGroup_id(5);
    cout << "Name= " << s.getName() << endl;
    cout << "Salary= " << s.getSalary() << endl;
    cout << "Group ID= " << s.getGroup_id() << endl;
}