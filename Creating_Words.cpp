#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2, temp;
        cin >> s1 >> s2;
        temp[0] = s1[0];
        s1[0] = s2[0];
        s2[0] = temp[0];
        cout << s1 << ' ' << s2 << endl;
    }
}

