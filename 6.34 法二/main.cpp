#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int n=1+rand()%1000;
    int num;
    char res;
    do
    {
        cout << " I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.";
        n=1+rand()%1000;
        while ( n!=num)
        {
            cin >> num;
            if ( num>n)
                cout << "Too high. Try again.";
            if ( num<n)
                cout << "Too low. Try again.";
    }
    cout << "Excellent! YOU guessed the number!Would you like to play again (y or n)? ";
    cin >> res;
   }
    while ( res== 'y' );
}
