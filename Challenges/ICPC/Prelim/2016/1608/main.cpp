#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 1000010;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = min(ans, abs(a[i] - a[j]));
            }
        }
        cout << ans << endl;
    }
}