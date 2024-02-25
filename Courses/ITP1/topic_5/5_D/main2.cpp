#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int tmp;
    for (int i = 1; i < N + 1; i++)
    {
        tmp = i;
        if (i % 3 == 0)
        {
            cout << " " << i;
            continue;
        }
        else
        {
            while (tmp != 0)
            {
                if (tmp % 10 == 3)
                {
                    cout << " " << i;
                    break;
                }
                tmp /= 10;
            }
        }
    }
    cout << endl;
}