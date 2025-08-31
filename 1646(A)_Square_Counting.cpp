#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n, s;
        cin >> n >> s;

        ll total = n * n;
        cout << s / total << endl;
    }
}
