#include <iostream>

using namespace std;
bool multiple( int, int);
int main()
{
    int a, b;
    cout << " Enter a series of integer pairs to determine whether the second integer is a multiple of the first integer." << endl;
    for (int i=0; i<=2; i++)
    {
        cin >> a >> b;
        if ( multiple( a,b) )
            cout << b << "is a multiple of" << a << endl;
        else
            cout << b << "is not a multiple of" << a << endl;
    }
}
bool multiple( int x, int y)
{
    if ( y%x==0)
        return true;
    else
        return false;
}
