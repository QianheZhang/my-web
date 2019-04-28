#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    array< double, 11> a={32,31,30,29,28,27,26,25,24,23,22};
    array< double, 34> b={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34};
    for ( size_t i=0; i<a.size(); ++i)
    b[i]=a[i];
    cout << "Element" << setw(13) << "Value\n";
    for ( size_t j=0; j<b.size(); ++j)
        cout << setw(5) << j << setw(13) << b[j] << "\n";
}
