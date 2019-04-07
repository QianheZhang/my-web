#include <iostream>

using namespace std;

int main()
{
    int min;
    int number;
    int value;
    cout << "First input the number of data, then input the data:\n";
    cin >> number>> min;
    for ( int i = 2; i <= number; i++)
    {
        cin >> value;
        if (value<= min)
            min=value;
    }
    cout << "Min=" << min<< endl;
}
