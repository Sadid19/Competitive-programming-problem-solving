#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        bool flag = false;
        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] == '0' && s2[i] == '0' && s1[i + 1] == '1' && s2[i + 1] == '1')
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
