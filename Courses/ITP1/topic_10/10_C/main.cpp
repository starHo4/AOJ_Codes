#include <iostream>
#include <iomanip>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
    cout << fixed;
    cout << setprecision(6);
    while (true)
    {
        double n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        vector<double> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        double ave = accumulate(a.begin(), a.end(), 0.0) / n;
        for (int i = 0; i < n; i++)
        {
            a[i] -= ave;
            a[i] *= a[i];
        }
        double ans = sqrt(accumulate(a.begin(), a.end(), 0.0) / n);
        cout << ans << endl;
    }
}