#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;

    ll sum = 0;
    ll total = n * (n + 1) / 2;

    for(int i = 0; i < n - 1; i++)
    {
        int num;
        cin >> num;
        sum += num;
    }
    cout << (total - sum) << endl;
}
