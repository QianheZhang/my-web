#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "ceil(" << x << ")=" << ceil(x) << "\ncos(" << x << ")=" << cos(x) << "\nexp(" << x << ")=" << exp(x)
         << "\nfabs(" << x << ")=" << fabs(x) << "\nfloor(" << x << ")=" << floor(x) << "\nfmod(" << x << "," << y << ")=" << fmod(x,y)
         << "\npow(" << x << "," << y << ")=" << pow(x,y);
}
