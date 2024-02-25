#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;

    vector<int> alphabetSum(26, 0);

    char ch;

    while(cin >> ch)
    {
        if (isalpha(ch))
            {
                for (int j = 0; j < 26; j++)
                {
                    char tmp = (isupper(ch)) ? tolower(ch) : ch;

                    if(tmp == (char)('a' + j))
                    {
                        alphabetSum[j]++;
                    }
                }
            }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << (char)('a' + i) << " : " << alphabetSum[i] << endl;
    }
}