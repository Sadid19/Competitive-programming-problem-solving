#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = min(b / 2, c / 4);
    int y = min(a, x);
    int total = 7 * y;

    cout << total << endl;
}
