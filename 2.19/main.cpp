#include <iostream>

using namespace std;

int main()
{
    cout<<"Input three different intergers: ";
    int x=0;
    int y=0;
    int z=0;
    int a=0;
    int b=0;
    int c=0;
    int max=0;
    int min=0;
    cin >>x>>y>>z;
    a=x+y+z;
    b=(x+y+z)/3;
    c=x*y*z;
    cout<<"Sum is "<<a<<"\n";
    cout<<"Average is "<<b<<"\n";
    cout<<"Product is "<<c<<"\n";
     if (x<y)
        min=x;
    else
        max=y;
    if(min>z)
        min=z;
    cout<<"Smallest:"<<min<<"\n";
    if (x<y)
        max=y;
    else
        max=x;
    if(max<z)
        max=z;
    cout<<"Largest:"<<max<<"\n";

    return 0;
}
