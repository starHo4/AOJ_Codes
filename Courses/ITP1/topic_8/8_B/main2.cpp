#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    while(true)
    {
        getline(cin, str);

        if(str == "0")
        {
            break;
        }

        int ans = 0;

        for(int i=0; i<str.length(); i++)
        {
            ans += str[i] - '0';
        }

        cout << ans << endl;
    }
}