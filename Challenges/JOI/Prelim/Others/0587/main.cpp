#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int in[n], out[n];
    for(int i=0; i<n; i++){
        cin >> in[i] >> out[i];
    }
    int ans = m;
    int tmp = m;
    for(int i=0; i<n; i++){
        tmp += in[i];
        tmp -= out[i];
        if(tmp < 0){
            cout << 0 << endl;
            return 0;
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}