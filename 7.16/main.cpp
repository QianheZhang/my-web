#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n=36000;
    const int total=13;
    array <int, 13> expected={0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    int x, y;
    array <int, 13> sum={};
    srand(time(0));
    for (int i=1; i<=n; i++)
    {
        x=1+rand()%6;
        y=1+rand()%6;
        sum[x+y]++;
    }
    cout << setw(10) << "Sum" << setw(10) << "Total" << setw(10) << "Expected" << setw( 10 ) << "Actual\n" ;
    for (int j=2; j<total;j++)
        cout << setw(10) << j << setw(10) << sum[j] << setw(9)
            << 100.0*expected[j]/36 << "%" << setw(9) << 100.0* sum[j] /n << "%\n";
}
