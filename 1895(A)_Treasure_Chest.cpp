#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, k, n;
        cin >> x >> k >> n;

        if(x >= k)
        {
            cout << x << endl;
        }
        else
        {
            if(k - x <= n)
            {
                cout << k << endl;
            }
            else
            {
                cout << k + k - (x + n) << endl;
            }
        }


    }
}
