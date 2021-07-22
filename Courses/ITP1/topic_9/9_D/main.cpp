#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    int q;
    cin >> str >> q;
    for (int i = 0; i < q; i++)
    {
        string command;
        cin >> command;
        if (command == "print")
        {
            int a, b;
            cin >> a >> b;
            cout << str.substr(a, b - a + 1) << endl;
        }
        else if (command == "reverse")
        {
            int a, b;
            cin >> a >> b;
            string sub = str.substr(a, b - a + 1);
            reverse(sub.begin(), sub.end());
            str = str.replace(a, b - a + 1, sub);
        }
        else if (command == "replace")
        {
            int a, b;
            cin >> a >> b;
            string rep;
            cin >> rep;
            str = str.replace(a, b - a + 1, rep);
        }
    }
}