#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int sum = 0;
    for(int i = 0; i < s.size(); i++)
    {
        int a = s[i] - '0';
        sum += a;
    }
    cout << sum << endl;
}
