#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int minimum = min(a, min(b, c));
        bool found = true;
        if(a % minimum != 0 && b % minimum != 0 && c % minimum != 0)
        {
            found = false;
        }

        int count1 = 0;
        while(a != minimum)
        {
            if(count1 > 3 || a % minimum != 0)
            {
                found = false;
                break;
            }
            a -= minimum;
            count1++;
        }

        while(b != minimum)
        {
            if(count1 > 3 || b % minimum != 0)
            {
                found = false;
                break;
            }
            b -= minimum;
            count1++;
        }

        while(c != minimum)
        {
            if(count1 > 3 || c % minimum != 0)
            {
                found = false;
                break;
            }
            c -= minimum;
            count1++;
        }
        if(count1 <= 3 && found)
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }
}
