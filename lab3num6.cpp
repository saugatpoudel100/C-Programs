#include<iostream> 
using namespace std;
class employee{
    string name;
    string adress; 
    int phone;
    int salary;
    int tax;
    int Net_salary;
    int calculate(int a,int b){
        
        Net_salary = a - b;
        return Net_salary;
    };
    public:
    void input()
    
    {
    cout<<"Enter the name:"<<endl;
    cin>>name;
    cout<<"Enter the adress:"<<endl;
    cin>>adress; 
    cout<<"Enter the phone number :"<<endl;
    cin>>phone;
    cout<<"Enter the salary:"<<endl;
    cin>>salary;
    cout<<"Enter the tax amount employee pays:"<<endl;
    cin>>tax;
     
    }
    void output(){
    
    cout<<"The name is : "<<name<<endl;
    cout<<"\tThe adress is : "<<adress<<endl;
    cout<<"\tThe phone number is :"<<phone<<endl;
    cout<<"\tThe salary is : "<<salary<<endl;
    cout<<"\tThe tax amount paid  is : "<<tax<<endl;
    cout<<"\tThe net Salary of the employee is : "<<calculate(salary,tax);

    cout<<endl;
    
    }
};
int main(){

employee e;

e.input();
e.output();
}