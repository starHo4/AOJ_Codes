#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int ans[20];
    for (int i = 0; i < 20; i++)
    {
        ans[i] = -1;
    }
    for (int i = 0; i < 20; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int sum = 0;
        int M = -1;
        int m = 1001;
        for (int i = 0; i < n; i++)
        {
            int score;
            cin >> score;
            sum += score;
            M = max(M, score);
            m = min(m, score);
        }
        sum -= (M + m);
        ans[i] = sum / (n - 2);
    }
    for(int i=0; i<20; i++){
        if(ans[i] != -1){
            cout << ans[i] << endl;
        }
    }
}