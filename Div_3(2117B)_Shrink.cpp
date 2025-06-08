#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int mid = (n - 1) / 2;

        for(int i = 0; i < n; i++)
        {
            arr[i] = i+ 2;

        }

        int current = n;
        for(int i = mid; i < n - 1; i++)
        {
            arr[i] = current--;
        }
        arr[n - 1] = 1;

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
