#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if (n == 2)
    {
        return true;
    }
    if (n < 2 || n % 2 == 0)
    {
        return false;
    }
    int i = 3;
    while (i <= sqrt(n))
    {
        if (n % i == 0)
        {
            return false;
        }
        i += 2;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int A[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (isPrime(A[i]))
        {
            ans++;
        }
    }
    cout << ans << endl;
}