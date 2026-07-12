#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Int used for rolls
int rollDice()
{
    //Establishes six sided die
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int sum = die1 + die2;

    cout << "You rolled " << die1 << " + " << die2
         << " = " << sum << endl;

    return sum;
}

int main()
{
    srand(time(0));   // Seeds number generator
    int sum = rollDice();

    // Starting roll
    if (sum == 7 || sum == 11)
    {
        cout << "You win" << endl;
    }
    //Establishes starting losing condition    
    else if (sum == 2 || sum == 3 || sum == 12)
    {
        cout << "You lose" << endl;
    }
    else
    {
        // Point estableshed
        int point = sum;
        cout << "Point is " << point << endl;

        while (true)
        {
            sum = rollDice();
            //Win condition
            if (sum == point)
            {
                cout << "You win" << endl;
                break;
            }
            //Lose condition if 7 out    
            else if (sum == 7)
            {
                cout << "You lose" << endl;
                break;
            }
        }
    }
    
    return 0;
}
