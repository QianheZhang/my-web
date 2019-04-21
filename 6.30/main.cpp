#include <iostream>

using namespace std;

int main()
{
    int i;
    int number=0;
    cout << "input a number:" << endl;
    cin >> i;
    while ( i!=0)
    {
        number=number*10+i%10;
        i/=10;
    }
    cout << number;
    return 0;
}
