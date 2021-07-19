#include <iostream>
using namespace std;
int main()
{
    int N = 4000;
    int x[N], y[N];
    for (int i = 0; i < N; i++)
    {
        cin >> x[i] >> y[i];
        if (x[i] == 0 && y[i] == 0)
        {
            break;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (x[i] == 0 && y[i] == 0)
        {
            break;
        }
        if (x[i] <= y[i])
        {
            cout << x[i] << " " << y[i] << endl;
        }
        else
        {
            cout << y[i] << " " << x[i] << endl;
        }
    }
}