#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[7] = {0};
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for(int j = 0; j < 7; j++)
        {
            if(s[j] == '1')
            {
                a[j]++;
            }
        }
    }
    int total = 0;
    for(int i =0; i < 7; i++)
    {
        total = max(total, a[i]);
    }
    cout << total << endl;
}
