#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    int max, min;
    array< int, 20> w={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for ( size_t k=0; k<w.size(); ++k)
    {
        max = min = w[0];
        for (int i = 1;i < 20;i++)
        {
            if (w[i] > max)
            {
                max = w[i];
            }
            if (w[i] < min)
            {
                min = w[i];
            }
        }
    }
        cout<<"Max: "<<max<<'\n'
            <<"Min: "<<min<<'\n';
}
