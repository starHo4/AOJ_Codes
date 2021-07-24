#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Dice
{
    vector<int> state;
    Dice()
    {
        state = vector<int>(6);
    }
    void roll(string order)
    {
        for (int i = 0; i < order.size(); i++)
        {
            char c = order[i];
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
    }
    int top()
    {
        return state[0];
    }
    int bottom()
    {
        return state[5];
    }
    int front()
    {
        return state[1];
    }
    int back()
    {
        return state[4];
    }
    int right()
    {
        return state[2];
    }
    int left()
    {
        return state[3];
    }
    void alignDice(int a, int b)
    {
    }
    bool isSameCombi(Dice &dj)
    {
        vector<int> tmp_state_i = state;
        vector<int> tmp_state_j = dj.state;
        sort(tmp_state_i.begin(), tmp_state_i.end());
        sort(tmp_state_j.begin(), tmp_state_j.end());
        if (tmp_state_i == tmp_state_j)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isSame(Dice &dj)
    {
        string order = "NNNNWNNNWNNNENNNENNNWNNN";
        for (int i = 0; i < 24; i++)
        {
            roll(order.substr(i, 1));
            for (int j = 0; j < 6; j++)
            {
                if (state[j] != dj.state[j])
                {
                    break;
                }
                if (j == 5)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    int n;
    cin >> n;
    Dice dices[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> dices[i].state[j];
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dices[i].isSame(dices[j]))
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}