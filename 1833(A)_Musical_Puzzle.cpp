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

        set <string> melodies;
        for(int i = 0; i < n-1; i++)
        {
            string pair = s.substr(i, 2);
            melodies.insert(pair);
        }

        cout << melodies.size() << endl;
    }
}
