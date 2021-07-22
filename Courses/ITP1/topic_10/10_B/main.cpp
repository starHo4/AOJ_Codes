#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double a, b, C;
    cin >> a >> b >> C;
    double S, L, h;
    double C_rad = C / 180 * M_PI;
    h = b * sin(C_rad);
    S = (a * h) / 2;
    L = a + b + sqrt(a * a + b * b - 2 * a * b * cos(C_rad));
    cout << fixed;
    cout << setprecision(5);
    cout << S << endl;
    cout << L << endl;
    cout << h << endl;
}