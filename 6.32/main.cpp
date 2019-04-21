#include <iostream>

using namespace std;

int qualityPoints( int);
int main()
{
    int average;
    cout << "Enter the average mark:";
    cin >> average;
    cout << qualityPoints( average);
}
int qualityPoints( int average)
{
    if( average>=90)
        return 4;
    else if(average>=80)
        return 3;
    else if( average>=70)
        return 2;
    else if( average>=60)
        return 1;
    else if( average<=60)
        return 0;
}
