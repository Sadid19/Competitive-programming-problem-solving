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

        int total = a + b + c + d;
        if(total == 0)
        {
            cout << 0 << endl;
        }
        else if(total == 4)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}
