#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] != s[i + 1])
        {
            string x = s;
            reverse(s.begin(), s.end());
            if(s == x)
            {
                cout << s.size() - 1 << endl;
            }
            else
            {
                cout << s.size() << endl;
            }
             return 0;
        }
    }
     cout << "0" << endl;
}
