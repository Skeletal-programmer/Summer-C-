#include <iostream>
using namespace std;

// Function for integer arrays
int average(const int* array, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum / size;
}

// Function for double arrays
double average(const double* array, int size)
{
    double sum = 0.0;

    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum / size;
}

int main()
{
    //Sets the number entries allowed & use for to take user entry
    const int SIZE = 10;
    double numbers[SIZE];

    cout << "Enter 10 double values:" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cin >> numbers[i];
    }
    //Calc Avg. & ouput
    double avg = average(numbers, SIZE);

    cout << "The average is: " << avg << endl;

    return 0;
}
