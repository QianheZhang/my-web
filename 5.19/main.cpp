#include <iostream>

using namespace std;

int main()
{
    double pi;
    double b=1;
    for ( int i = 1; i<= 1000; i++ )
        {
            if ( i% 2!= 0 )
                pi += 4/ b;
            else
                pi -= 4/ b;
            cout << i << "\t" << pi << "\n";
             b+= 2;
        }
}
