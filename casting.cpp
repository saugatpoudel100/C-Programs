#include<math.h>
const double pi=3.141592654;
class rectangular
{
double x,y;
public:
rectangular()
{
x=0;
y=0;
}
rectangular(double a,double b)
{
x=a;
y=b;
}
void output()
{
cout<<"("<<x<<","<<y<<")";
}
};
class polar
{
double theta,r;
public:
polar ()
{
theta=0;
r=0;
}
operator rectangular()
{
double x,y;
//float atheta=theta*pi/180;
x=r*cos(theta);
y=r*sin(theta);
return rectangular(x,y);
}
void output()
{
cout<<"\nr="<<r;
cout<<"\ntheta="<<theta;
}
};
int main()
{
rectangular r1,r2;
polar p1(3,45);
r1=p1;// polar to rectangular conversion
r1.output();
}
