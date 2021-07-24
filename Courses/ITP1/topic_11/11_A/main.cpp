#include <iostream>
using namespace std;
struct Dice
{
    int state[6];
    void roll(char c)
    {
        int tmp;
        if (c == 'N')
        {
            tmp = state[0];
            state[0] = state[1];
            state[1] = state[5];
            state[5] = state[4];
            state[4] = tmp;
        }
        else if (c == 'E')
        {
            tmp = state[0];
            state[0] = state[3];
            state[3] = state[5];
            state[5] = state[2];
            state[2] = tmp;
        }
        else if (c == 'W')
        {
            tmp = state[0];
            state[0] = state[2];
            state[2] = state[5];
            state[5] = state[3];
            state[3] = tmp;
        }
        else if (c == 'S')
        {
            tmp = state[0];
            state[0] = state[4];
            state[4] = state[5];
            state[5] = state[1];
            state[1] = tmp;
        }
    }
};
int main()
{
    Dice dice;
    for (int i = 0; i < 6; i++)
    {
        cin >> dice.state[i];
    }
    string order;
    cin >> order;
    for (int i = 0; i < order.size(); i++)
    {
        dice.roll(order[i]);
    }
    cout << dice.state[0] << endl;
}