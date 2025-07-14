#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll yc, bc;
    cin >> yc >> bc;

    ll y, g, b;
    cin >> y >> g >> b;

    ll requireYellow = 2 * y + g;
    ll requireBlue = g + 3 * b;

    ll deficitYellow = max(0LL, requireYellow - yc);
    ll deficitBlue = max(0LL, requireBlue - bc);

    cout << deficitYellow + deficitBlue << endl;
}
