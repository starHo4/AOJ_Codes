#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    int B[m];
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        for (int j = 0; j < m; j++)
        {
            x += A[i][j] * B[j];
        }
        cout << x << endl;
    }
}