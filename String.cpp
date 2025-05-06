#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        long cnt = 0;
        for(char x : s)
        {
            cnt += (x == '1');
        }
        cout << cnt << endl;
    }
}


