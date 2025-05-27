#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int a, b;
        cin >> a >> b;
        int remainder = a%b;

        if(a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int steps = b - remainder;
            cout << steps << endl;
        }
    }
}
