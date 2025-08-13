//https://codeforces.com/problemset/problem/2037/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int score = 0;
        for (int count : freq)
        {
            score += count / 2;
        }

        cout << score << endl;
    }

}
