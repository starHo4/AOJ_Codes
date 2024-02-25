#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, p;
    cin >> s >> p;

    if (s.find(p) == string::npos)
    {
        for (int i = 1; i < p.size(); i++)
        {
            string p1 = p.substr(0, i);
            string p2 = p.substr(i);
            if(s.find(p1) == string::npos)
            {
                cout << "No" << endl;
                return 0;
            }
            else
            {
                string s1 = s.substr(0, p2.size());
                if(s1 == p2)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}