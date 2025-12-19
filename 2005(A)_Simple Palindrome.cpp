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
        string s = "aeiou";
        string s2 = " ";
        for(int i = 0; i < n; i++)
        {
            s2 += s[i%5];
        }
        cout << s2 << endl;
    }
}
