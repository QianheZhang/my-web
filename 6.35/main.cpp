#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int a=0;
    int n=1+rand()%1000;
    int num;
    cout << " I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.";
    while ( n!=num)
    {
        cin >> num;
        if ( num>n)
            cout << "Too high. Try again.";
        if ( num<n)
            cout << "Too low. Try again.";
        a++;
    }
    if (a>10)
        cout << "You should be able to do better!";
    if (a==10)
        cout << "Ahah! You know the secret!";
    if (a<10)
        cout << "Either you know the secret or you got lucky!";
}
