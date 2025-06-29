#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string s[n];
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for(int i = 0; i < n; i++)
    {
        char firstChar = s[i][0];
        for(int j = 1; j < m; j++)
        {
            if(s[i][j] != firstChar)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        if(i > 0 && s[i][0] == s[i - 1][0])
        {
            cout << "NO" << endl;
            return 0;

        }
    }

    cout << "YES" << endl;
    return 0;
}
