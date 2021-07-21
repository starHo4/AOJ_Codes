#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    for (int i = 0; i < 50000; i++)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            break;
        }
        vector<int> a(n);
        int ans = -1;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] + a[k] <= m)
                {
                    ans = max(ans, a[j] + a[k]);
                }
            }
        }
        if (ans == -1)
        {
            cout << "NONE" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}