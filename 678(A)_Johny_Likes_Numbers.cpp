#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;

    ll q = n / k;
    ll x = (q + 1) * k;
    cout << x << endl;
}
