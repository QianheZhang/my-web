#include <iostream>
#define PI 3.14159
using namespace std;

int main()
{
    int r=0;
    int d=0;
    double area=0;
    double l=0;
    cout<<"ÊäÈë°ë¾¶£º ";
    cin>>r;
    d=2*r;
    area=PI*r*r;
    l=PI*2*r;
    cout<<"d= "<<d<<"\n";
    cout<<"area= "<<area<<"\n";
    cout<<"l= "<<l<<"\n";
    return 0;
}
