#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        int bit = 0;
        long long val = n;

        while(val > 0)
        {
            val /= 2;
            bit++;
        }
        long long sum = 2LL * (bit - 1) + 3;
        cout << sum << endl;

    }
}
