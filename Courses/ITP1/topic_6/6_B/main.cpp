#include <iostream>
using namespace std;
int mark2index(string m)
{
    if (m == "S")
    {
        return 0;
    }
    if (m == "H")
    {
        return 1;
    }
    if (m == "C")
    {
        return 2;
    }
    if (m == "D")
    {
        return 3;
    }
    return -1;
}
string index2mark(int i)
{
    if (i == 0)
    {
        return "S";
    }
    if (i == 1)
    {
        return "H";
    }
    if (i == 2)
    {
        return "C";
    }
    if (i == 3)
    {
        return "D";
    }
    return "";
}
int main()
{
    int n;
    cin >> n;
    bool table[4][13];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            table[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        string mark;
        int num;
        cin >> mark >> num;
        table[mark2index(mark)][num - 1] = true;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if (!table[i][j])
            {
                cout << index2mark(i) << " " << j + 1 << endl;
            }
        }
    }
}