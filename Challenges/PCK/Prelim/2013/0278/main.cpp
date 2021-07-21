#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int x[N], y[N], b[N], p[N];
    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i] >> b[i] >> p[i];
    }
    for (int i = 0; i < N; i++)
    {
        double ans = 0;
        ans = x[i] * b[i] + y[i] * p[i];
        if (b[i] >= 5 && p[i] >= 2)
        {
            ans *= 0.8;
            cout << ans << endl;
        }
        else
        {
            ans = min(ans, 0.8 * (x[i] * max(b[i], 5) + y[i] * max(p[i], 2)));
            cout << ans << endl;
        }
    }
}