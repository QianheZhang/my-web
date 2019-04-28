#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    array< int, 10> temperatures={1,2,3,4,5,6,7,8,9,10};
    int total=0;
    for ( size_t i=0; i<temperatures.size(); ++i)
    total+=temperatures[i];
    cout << "Total=" <<  total;
}
