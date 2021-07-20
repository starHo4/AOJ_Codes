#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int tri = 0;
    int r_tri = 0;
    int a_tri = 0;
    int o_tri = 0;
    while (true)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int tmp[3] = {a, b, c};
        sort(tmp, tmp + 3);
        if (tmp[0] + tmp[1] <= tmp[2])
        {
            cout << tri << " " << r_tri << " " << a_tri << " " << o_tri << endl;
            return 0;
        }
        tri++;
        if (tmp[0] * tmp[0] + tmp[1] * tmp[1] == tmp[2] * tmp[2])
        {
            r_tri++;
        }
        if (tmp[0] * tmp[0] + tmp[1] * tmp[1] > tmp[2] * tmp[2])
        {
            a_tri++;
        }
        if (tmp[0] * tmp[0] + tmp[1] * tmp[1] < tmp[2] * tmp[2])
        {
            o_tri++;
        }
    }
}