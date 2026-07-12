#include <iostream>
using namespace std;

// Counts evan digits
int evenCount(int value)
{
    // For 0 so it doesn't go to crap
    if (value == 0)
        return 1;

    if (value < 10)
    {
        if ((value % 2) == 0)
            return 1;
        else
            return 0;
    }

    int lastDigit = value % 10;

    if (lastDigit % 2 == 0)
        return 1 + evenCount(value / 10);
    else
        return evenCount(value / 10);
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    // For negatives
    if (number < 0)
        number = -number;

    cout << "The number of even digits is " << evenCount(number) << endl;

    return 0;
}
