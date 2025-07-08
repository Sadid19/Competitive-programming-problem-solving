#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int a[26] = {0};
    for(int i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
        /*
        If s[i] is 'a', then 'a' - 'a' is 0, so freq[0] is incremented.
        If s[i] is 'b', then 'b' - 'a' is 1, so freq[1] is incremented.
        Similarly, for 'z', 'z' - 'a' is 25, so freq[25] is incremented.
        */
    }

    for(int i = 0; i < 26; i++)
    {
        if(a[i] > k)
        {
            cout << "NO \n";
            return 0;
        }
    }
    cout << "YES \n";
}

/*
s = "aabb" and k = 2:
After the first loop, freq is [2, 2, 0, ..., 0] (counts for 'a' and 'b' are 2, others are 0).
The second loop checks:
i = 0 ('a'): freq[0] = 2 (not greater than k = 2).
i = 1 ('b'): freq[1] = 2 (not greater than k = 2).
All other freq[i] are 0 (automatically ≤ k).
Since no freq[i] > k, the loop completes, and the program prints "YES".

Now consider s = "aacaab" and k = 3:
After the first loop, freq is [4, 2, 0, ..., 0] (count for 'a' is 4, 'b' is 2, others are 0).
The second loop checks:
i = 0 ('a'): freq[0] = 4 (greater than k = 3).
Immediately prints "NO" and exits.
*/
