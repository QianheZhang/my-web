#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int, 20> a={};
    int num=0;
    int repeat;
    int value;
    cout << "Enter 20 integers between 10 and 100:\n";
    for ( int i=0; i<20; )
    {
        repeat=0;
        cin >> value;
        if ( value>=10 && value<=100 )
        {
            for ( int j=0; j<num; j++ )
            {
                if ( value==a[j] )
                {
                    repeat=1;
                    break;
                }
            }
            if (!repeat)
            {
                a[num++]=value;
                ++i;
            }
            else
                cout << "repeat.\n";
        }
        else
            cout << "different.\n";
    }
    cout << "\n Different values are:\n";
    for ( int i=0; i <20; i++ )
        cout << a[i] << ' ';
    cout << endl;
}
