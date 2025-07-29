#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector <int> a(n);
        vector <bool> b(n + 1, false);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = true;
        b[a[0]] = true;

        for(int i = 1; i < n; i++)
        {
            int x = a[i];

            bool adj = false;
            if(x > 1 && b[x - 1])
            {
                adj = true;
            }
            if(x < n && b[x + 1])
            {
                adj = true;
            }
            if(!adj)
            {
                flag = false;
                break;
            }
            b[x] = true;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}
