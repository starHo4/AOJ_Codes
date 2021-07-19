#include <iostream>
using namespace std;
int main(){
    int x[10010];
    for(int i=0; i<10010; i++){
        cin >> x[i];
        if(x[i] == 0){
            break;
        }
    }
    for(int i=0; i<10010; i++){
        if(x[i]==0){
            break;
        }
        cout << "Case " << i + 1 << ": " << x[i] << endl;
    }
}