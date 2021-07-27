#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void boubleSort(vector<int> &A, int N)
{
    int count = 0;
    bool f = true;
    while (f)
    {
        f = false;
        for (int i = N - 1; i >= 1; i--)
        {
            if (A[i] < A[i - 1])
            {
                swap(A[i - 1], A[i]);
                f = true;
                count++;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[i];
        if(i != N-1){
            cout << " ";
        }
    }
    cout << endl;
    cout << count << endl;
}
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    boubleSort(A, N);
}