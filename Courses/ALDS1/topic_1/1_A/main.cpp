#include <iostream>
#include <vector>
using namespace std;
void printA(vector<int> &A){
    int N = A.size();
    for(int i=0; i<N; i++){
        cout << A[i];
        if(i != N - 1){
            cout << " ";
        }
    }
    cout << endl;
}
void insertSort(vector<int> &A, int N)
{
    printA(A);
    for (int i = 1; i < N; i++)
    {
        int v = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] > v){
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
        printA(A);
    }
}
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    insertSort(A, N);
}