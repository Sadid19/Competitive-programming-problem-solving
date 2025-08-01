#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    string s;
    cin >> s;
    bool found;

    do
    {
        found = false;
        for(int i = 1; i < s.size(); i++)
        {
            if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
               && (s[i - 1] == 'a' || s[i - 1] == 'e' || s[i - 1] == 'i' || s[i - 1] == 'o' || s[i - 1] == 'u' || s[i - 1] == 'y'))
            {
                s.erase(i, 1);
                found = true;
                break;
            }
        }
    }
    while(found);
    cout << s << endl;
}
