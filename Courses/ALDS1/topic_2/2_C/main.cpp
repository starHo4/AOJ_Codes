#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printC(vector<string> C, string f_stabled)
{
    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i];
        if (i != C.size() - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    cout << f_stabled << endl;
}
bool isSame(vector<string> bs_C, vector<string> ss_C){
    if(bs_C.size() != ss_C.size()){
        return false;
    }
    for(int i=0; i<bs_C.size(); i++){
        if(bs_C[i] != ss_C[i]){
            return false;
        }
    }
    return true;
}
void bubbleSort(vector<string> C, int N)
{
    string f_stabled = "Stable";
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j >= i + 1; j--)
        {
            int cj = C[j][1] - '0';
            int cj_1 = C[j - 1][1] - '0';
            if (cj < cj_1)
            {
                swap(C[j - 1], C[j]);
            }
        }
    }
    printC(C, f_stabled);
}
vector<string> bubbleSort(vector<string> C, int N, string f_stabled){
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j >= i + 1; j--)
        {
            int cj = C[j][1] - '0';
            int cj_1 = C[j - 1][1] - '0';
            if (cj < cj_1)
            {
                swap(C[j - 1], C[j]);
            }
        }
    }
    return C;
}
void selectionSort(vector<string> C, int N)
{
    string f_stabled = "Stable";
    vector<string> bs_C = bubbleSort(C, N, f_stabled);
    for (int i = 0; i < N; i++)
    {
        int minj = i;
        for (int j = i; j < N; j++)
        {
            int cj = C[j][1] - '0';
            int cminj = C[minj][1] - '0';
            if (cj < cminj)
            {
                minj = j;
            }
        }
        swap(C[i], C[minj]);
    }
    if(!isSame(bs_C, C)){
        f_stabled = "Not stable";
    }
    printC(C, f_stabled);
}
int main()
{
    int N;
    cin >> N;
    vector<string> C(N);
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];
    }
    bubbleSort(C, N);
    selectionSort(C, N);
}