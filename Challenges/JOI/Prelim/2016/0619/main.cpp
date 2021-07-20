#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    int min_sc = min(A, B);
    min_sc = min(min_sc, C);
    min_sc = min(min_sc, D);
    int min_so = min(E, F);
    cout << A + B + C + D + E + F - min_sc - min_so << endl;
}