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

        string a;
        cin >> a;

        int m;
        cin >> m;

        string b, c;
        cin >> b >> c;

        string s = a;
        for(int i = 0; i < m; i++)
        {
            if(c[i] == 'V')
            {
                s = b[i] + s;
            }
            else
            {
                s = s + b[i];
            }
        }
        cout << s << endl;
    }
}
