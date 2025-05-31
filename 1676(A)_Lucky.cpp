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

        string s1 = s.substr(0, 3);
        string s2 = s.substr(3, 3);
        int sum1 = 0;
        int sum2 = 0;

        for(int i = 0; i < s1.size(); i++)
        {
            sum1 += s[i] - '0';
        }

        for(int j = 0; j < s2.size(); j++)
        {
            sum2 += s2[j] - '0';
        }

        if(sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
}


//cout << (sum1 == sum2 ? "YES" : "NO") << endl;
