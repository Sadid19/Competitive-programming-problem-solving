#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin >> p;

    int n;
    cin >> n;
    bool found1 = false;
    bool found2 = false;
    bool found3 = false;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(s == p)
        {
            found1 = true;
        }
        if(s[1] == p[0])
        {
            found2 = true;
        }
        if(s[0] == p[1])
        {
            found3 = true;
        }
    }
    if(found1 || (found2 && found3))
    {
        cout << "YES \n";
    }
    else
    {
        cout << "NO \n";
    }
}
