#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        bool first = (x1 > y1);
        bool second = (x2 > y2);

        if(first != second)
        {
            cout << "NO \n";
        }
        else
        {
            cout << "YES \n";
        }
    }
}
