#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N; // 情報の数
    int b, f, r, v;

    cin >> N;

    vector<vector<vector<int>>> out(4, vector<vector<int>>(3, vector<int>(10, 0)));

    for (int i = 0; i < N; i++)
    {
        cin >> b >> f >> r >> v;

        out[b - 1][f - 1][r - 1] += v;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout << " " << out[i][j][k];
            }
            cout << endl;
        }
        // Line of "#"
        if (i < 3)
        {
            for (int l = 0; l < 20; l++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }
}