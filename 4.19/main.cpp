#include <iostream>

using namespace std;

int main()
{
    cout<<"input 10 numbers:";
    int counter[10];
    for(int number=0;number<10;number++)
    cin>>counter[number];
    int largest1=counter[0];
    int largest2=counter[0];
    int number=1;
    while(number<10)
    {
    if(largest1,largest2<counter[number])
        largest1=counter[number];
        number++;
    if(largest1>counter[number],largest2<counter[number])
        largest2=counter[number];
        number++;
    }
  cout<<"the largest number is:"<<largest1<<"\n"<<"the second largest number is:"<<largest2<<endl;
  return 0;
  }
