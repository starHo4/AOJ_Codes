#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    string ans = "No";
    if(a < b && b < c){
        ans = "Yes";
    }
    cout << ans << endl;
}