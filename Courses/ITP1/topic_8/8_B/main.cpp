#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        string n;
        cin >> n;
        if (n.size() == 1 && n[0] - '0' == 0)
        {
            break;
        }
        int sum = 0;
        for (int i = 0; i < n.size(); i++)
        {
            sum += n[i] - '0';
        }
        cout << sum << endl;
    }
}