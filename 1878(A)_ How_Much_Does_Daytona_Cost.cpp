#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[1000];
        bool found = false;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == k)
            {
                found = true;
                break;
            }
        }
        if(found)
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }
}
