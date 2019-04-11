#include <iostream>
#include <iomanip>
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
      }
   }

   cout << "\n" << "Total= " << count;
}

bool isPrime( int n )
{
    for ( int j=2; j<=n/2; j++ )
   {
      if ( n%j==0)
         return false;
   }
   return true;
}
