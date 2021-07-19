#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    ll min = 1000000000;
    ll max = -1000000000;
    ll sum = 0;
    for(int i=0; i<n; i++){
        if(min > a[i]){
            min = a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
        sum += a[i];
    }
    cout << min << " " << max << " " << sum << endl;
}