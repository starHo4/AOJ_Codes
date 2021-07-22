#include <iostream>
using namespace std;
int main(){
    string s, p;
    cin >> s >> p;
    for(int i=0; i<s.size(); i++){
        string sub = s.substr(0, p.size());
        if(sub == p){
            cout << "Yes" << endl;
            return 0;
        }
        s += s[0];
        s.erase(0, 1);
    }
    cout << "No" << endl;
}