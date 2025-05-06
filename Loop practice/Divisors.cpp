#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    cout<< "Divisors of n are: ";
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout << i << ' ';
            sum++;
        }
    }
    cout<< endl;
    cout << "Total divisor count: " << sum << endl;
}
