#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int score_T = 0;
    int score_H = 0;
    for (int i = 0; i < N; i++)
    {
        string t, h;
        cin >> t >> h;
        if (t > h)
        {
            score_T += 3;
        }
        else if (t < h)
        {
            score_H += 3;
        }
        else
        {
            score_T++;
            score_H++;
        }
    }
    cout << score_T << " " << score_H << endl;
}