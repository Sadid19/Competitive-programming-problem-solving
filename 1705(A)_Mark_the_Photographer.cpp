#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
    int n, x;
    cin >> n >> x;

    int count1 = 0;
    int a = 2 * n;
    int arr[a];

    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + a);
    for(int i = 0; i < n; i++)
    {
        if(arr[i + n] - arr[i] >= x)
        {
            count1++;
        }
    }
    if(count1 == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
}
