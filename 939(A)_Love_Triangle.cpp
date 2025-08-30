#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    bool found = false;
    for(int i = 1; i <= n; i++)
    {
        int a = arr[i];
        int b = arr[a];
        int c = arr[b];
        if(c == i)
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
