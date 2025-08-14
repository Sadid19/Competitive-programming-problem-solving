//https://codeforces.com/problemset/problem/41/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    string s = s1;
    reverse(s.begin(), s.end());

    if(s == s2)
    {
        cout << "YES \n";
    }
    else
    {
        cout << "NO \n";
    }
}
