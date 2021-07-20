#include <iostream>
using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int Product = A * B * C;
    int ans = -1;
    if(Product <= 2){
        ans = 1;
    } else
    {
        ans = 2;
    }
    cout << ans << endl;
}