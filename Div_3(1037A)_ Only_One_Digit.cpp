#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        string s = to_string(x);

        set <char> digitX;
        for(char c : s)
        {
            digitX.insert(c);
        }

        for(int i = 0; ; i++)
        {
            string s1 = to_string(i);

            bool found = false;
            for(char c : s1)
            {
                if(digitX.count(c))
                {
                    found = true;
                    break;
                }
            }
            if(found)
            {
                cout << i << endl;
                break;
            }
        }
    }
}
