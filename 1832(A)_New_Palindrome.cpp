#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        bool flag = true;

        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] != s[0])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "NO \n";
        }
        else
        {
            bool found = false;
            for(int i = 0; i < s.size() / 2; i++)
            {
                if(s[i] != s[0])
                {
                    found = true;
                    break;
                }
            }
            if(found)
            {
                cout << "YES \n";
            }
            else
            {
                cout << "NO \n";
            }
        }
    }
}
