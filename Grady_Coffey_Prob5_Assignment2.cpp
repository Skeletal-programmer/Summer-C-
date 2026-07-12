#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void count(const string &s)
{
    int letters[26] = {0};
    // Count each letter
    for (int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]);
        if (isalpha(ch))
        {
            letters[ch - 'a']++;
        }
    }
    
    // Displays non-zero count
    for (int i = 0; i < 26; i++)
    {
        if (letters[i] > 0)
        {
            cout << char('a' + i) << ": "
                 << letters[i] << " times" << endl;
        }
    }
}
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    count(str);

    return 0;
}
