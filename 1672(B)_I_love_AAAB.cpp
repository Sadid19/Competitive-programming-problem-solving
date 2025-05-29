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
        int count1 = 0;
        int a = 0;
        int b = 0;

        for(int i = 0;i < s.size(); i++)
        {
            if(s[i] == 'A')
            {
                a++;
            }
            else
            {
                b++;
            }
            if(b > a)
            {
                count1 = 1;
                break;
            }
        }
        if(s[0] == 'B' || count1 == 1 || s[s.size()-1] != 'B')

        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
