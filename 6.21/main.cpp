#include <iostream>

using namespace std;

bool iseven( int) ;
int main()
{
    int a;
    cout << " Input a series of integers: " ;
    while ( 1)
    {
        cin >> a;
        if ( iseven( a) )
            cout << a << " is an even integer\n" ;
        else
            cout << a << " is an odd integer\n" ;
    }
}
bool iseven( int a)
{
    if ( a%2==0)
        return true;
    else
        return false;
}
