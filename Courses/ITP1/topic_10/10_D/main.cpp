#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double x[n];
    double y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    double diff[n];
    for (int i = 0; i < n; i++)
    {
        diff[i] = abs(x[i] - y[i]);
    }
    cout << fixed;
    cout << setprecision(7);
    vector<double> tmp(n);
    for (double p = 1; p <= 3; p++)
    {
        for (int i = 0; i < n; i++)
        {
            tmp[i] = pow(diff[i], p);
        }
        double d = pow(accumulate(tmp.begin(), tmp.end(), 0.0), 1.0 / p);
        cout << d << endl;
    }
    double mx = 0;
    for(int i=0; i<n; i++){
        mx = max(mx, diff[i]);
    }
    cout << mx << endl;
}