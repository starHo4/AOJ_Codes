#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string In;
    getline(cin, In);
    string out = In;
    for (int i = 0; i < In.size(); i++)
    {
        char ch = In[i];
        if (isalpha(ch))
        {
            if (islower(ch))
            {
                out[i] = toupper(ch);
            }
            else if (isupper(ch))
            {
                out[i] = tolower(ch);
            }
        }
    }
    cout << out << endl;
}