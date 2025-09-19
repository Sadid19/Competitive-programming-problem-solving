#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int b, c, h;
        cin >> b >> c >> h;

        int total = c + h;
        int totalBread = min (b, total + 1);
        int layer = totalBread + (totalBread - 1);
        cout << 2 * totalBread - 1 << endl;
    }
}
