#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    ll count1 = 0;
    for(int i = 0; i < n; i++)
    {
        int num = s[i] - 0;
        if(num % 2 == 0)
        {
            count1 += i + 1;
        }
    }
    cout << count1 << endl;
}
