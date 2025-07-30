#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, s, k;
        cin >> n >> s >> k;

        int minS = min(s, k);
        int result = n - minS + 1;
        cout << result << endl;
    }
}
