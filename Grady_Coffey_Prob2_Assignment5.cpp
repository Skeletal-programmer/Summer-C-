#include <iostream>
#include <string>
using namespace std;

// Template function
template <typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2)
{
    // Find the largest element in the first array
    T max = list1[0];
    for (int i = 1; i < size1; i++)
    {
        if (list1[i] > max)
            max = list1[i];
    }

    // Check if every element in the second array < largest element in the first array
    for (int i = 0; i < size2; i++)
    {
        if (list2[i] <= max)
            return false;
    }

    return true;
}

int main()
{
    // Integer arrays
    int int1[] = {1, 3, -3, 80};
    int int2[] = {81, 90, 100};

    // Double arrays
    double double1[] = {1.57, 3.14159, -360, 0};
    double double2[] = {4.5, 6.7, 10.2};

    // String arrays
    string string1[] = {"ab", "Adad"};
    string string2[] = {"Cat", "dog", "zebra"};

    cout << boolalpha;
//Cout instructions
    cout << "Integer arrays: "
         << isGreater(int1, int2, 4, 3) << endl;

    cout << "Double arrays: "
         << isGreater(double1, double2, 4, 3) << endl;

    cout << "String arrays: "
         << isGreater(string1, string2, 2, 3) << endl;

    return 0;
}
