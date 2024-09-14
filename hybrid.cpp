#include <iostream>
using namespace std;
class Student
{
private:
    int roll;

public:
    void setroll()
    {
        cout << "Enter roll number" << endl;
        cin >> roll;
    }
    void showroll()
    {
        cout << "Roll= " << roll << endl;
    }
};
class Test : public Student
{
protected:
    float com, eng;

public:
    void setmark()
    {
        cout << "Enter marks of computer and English " << endl;
        cin >> com >> eng;
    }
    void showmark()
    {
        cout << "Computer= " << com << endl;
        cout << "English= " << eng << endl;
    }
};
class Sport
{
protected:
    float score;

public:
    void setscore()
    {
        cout << "Enter score in sports " << endl;
        cin >> score;
    }
    void showscore()
    {
        cout << "Score in sports= " << score << endl;
    }
};
class Result : public Test,public Sport
{
private:
    float tot;

public:
    void showtotal()
        
    {
        tot = com + eng + score;
        cout << "Total obtained marks = "<<tot<<endl;
    }
};
int main()
{
    Result res;
    res.setroll();
    res.setmark();
    res.setscore();
    res.showroll();
    res.showmark();
    res.showscore();
    res.showtotal();
}
