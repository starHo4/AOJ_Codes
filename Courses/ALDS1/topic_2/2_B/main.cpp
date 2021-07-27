#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void selectionSort(vector<int> &A, int N)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int minj = i;
        for (int j = i; j < N; j++)
        {
            if (A[j] < A[minj])
            {
                minj = j;
            }
        }
        if (A[minj] < A[i])
        {
            count++;
            swap(A[minj], A[i]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[i];
        if (i != N - 1)
        {
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
    selectionSort(A, N);
}