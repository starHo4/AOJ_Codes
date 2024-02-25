#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> matrix(r, vector<int>(c, 0));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }

    vector<int> sum_r(r, 0);
    vector<int> sum_c(c, 0);
    int allSum = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum_r[i] += matrix[i][j];
        }
    }

    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            sum_c[i] += matrix[j][i];
        }
        allSum += sum_c[i];
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << sum_r[i] << endl;
    }

    for(int i=0; i<c; i++)
    {
        cout << sum_c[i] << " ";
    }
    cout << allSum << endl;
}