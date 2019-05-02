#include <iostream>

using namespace std;

int main()
{
    unsigned int values[5]={2,4,6,8,10};
    unsigned int *vPtr = values;
    for (int i=0; i<5; ++i)
        cout << values[i] << ' ' <<endl;
        cout << endl;

    cout << "\nThe address of values is" << &values
        <<"\nThe value of vPtr is" << vPtr << endl;

    for (int k=0; k<5; ++k)
        cout << *( vPtr+k) <<endl;

    for (int j=0; j<5; ++j)
        cout << *( values+j) <<endl;

    for (int l=0; l<5; ++l)
        cout << vPtr[l] << ' ' <<endl;
        cout << endl;

    cout << values[4] << *( values+4) << vPtr[4] << *( vPtr+4) << endl;

    cout << vPtr+3 << endl;

    vPtr = &values[4];
    vPtr -=4;
    cout << vPtr <<endl;
}
