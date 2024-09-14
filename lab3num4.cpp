#include<iostream>
using namespace std;

class large{
    public:
    int a,b;
    void get(){
        cout<<"enter two number"<<endl;
        //cin>>a>>b;
     
    }
    void put(){
        cin>>a>>b;
    }
    void largest(){
        if(a>b){
            cout<<"a is largest"<<endl;
            }
            else {
                cout<<"b is largest"<<endl;
            }

    }
    
};
int main(){
    large largenum;
    largenum.get();
    largenum.put();
    largenum.largest();
    return 0;
}