#include <iostream>
using namespace std;

int main() {
    int number, original, sum = 0;

    cout << "Enter an integer between 0 and 1000000: ";
    cin >> number;
    original = number;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    cout << "The sum of the digits is " << sum << "." << endl;

    // Mkaes the bonus work dont touch it last time it went bleh
    int singleDigit =sum;

    while (singleDigit >= 10){
        int tempSum = 0;

        while (singleDigit > 0){
            tempSum += singleDigit % 10;
            singleDigit /= 10;
        }

        singleDigit= tempSum;
    }

    cout << "The final single digit is " << singleDigit << "." << endl;

    return 0;
}
