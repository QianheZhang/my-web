#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    cout << "a=" << endl;
    cin >> a;
    cout << "b=" << endl;
    cin >> b;
    cout << "c=" << endl;
    cin >> c;
    if(a+b>c&&b+c>a&&a+c>b)
        cout << "Can form a triangle";
    else
        cout << "Can't form a triangle";
}
