#include <iostream>

using namespace std;

int main()
{
    int sum =0;
    int number;
    int value;
    cout << "First input the number of summation data, then input the summation data:\n";
    cin >> number;
    for ( int a = 1; i <= number; i++)
    {
        cin >> value;
        sum+= value;
    }
    cout << "Sum" << number << "number=" << sum << endl;
}
