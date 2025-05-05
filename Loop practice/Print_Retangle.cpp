#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
    int n,m;
    cin >> n >> m;
    if( n == 0 && m == 0)
    {
        break;
    }
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            cout << "#";
        }
        cout << endl;
    }
    cout << endl;
    }
}
