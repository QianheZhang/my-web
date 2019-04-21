#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();
int main()
{
    int headcount=0;
    int tailcount=0;
    srand( time( 0) );
    for( int i=1; i<=100; i++ )
   {
        if ( flip()==0)
        {
            ++tailcount;
            cout << "Tails";
        }
        else
        {
            ++headcount;
            cout << "Heads";
        }
   }
   cout << "\nHeads:" << headcount
      << "\nTails:" << tailcount << endl;
}
int flip()
{
    return rand()%2;
}
