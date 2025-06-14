#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;

    int a = s.size();
    int b = t.size();

    int a1 = a - 1;
    int b1 = b - 1;
    int count1 = 0;
    while(a1 >= 0 && b1 >= 0 && s[a1] == t[b1])
    {
        a1--;
        b1--;
        count1++;
    }
    int sum = a - count1 + b - count1;

    cout << sum << endl;
}
