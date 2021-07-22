#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        string cards;
        cin >> cards;
        if (cards == "-")
        {
            break;
        }
        int m;
        cin >> m;
        int h[m];
        for (int i = 0; i < m; i++)
        {
            cin >> h[i];
        }
        for (int i = 0; i < m; i++)
        {
            string sub = cards.substr(0, h[i]);
            cards += sub;
            cards.erase(0, h[i]);
        }
        cout << cards << endl;
    }
}