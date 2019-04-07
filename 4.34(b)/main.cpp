#include <iostream>

using namespace std;

int main()
{
    int number=1;
    int precesion;
    int factorial=1;
    double e=1;
    cout << "precesion=" << endl;
    cin >> precesion;
    while (number<precesion)
        {
            factorial*=number;
            number++;
            e+=1.000000/factorial;
        }
    cout << "e=" << e << endl;
}
