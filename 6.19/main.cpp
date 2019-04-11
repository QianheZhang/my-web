#include <iostream>
#include <math.h>
using namespace std;
double hypotenuse( double,double);
int main()
{
    double x1=3.0;
    double y1=4.0;
    cout << "1\t" << x1  << "\t" << y1  << "\t" << hypotenuse(x1,y1)<<endl;
    double x2=5.0;
    double y2=12.0;
    cout << "2\t" << x2  << "\t" << y2 << "\t"  << hypotenuse(x2,y2)<<endl;
    double x3=8.0;
    double y3=15.0;
    cout << "3\t" << x3  << "\t" << y3  << "\t" << hypotenuse(x3,y3)<<endl;
}
double hypotenuse(double a,double b)
{
    double c;
    c=sqrt(a*a+b*b);
    return c;
}
