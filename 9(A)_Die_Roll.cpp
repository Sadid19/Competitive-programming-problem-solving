#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int n = max(a, b);
    int p = 6 + 1 - n;
    int divisor = gcd(p, 6);

    cout <<  p / divisor << "/" << 6 / divisor << endl;
}

