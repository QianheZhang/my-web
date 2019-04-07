#include <iostream>

using namespace std;

int main()
{
    int number=1;
    int precesion;
    int factorial=1;
    int x;
    double e=1;
    cout << "precesion=" << endl;
    cin >> precesion;
    cout << "x=" << endl;
    cin >> x;
    while (number<precesion)
        {
            factorial*=number;
            number++;
            e+=1.000000*x/factorial;
        }
    cout << "e=" << e << endl;
}
