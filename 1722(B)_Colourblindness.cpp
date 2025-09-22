#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    bool found = true;
    for(int i = 0; i < n; i++)
    {
        char c1 = s1[i];
        char c2 = s2[i];

        if(c1 == 'R' && c2 == 'R')
        {
            continue;
        }
        else if(c1 == 'R' || c2 == 'R')
        {
            found = false;
            break;
        }
        else
        {
            continue;
        }
    }
    cout << (found ? "YES" : "NO") << endl;
}
}
