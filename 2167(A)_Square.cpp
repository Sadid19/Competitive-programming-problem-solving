#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(a == b && a == c && a == d || b == a && b == c && b == d || c == a && c == b && c == d ||
           d == a && d == b && d == c)
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }
}
