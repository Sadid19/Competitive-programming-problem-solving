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

        bool found = false;
        for(int i = 1; i < n - 1; i++)
        {
            string a = s.substr(0 , i);
            string b = s.substr(i, 1);
            string c = s.substr(i + 1);
            string ac = a + c;

            for(int j = 0; j <= ac.size() - 1; j++)
            {
                if(ac[j] == b[0])
                {
                    found = true;
                    break;
                }
            }
            if(found)
            {
                break;
            }
        }
        if(found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
