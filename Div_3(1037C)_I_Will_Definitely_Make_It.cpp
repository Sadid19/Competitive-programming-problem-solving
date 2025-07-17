#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector <int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cur = a[k - 1];
        int mx = a[0];
        for(int x : a)
        {
            if(x > mx)
            {
                mx = x;
            }
        }

        if(cur == mx)
        {
            cout << "YES \n";
            continue;
        }

        sort(a.begin(), a.end());
        bool check = true;
        int prev = 0;
        for(int x : a)
        {
            if(x < cur)
            {
                continue;
            }
            if(prev != 0 && x - prev > cur)
            {
                check = false;
                break;
            }
            prev = x;
        }
        if(check)
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }
}
