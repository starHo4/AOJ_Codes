#include <iostream>
#include <algorithm>
using namespace std;
int euclidean(int x, int y)
{
    if (x < y)
    {
        swap(x, y);
    }
    if (y == 0)
    {
        return x;
    }
    return euclidean(y, x % y);
}
int main()
{
    int x, y;
    cin >> x >> y;
    int gcd = euclidean(x, y);
    cout << gcd << endl;
}