#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        if(n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            int floor = ((n - 2 - 1) / x) + 2;
            cout << floor << endl;
        }
    }
}
