#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    long long n, a, b,c;
    cin>>n>>a>>b>>c;

    long long sum = a + b + c;
    long long full = n/sum;
    long long remain = n%sum;

    if(remain == 0)
    {
        cout << 3* full << endl;
    }
    else
    {
        long long total = 0, day = 0;
        if(remain > 0)
        {
            total += a;
            day++;
        }
        if(remain > total)
        {
            total += b;
            day++;
        }
        if(remain > total)
        {
            total += c;
            day++;
        }
        cout << 3* full + day << endl;
    }
    }
}
