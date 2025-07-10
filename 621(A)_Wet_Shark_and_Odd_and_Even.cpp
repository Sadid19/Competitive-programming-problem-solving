#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;

    ll sum = 0;
    ll odd = 0;

    vector <ll> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];

        if(a[i] % 2 != 0)
        {
            if(odd == 0 || a[i] < odd)
            {
                odd = a[i];
            }
        }
    }

    if(sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - odd << endl;
    }

}
