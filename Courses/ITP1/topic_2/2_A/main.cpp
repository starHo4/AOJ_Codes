#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string out = "";
    if (a < b)
    {
        out = "a < b";
    }
    else if (a > b)
    {
        out = "a > b";
    }
    else
    {
        out = "a == b";
    }
    cout << out <<endl;
}