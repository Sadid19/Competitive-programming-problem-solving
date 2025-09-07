#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        int counter = 0;
        while(a <= n && b <= n)
        {
            if(a < b)
            {
                a += b;
            }
            else
            {
                b += a;
            }
            counter++;
        }
        cout << counter << endl;
    }
}

