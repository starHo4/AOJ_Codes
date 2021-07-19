#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(3);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    // Bubble sort
    for(int i=0; i<a.size()-1; i++){
        for(int j=a.size()-1; j>i; j--){
            if(a[j] < a[j-1]){
                swap(a[j], a[j-1]);
            }
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (i == a.size() - 1)
        {
            cout << a[i];
        }
        else
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}