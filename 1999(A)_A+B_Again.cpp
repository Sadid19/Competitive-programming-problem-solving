#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string num;
        cin >> num;

        string s1 = num.substr(0, 1);
        string s2 = num.substr(1, 1);
        int a = stoi(s1);
        int b = stoi(s2);
        int sum = a + b;

        cout << sum << endl;
    }
}
