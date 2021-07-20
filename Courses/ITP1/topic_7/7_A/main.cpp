#include <iostream>
using namespace std;
int main()
{
    string ans[50];
    for (int i = 0; i < 50; i++)
    {
        ans[i] = "";
    }
    for (int i = 0; i < 50; i++)
    {
        int m, f, r;
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1)
        {
            break;
        }
        if (m == -1 || f == -1)
        {
            ans[i] = "F";
        }
        else if (m + f >= 80)
        {
            ans[i] = "A";
        }
        else if (m + f >= 65)
        {
            ans[i] = "B";
        }
        else if (m + f >= 50)
        {
            ans[i] = "C";
        }
        else if (m + f >= 30)
        {
            ans[i] = "D";
            if (r >= 50)
            {
                ans[i] = "C";
            }
        }
        else if (m + f >= 0)
        {
            ans[i] = "F";
        }
    }
    for (int i = 0; i < 50; i++)
    {
        if (ans[i] == "")
        {
            break;
        }
        cout << ans[i] << endl;
    }
}