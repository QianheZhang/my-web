#include <iostream>

using namespace std;

int main()
{
    long value2;
    long value1=200000;
    long *longPtr = &value1;

    cout << longPtr << ' ' <<endl;
    cout << endl;

    value2=*longPtr;
    cout << value2 <<endl;
    cout << "\nThe address of values1 is" << &value1
            <<"\nThe value of longPtr is" << longPtr << endl;
}
