#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int, 10> counts={};
    array <int, 15> bonus={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    array <double, 20> monthlyTemperatures={};
    array <int, 5> bestScore={1,2,3,4,5};
    for (int k=0; k<10; ++k)
        cout << counts[k] << "\n";
    for (int i=0; i<15; ++i)
    {
        bonus[i]++;
        cout << bonus[i] << "\n";
    }
    for (int j=0; j<20; ++j)
    {
        cout << "Input 20 numbers:";
        cin >> monthlyTemperatures[j];
        cout << monthlyTemperatures[j] << "\n";
    }
    for (int l=0; l<5; ++l)
        cout << bestScore[l];
}
