#include <iostream>
#include <stack>
using namespace std;
int calc(int x, string op, int y)
{
    if (op == "+")
    {
        return x + y;
    }
    if (op == "-")
    {
        return x - y;
    }
    if (op == "*")
    {
        return x * y;
    }
    return 0;
}
int main()
{
    string str;
    int numA, numB;
    stack<int> st;
    while (cin >> str)
    {
        if (str == "+" || str == "-" || str == "*")
        {
            numA = st.top();
            st.pop();
            numB = st.top();
            st.pop();
            st.push(calc(numB, str, numA));
        }
        else
        {
            numA = 0;
            for (int i = 0; i < str.size(); i++)
            {
                numA *= 10;
                numA += str[i] - '0';
            }
            st.push(numA);
        }
    }
    cout << st.top() << endl;
}