#include<iostream>
using namespace std;

class sample{
    int x,y;
    public:
    void input(){
        cout<<"enter a number"<<endl;
        cin>>x>>y;

    }
    friend void mean (sample s);

};
void mean(sample s){
    int a=(s.x+s.y)/2;
    cout<<"The mean value is :"<<a<<endl;
}
int main(){
    sample t;
    t.input();
    mean(t);
    return 0;
}