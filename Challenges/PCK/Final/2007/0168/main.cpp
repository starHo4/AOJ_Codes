#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
int main()
{
    while (true)
    {
        int N;
        cin >> N;
        if (N == 0)
        {
            break;
        }
        ll ans;
        vector<ll> dp(N + 1, 0);
        dp[0] = 1;
        for(int now = 0; now < N; now++){
            for(int next = now + 1; next <= min(N, now + 3); next++){
                dp[next] += dp[now];
            }
        }
        ans = (dp[N] + 3649) / 3650;
        cout << ans << endl;
    }
}