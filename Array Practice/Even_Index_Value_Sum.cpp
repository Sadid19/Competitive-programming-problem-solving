#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10], n=10;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int j=0; j<n; j++)
    {
        if(b[j]%2 == 0)
        {
            sum+=a[j];
        }
    }
    cout << sum << endl;
}
