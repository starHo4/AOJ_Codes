#include <iostream>
using namespace std;
int main()
{
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    string ans = "No";
    if (0 <= x - r && x + r <= W && 0 <= y - r && y + r <= H)
    {
        ans = "Yes";
    }
    cout << ans << endl;
}