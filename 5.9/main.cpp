#include <iostream>
using namespace std;

int main()
{
    int a= 1;
    for ( int i= 3; i<= 15; i+= 2 )
        a*= i;
    cout << "Multiply the odd integers from 1 to 15=: "<<a << endl;
}
