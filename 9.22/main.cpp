#include <iostream>
#include <time.h>
using namespace std;
int main()
{
time_t timer;
time(&timer);
cout<<timer<<endl;
tm* t_tm = localtime(&timer);

return 0;
}
