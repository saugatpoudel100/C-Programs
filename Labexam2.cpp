#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
class Complex {
    private:
        int real, imag;
    public:
    Complex(){
        real = 0;
        imag = 0;    
    }
    Complex (int r, int i){
        real = r;
        imag = i;
    }
    string display(){
        stringstream ss;
        if(imag >= 0)
            ss << "(" << real << " + " << imag << "i)";
        else
            ss << "(" << real << " - " << abs(imag) << "i)";
        return ss.str();
    }
    Complex operator+(Complex c2){
        Complex ret;
        ret.real = real + c2.real;
        ret.imag = imag + c2.imag;
        return ret;
    }
    Complex operator-(Complex c2){
        Complex ret;
        ret.real=real-c2.real;
        ret.imag=imag-c2.imag;
        return ret;
    }
};
int main(){
    Complex c1(8,-5), c2(2,3);
    Complex res = c1 + c2;
    cout << res.display();
    Complex c3(8,-6),c4(4,6);
    Complex rest= c3-c4;
    cout<< rest.display();
}