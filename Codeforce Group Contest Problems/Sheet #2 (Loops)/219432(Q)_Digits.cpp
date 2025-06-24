#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        reverse(s.begin(), s.end());

        for(char c : s)
        {
            long long int digit = c - '0';
            cout << digit << " ";
        }
        cout << endl;
    }
}
