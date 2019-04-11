#include <iostream>

using namespace std;
double smallest( double, double, double);
int main()
{
   double a;
   double b;
   double c;
   cout << "Input three numbers: ";
   cin >> a>> b>> c;
   cout << "The smallest is" << smallest( a, b, c) ;
}

double smallest( double a, double b, double c)
{
    if( a<b&& a<c)
        return a;
    if( b<a&& b<c)
        return b;
    if( c<a&& c<b)
        return c;
}
