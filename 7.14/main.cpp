#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;
void outputVector( const vector<int> & );
void inputVector( vector<int> & );
int main()
{
    int repeat;
    int num=0;
    int value;
    vector<int> integers(20);
    cout << "Size of vector integers is " << integers.size() << "\nvector after initialization:" << endl;
    outputVector(integers);

    cout << "\nEnter 20 integers:";
    inputVector(integers);
     for ( int i=0; i<20; )
    {
        repeat=0;
        cin >> value;
        if ( value>=10 && value<=100 )
        {
            for ( int j=0; j<num; j++ )
            {
                if ( value==integers[j] )
                {
                    repeat=1;
                    break;
                }
            }
            if (!repeat)
            {
                integers[num++]=value;
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
        cout << integers[i] << ' ';
    cout << endl;
}
void outputVector(const vector<int> &array)
{
    for(int item : items)
        cout << item << ' ';
    cout << endl;
}
void inputVector(vector<int> &array)
{
    for (int &item : items )
        cin >> item;
}
