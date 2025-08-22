#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;

    int a = n % 10;
    if(a == 0)
    {
        cout << n << endl;
    }
    else if( a <= 5)
    {
        cout << n - a << endl;
    }
    else
    {
        cout << n + (10 - a) << endl;
    }
}
