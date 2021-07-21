#include <iostream>
using namespace std;
int main()
{
    int ans;
    cin >> ans;
    while (true)
    {
        string op;
        int num;
        cin >> op;
        if (op == "=")
        {
            cout << ans << endl;
            return 0;
        }
        cin >> num;
        if (op == "+")
        {
            ans += num;
        }
        if (op == "-")
        {
            ans -= num;
        }
        if (op == "*")
        {
            ans *= num;
        }
        if (op == "/")
        {
            ans /= num;
        }
    }
}