#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, m;
    cin >> n >> m;

    ll a = 1;
    if(n >= 30)
    {
        cout << m << endl;
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            a *= 2;
        }
        cout << m % a << endl;
    }
}
