#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, j, k;
        cin >> n >> j >> k;

        vector <int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = a[0];
        for(int i = 1; i < n; i++)
        {
            if(a[i] > m)
            {
                m = a[i];
            }
        }

        if(k > 1 || a[j - 1] == m)
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }
}
