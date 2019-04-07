#include <iostream>

using namespace std;

int main()
{
    int sum =0;
    int number=0;
    int value;
    cout << "Input numbers to average( input 9999 to end):\n";
    cin >> value;
    while( value!=9999)
    {
        sum+= value;
        number++;
         cin>> value;
    }
     cout << "The average is: "<< sum/ number<< endl;
}
