#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    queue<pair<string, int> > tbl_q;
    for(int i=0; i<n; i++){
        string name;
        int time;
        cin >> name >> time;
        tbl_q.push(make_pair(name, time));
    }
    int t = 0;
    while(!tbl_q.empty()){
        int remain = tbl_q.front().second;
        if(remain <= q){
            t += remain;
            pair<string, int> finished = tbl_q.front();
            cout << finished.first << " " << t << endl;
            tbl_q.pop();
        }
        else{
            t += q;
            pair<string, int> tmp = tbl_q.front();
            tmp.second -= q;
            tbl_q.pop();
            tbl_q.push(tmp);
        }
    }
}