#include <iostream>
#include <iomanip>
using namespace std; 
int main(){
    int a, b;
    cin >> a >> b;
    int d, r;
    double f;
    d = a / b;
    r = a % b;
    f = 1.0 * a / b;
    cout << fixed;
    cout << setprecision(5);
    cout << d << " " << r << " " << f << endl;
}