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
        string s;
        char ch = 'a';

        for(int i =  0; i < k; i++)
        {
            s += ch;
            ch++;
        }

        string s1;
        for(int i = 0; i < n; i++)
        {
            s1 += s;
        }
        cout << s1 << endl;
    }
}
