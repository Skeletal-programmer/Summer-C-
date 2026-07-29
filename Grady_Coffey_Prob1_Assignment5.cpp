#include <iostream>
#include <string>
using namespace std;

// Template function to return the minimum element in an array
template <typename T>
T getMin(const T array[], int size)
{
    T min = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

int main()
{
  //Array values
    int i_array[4] = {1, 3, -3, 80};
    double d_array[4] = {1.57, 3.14159, -360, 0};
    string s_array[4] = {"abcd", "ab", "Adad", "Cat"};
//Ouputa
    cout << getMin(i_array, 4) << endl;
    cout << getMin(d_array, 4) << endl;
    cout << getMin(s_array, 4) << endl;

    return 0;
}
