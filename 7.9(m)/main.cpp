#include <iostream>
#include <array>
#include <string>
using namespace std;

const size_t  rows=2;
const size_t columns=3;
void printArray(const array<array<int,columns>,rows>& a)
{
    for (auto const &row :a)
    {
        for (auto const &element : row)
            cout<<element<<' ';
        cout<<endl;
    }
}
int main()
{
    array<array<int,columns>,rows> t={1,2,3,4,5,6};
    for (size_t column=0;column<3;++column)
        cout<<t[0][column];
    }

