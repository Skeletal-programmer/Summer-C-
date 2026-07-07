#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 1; i < str.length(); i += 2) {
        cout << str[i];
    }

    cout << endl;

    return 0;
}
