#include <iostream>

using namespace std;
int integerPower(int, int);
int main()
{
    int base;
    int exponent;
    cout << " base= " << endl;
    cin >> base;
    cout << " exponent= " << endl;
    cin >> exponent;
    cout << " integerPower( " << base << "," << exponent << ")=" << integerPower(base,exponent) << endl;
}
int integerPower( int b, int e)
{
    int a=1;
    int counter=0;
    while ( counter<e)
        {
            counter++;
            a*=b;
        }
    return a;
}
