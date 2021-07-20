#include <iostream>
using namespace std;
int main(){
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    if(A > 0){
        cout << (B-A) * E << endl;
    } else {
        cout << -A * C + D + B * E << endl;
    }
}