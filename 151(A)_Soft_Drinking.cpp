#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int cal1 = k * l;
    int cal2 = cal1 / nl;
    int cal3 = c * d;
    int cal4 = p / np;

    int ans = min({cal2, cal3, cal4});

    cout << ans / n << endl;

}
