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

        int count0 = 0, count1 = 0;
        for(char c : s)
        {
            if(c == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        if(abs(count0 = count1) <= 1)
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }
}
