
#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;

while(t--)
{
int n, m;
cin >> n >> m;

if(n >= m)
{
int diff = n - m;

if(diff % 2 == 0)
{
  cout << "YES" << endl;
}
else
{
  cout << "NO" << endl;
}
}
else
{
    cout << "NO" << endl;
}
}
}
