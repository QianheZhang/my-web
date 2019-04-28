#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

const size_t  rows=2;
const size_t columns=3;
void printArray(const array<array<int, columns>, rows>&);
int main()
{
    array<array<int, columns>, rows> t={};
    cout << "Values in t by row are:\n";
    printArray( t );
}
void printArray( const array<array<int, columns>,rows>&t)
{
    for (auto const &row : t )
    {
        for (auto const &element : row)
            cout << element << ' ';
        cout << endl;
    }
}
