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

        string a = "codeforces";
        int count1 = 0;

        for(int i = 0; i <= 10; i++)
        {
            if(s[i] != a[i])
            {
                count1++;
            }
        }
        cout << count1 << endl;
    }
}
