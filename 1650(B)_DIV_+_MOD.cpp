#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int l, r, a;
        cin >> l >> r >> a;

        int c1 = r;
        int c2 = (r / a) * a - 1;
        int maxF;

        if(c2 >= l)
        {
            maxF = max((c1 / a) + (c1 % a),
                      (c2 / a) + (c2 % a));
        }
        else
        {
            maxF = (c1 / a) + (c1 % a);
        }
        cout << maxF << endl;
    }
}
