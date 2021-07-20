#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b_num = 4;
    int f_num = 3;
    int r_num = 10;
    int table[b_num][f_num][r_num];
    for (int i = 0; i < b_num; i++)
    {
        for (int j = 0; j < f_num; j++)
        {
            for (int k = 0; k < r_num; k++)
            {
                table[i][j][k] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        table[b - 1][f - 1][r - 1] += v;
    }
    for (int i = 0; i < b_num; i++)
    {
        for (int j = 0; j < f_num; j++)
        {
            for (int k = 0; k < r_num; k++)
            {
                cout << " " << table[i][j][k];
            }
            cout << endl;
        }
        if (i != b_num - 1)
        {
            for (int j = 0; j < 20; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }
}