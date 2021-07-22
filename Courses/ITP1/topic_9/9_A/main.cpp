#include <iostream>
using namespace std;
int main()
{
    string W;
    cin >> W;
    int count = 0;
    while (true)
    {
        string T;
        cin >> T;
        if (T == "END_OF_TEXT")
        {
            break;
        }
        for (int i = 0; i < T.size(); i++)
        {
            if (isupper(T[i]))
            {
                T[i] = tolower(T[i]);
            }
        }
        if (T == W)
        {
            count++;
        }
    }
    cout << count << endl;
}