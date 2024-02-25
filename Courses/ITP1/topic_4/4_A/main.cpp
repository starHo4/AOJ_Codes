#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    int d, r;
    double f;
    
    d = a / b;
    r = a % b;
    f = (double)a / (double)b;
    
    cout << d << " " << r;
    
    cout << fixed << setprecision(5);
    cout << " " << f << endl;
}