#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll m, a, b, c;
        cin >> m >> a >> b >> c;

        ll seatA = min(a, m);
        ll seatB = min(b, m);
        ll seats = (m - seatA) + (m - seatB);
        ll seatC = min(c, seats);

        ll total = seatA + seatB + seatC;

        cout << total << endl;

    }
}
