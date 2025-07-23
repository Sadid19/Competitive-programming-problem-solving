#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll time1 = abs(a - 1);
        ll time2 = abs(b - c) + abs(c - 1);

        if(time1 < time2)
        {
            cout << 1 << endl;
        }
        else if(time2 < time1)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
}
