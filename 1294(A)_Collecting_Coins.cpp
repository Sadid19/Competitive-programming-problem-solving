#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll total = a + b + c + n;
        if(total % 3 != 0)
        {
            cout << "NO \n";
        }
        else
        {
            ll x = total / 3;
            if(x >= a && x >= b && x >= c)
            {
                cout << "YES \n";
            }
            else
            {
                cout << "NO \n";
            }
        }
    }

}
