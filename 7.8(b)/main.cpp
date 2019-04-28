#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    size_t i=4;
    array< int, 7> grades={11,12,13,45,56,87,54};
    cout << "Input a number:";
    cin >> grades[i];
    cout << "Element" << setw(13) << "Value\n";
    cout << setw(7) << i << setw(13) << grades[i];
}
