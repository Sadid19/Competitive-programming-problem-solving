#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
      ll a, b, c;
      cin >> a >> b >> c;
      ll total = a + 2 * b + 3 * c;

      if(total % 2 == 0)
      {
          cout << 0 << endl;
      }
      else
      {
          cout << 1 << endl;
      }
    }
}
