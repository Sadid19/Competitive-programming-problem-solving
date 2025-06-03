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
        string s;
        cin >> s;
        int first = 0;
        int last = 0;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'B')
            {
                if(first == 0)
                {
                    first += i + 1;
                }
                last = i + 1;
            }
        }

        cout << last - first + 1 << endl;
    }
}
