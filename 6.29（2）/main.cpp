#include <iostream>
#include <cmath>
using namespace std;

bool isPrime( int );

int main()
{
    int count=1;
    for ( int i=2; i<10000; i++ )
   {
    if ( isPrime( i) )
      {
         count++;
         cout << setw( 5) << i;
    if ( count %10== 0 )
            cout << '\n';
      }
   }

   cout << "\n" << "Total= " << count;
}

bool isPrime( int n )
{
   for ( int j=2; j<=n;j++ )
   {
      if ( n%j==0)
         return false;
   }
   return true;
}
