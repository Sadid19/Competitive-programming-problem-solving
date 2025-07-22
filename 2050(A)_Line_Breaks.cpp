#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n, m;
    cin >> n >> m;

    vector <string> s(n);
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int length = 0;
    int maxWord = 0;

    for(int i = 0; i < n; i++)
    {
        if(length + s[i].length() <= m)
        {
            length += s[i].length();
            maxWord++;
        }
        else
        {
            break;
        }
    }
    cout << maxWord << endl;
}
}
