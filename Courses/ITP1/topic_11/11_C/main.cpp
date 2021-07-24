#include <iostream>
using namespace std;
struct Dice
{
    int state[6];
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
    string returnOrder(int a, int b)
    {
        Dice tmp_d;
        for (int i = 0; i < 6; i++)
        {
            tmp_d.state[i] = state[i];
        }
        string out = "";
        for (int i = 0; i < 4; i++)
        {
            if (tmp_d.front() == b)
            {
                break;
            }
            tmp_d.roll("S");
            out += "S";
            if (i == 3)
            {
                tmp_d.roll("W");
                out += "W";
            }
        }
        while (tmp_d.front() != b)
        {
            tmp_d.roll("S");
            out += "S";
        }
        while (tmp_d.top() != a)
        {
            tmp_d.roll("E");
            out += "E";
        }
        return out;
    }
};
int main()
{
    Dice dice1;
    Dice dice2;
    for (int i = 0; i < 6; i++)
    {
        cin >> dice1.state[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cin >> dice2.state[i];
    }
    string order = dice1.returnOrder(dice2.state[0], dice2.state[1]);
    dice1.roll(order);
    for(int i=0; i<6; i++){
        if(dice1.state[i] != dice2.state[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}