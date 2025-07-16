#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;

        ll d = y - x;
        ll s = a + b;

        if(d % s != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << d / s << endl;
        }
    }
}
