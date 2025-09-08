#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;

    string s1;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            s1 += s[i];
        }
        else
        {
            s1 = s[i] + s1;
        }
    }
    if(n % 2 == 0)
    {
        reverse(s1.begin(), s1.end());
    }
    cout << s1 << endl;
}
