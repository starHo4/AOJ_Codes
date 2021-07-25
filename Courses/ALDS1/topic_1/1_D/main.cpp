#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int R[n];
    for(int i=0; i<n; i++){
        cin >> R[i];
    }
    int m = R[0];
    int M = pow(10, 9) * (-1);
    for(int i=1; i<n; i++){
        M = max(M, R[i] - m);
        m = min(m, R[i]);
    }
    cout << M << endl;
}