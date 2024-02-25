#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m, 0));
    vector<int> vec(m, 0);

    vector<int> out(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> vec[i];
    }

    // Calculate
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            out[i] += matrix[i][j] * vec[j];
        }
    }

    // Output
    for (int i = 0; i < n; i++)
    {
        cout << out[i] << endl;
    }
}