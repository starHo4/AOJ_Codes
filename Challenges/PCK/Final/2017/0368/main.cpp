#include <iostream>
using namespace std;
int main()
{
    int W, H;
    char c;
    cin >> W >> H >> c;
    char flag[H][W];
    int center_y = (H + 1) / 2;
    int center_x = (W + 1) / 2;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (i == center_y - 1 && j == center_x - 1)
            {
                cout << c;
            }
            else if (i == 0 || i == H - 1)
            {
                if (j == 0 || j == W - 1)
                {
                    cout << '+';
                }
                else
                {
                    cout << '-';
                }
            }
            else
            {
                if (j == 0 || j == W - 1)
                {
                    cout << '|';
                }
                else
                {
                    cout << '.';
                }
            }
        }
        cout << endl;
    }
}