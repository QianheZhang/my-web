#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double M;
    double x;
    double y;
    cout << "a=" << endl;
    cin >> a;
    cout << "b=" << endl;
    cin >> b;
    cout << "c=" << endl;
    cin >> c;
    if (a<b)
        M=a,x=b,y=c;
    else
        M=b,x=c,y=a;
    if(M<c)
        M=c,x=b,y=a;
    if (a+b>c&&b+c>a&&a+c>b&&x*x+y*y==M*M)
        cout << "Can form a right triangle";
    else
        cout << "Can't form a right triangle";
}
