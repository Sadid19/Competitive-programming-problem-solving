#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int moves = 0;
        bool found = true;
        while(n != 1)
        {
            if(n % 6 == 0)
            {
                n /= 6;
                moves++;
            }
            else if(n % 3 == 0)
            {
                n *= 2;
                moves++;
            }
            else
            {
                found = false;
                break;
            }
        }
        if(found)
        {
            cout << moves << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
