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

        int result = 1 + (n - 1) * k;

        cout << result << endl;
    }
}
