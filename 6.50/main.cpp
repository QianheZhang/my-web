#include <iostream>
using namespace std;

int tripleByValue(int);
void tripleByReference(int &);

int main()
{
    int count;
    cout << "Count: ";
    cin >> count;
    cout << "Count before TripleByValue()=" << count << "\nTripleByValue() results: " << tripleByValue(count) << "\nCount after TripleByValue()=" << count;
    cout << "\nCount before TripleByReference()=" << count;
    tripleByReference( count );
    cout <<"\nCount after  TripleByReference()=" << count;
}

int tripleByValue( int value)
{
    return value*=3;
}

void tripleByReference(int &byref)
{
    byref*=3;
}
