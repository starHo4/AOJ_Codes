#include <iostream>
using namespace std;

int main()
{
    int n, x;

    while (true)
    {
        cin >> n >> x;

        if (n == x && n == 0)
        {
            break;
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                for(int k = j + 1; k <= n; k++)
                {
                    if(i + k + j == x)
                    {
                        count++;
                    }
                }
            }
        }

        cout << count << endl;
    }
}