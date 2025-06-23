//https://codeforces.com/contest/2112/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int a, x, y;
        cin >> a >> x >> y;

        if (x > y)
        swap(x, y);
        if(a > x && a < y )
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
