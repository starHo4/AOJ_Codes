#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int cnt = 0;
void decideG(int N, vector<int> &G)
{
    G.push_back(1);
    for (int i = 1;; i++)
    {
        int gi = 3 * G[i - 1] + 1;
        if (gi > N)
        {
            break;
        }
        G.push_back(gi);
    }
    reverse(G.begin(), G.end());
}
void printG(vector<int> &G)
{
    for (int i = 0; i < G.size(); i++)
    {
        cout << G[i];
        if (i != G.size() - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}
void insertionSort(vector<int> &A, int N, int h)
{
    for (int i = h; i < N; i++)
    {
        int v = A[i];
        int j = i - h;
        while (j >= 0 && A[j] > v)
        {
            A[j + h] = A[j];
            j = j - h;
            cnt++;
        }
        A[j + h] = v;
    }
}
void printA(vector<int> &A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << endl;
    }
}
void shellSort(vector<int> &A, int N)
{
    vector<int> G;
    decideG(N, G);
    cout << G.size() << endl;
    printG(G);
    for (int i = 0; i < G.size(); i++)
    {
        insertionSort(A, N, G[i]);
    }
    cout << cnt << endl;
    printA(A);
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
    shellSort(A, N);
}