#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll m, n, a;
    cin >> m >> n >> a;

    ll flagstone_n = (n + a - 1) / a;
    ll flagstone_m = (m + a - 1) / a;

    cout << flagstone_n * flagstone_m << endl;
}

