#include <iostream>

using namespace std;

int main()
{
    int number;
    int factorial=1;
    cout << "number=" <<endl;
    cin >> number;
    cout << number << "!=" << endl;
    while (number>0)
        {
            factorial*=number;
            number--;
        }
    cout << factorial << endl;
}
