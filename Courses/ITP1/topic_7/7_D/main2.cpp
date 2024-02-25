#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, l;
    cin >> n >> m >> l;

    vector<vector<ll>> mat1(n, vector<ll>(m, 0));
    vector<vector<ll>> mat2(m, vector<ll>(l, 0));

    vector<vector<ll>> ans(n, vector<ll>(l, 0));

    // Input
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> mat1[i][j];
        }
    }

    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < l; j++)
        {
            cin >> mat2[i][j];
        }
    }

    // Calculate
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            for (ll k = 0; k < l; k++)
            {
                ans[i][k] += mat1[i][j] * mat2[j][k];
            }
        }
    }


    // Output
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < l; j++)
        {
            if (j < l - 1)
            {
                cout << ans[i][j] << " ";
            }
            else
            {
                cout << ans[i][j] << endl;
            }
        }
    }
}