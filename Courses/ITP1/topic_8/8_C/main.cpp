#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch;
    int count[26];
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }
    while (cin >> ch)
    {
        if (isalpha(ch))
        {
            if (isupper(ch))
            {
                ch = tolower(ch);
            }
            count[ch - 'a']++;
        }
        else
        {
            continue;
        }
    }
    for (char i = 'a'; i < 'z' + 1; i++)
    {
        cout << i << " : " << count[i - 'a'] << endl;
    }
}