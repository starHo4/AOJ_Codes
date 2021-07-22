#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    int table[r + 1][c + 1];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> table[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += table[i][j];
        }
        table[i][c] = sum;
    }
    for (int j = 0; j < c + 1; j++)
    {
        int sum = 0;
        for (int i = 0; i < r; i++)
        {
            sum += table[i][j];
        }
        table[r][j] = sum;
    }
    int total = 0;
    for (int i = 0; i < r; i++)
    {
        total += table[i][c];
    }
    table[r][c] = total;
    for (int i = 0; i < r + 1; i++)
    {
        for (int j = 0; j < c + 1; j++)
        {
            cout << table[i][j];
            if (j != c)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}