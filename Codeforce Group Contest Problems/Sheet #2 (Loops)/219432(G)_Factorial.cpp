#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        long long int fact = 1;

        for(int i = 1; i <= n; i++)
        {
            fact *= i ;

        }
        cout << fact << endl;
    }
}
