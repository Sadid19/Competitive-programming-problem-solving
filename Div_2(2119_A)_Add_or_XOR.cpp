#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long long INF = 2e18;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b; ll x, y;
        cin >> a >> b >> x >> y;

        ll dp[105];

        for(int i = 0; i <= 101; i++)
        {
            dp[i] = INF;
        }

        dp[a] = 0;
        for(int i = 0; i < 250; i++)
        {
            for(int j = 0; j <= 101; j++)
            {
                if(dp[j] == INF)
                {
                    continue;
                }
                int np = j + 1;
                if(np <= 101)
                {
                    if(dp[j] + x < dp[np])
                    {
                        dp[np] = dp[j] + x;
                    }
                }
                int nx = j ^ 1;
                if(nx >= 0 && nx <= 101)
                {
                    if(dp[j] + y < dp[nx])
                    {
                        dp[nx] = dp[j] + y;
                    }
                }
            }
        }
        if(dp[b] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dp[b] << endl;
        }
    }
    return 0;
}
