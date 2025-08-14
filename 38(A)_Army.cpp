#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d[n - 1];
    for(int i = 0; i < n - 1; i++)
    {
        cin >> d[i];
    }

    int a, b;
    cin >> a >> b;
    int year = 0;
    for(int i = a - 1; i < b - 1; i++)
    {
        year += d[i];
    }
    cout << year << endl;
}
