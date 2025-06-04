#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;

while(t--)
{
int a, b, c;
cin >> a >> b >>  c;

int sum1 = abs(a - b) + abs(a - c);
int sum2 = abs(b - a) + abs(b - c);
int sum3 = abs(c - a) + abs(c - b);

int totalSum = min(sum1, min(sum2, sum3));

cout << totalSum << endl;
}
}
