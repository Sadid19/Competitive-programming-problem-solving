#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if((a < b+c && b < a+c && c < a+b) || (a < b+d && b < a+d && d < a+b) || (a < d+c && d < a+c && c < a+d) || (d < b+c && b < d+c && c < d+b))
    {
        cout << "TRIANGLE \n";
    }
    else if((a == b+c || b == a+c || c == a+b) || (a == b+d || b == a+d || d == a+b) || (a == d+c || d == a+c || c == a+d) || (d == b+c || b == d+c || c == d+b))
    {
        cout << "SEGMENT \n";
    }
    else
    {
        cout << "IMPOSSIBLE \n";
    }
}
