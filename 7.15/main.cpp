#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

const size_t  row=3;
const size_t column=5;

int main()
{
    array<array<int, column>, row> sales;
    for (int i=0; i<=15; ++i)
    for(size_t row=0; row<sales.size();++row)
    for(size_t column=0;column<sales[row].size();++column)
    sales[row][column]=0;
    for(size_t row=0; row<sales.size();++row)
    {
        for(size_t column=0;column<sales[row].size();++column)
        {
            cout << "(" << row << "," << column << ")"
            << "(" << sales[row][column] << ")";
        }
    }
}
