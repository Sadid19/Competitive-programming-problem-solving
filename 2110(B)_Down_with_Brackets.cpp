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

        int first = 0;
        int found = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                first++;
            }
            if(s[i] == ')')
            {
                first--;
            }
            if(first == 0 && i != s.size() - 1)
            {
                found = 1;
            }
        }

        if(found == 1)
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }

    }
}
