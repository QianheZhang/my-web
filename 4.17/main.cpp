#include <iostream>

using namespace std;

int main()
{
    cout<<"input 10 numbers:";
    int counter[10];
    for(int number=0;number<10;number++)
    cin>>counter[number];
    int largest=counter[0];
    int number=1;
    while(number<10)
    {
    if(largest<counter[number])
        largest=counter[number];
        number++;
    }
  cout<<"the largest number is:"<<largest<<endl;
  return 0;
  }
