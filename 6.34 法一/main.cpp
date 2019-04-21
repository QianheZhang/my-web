#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void game();
bool correct( int, int);
int main()
{
    srand(time(0));
    game();
}
void game()
{
    int n;
    int num;
    char res;
    do
    {
        n=1+rand()%1000;
        cout << " I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.";
        cin >> num;
        while ( !correct( num,n) )
        cin >> num;
        cout << "Excellent! YOU guessed the number!Would you like to play again (y or n)?";
        cin >> res;
    }
    while ( res=='y');
}
bool correct ( int n, int num)
{
    if ( n==num)
    return true;
    if ( n<num)
        cout << "Too low. Try again.\n? ";
    else
        cout << "Too high. Try again.\n? ";
    return false;
}
