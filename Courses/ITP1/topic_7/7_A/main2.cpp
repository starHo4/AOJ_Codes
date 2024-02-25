#include <iostream>
using namespace std;

int main()
{
    int m, f, r;

    while(true)
    {
        cin >> m >> f >> r;

        if((m == f && f == r) && m == -1)
        {
            break;
        }

        if(m == -1 || f == -1)
        {
            cout << "F" << endl;
        }
        else if(m + f < 30)
        {
            cout << "F" << endl;
        }
        else if(m + f < 50)
        {
            if(r >= 50)
            {
                cout << "C" << endl;
            }
            else
            {
                cout << "D" << endl;
            }
        }
        else if(m + f < 65)
        {
            cout << "C" << endl;
        }
        else if(m + f < 80)
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "A" << endl;
        }
    }
}