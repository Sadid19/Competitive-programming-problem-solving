#include <bits/stdc++.h>
using namespace std;
int main()
{
    string vic1, vic2;
    cin >> vic1 >> vic2;
    int n;
    cin >> n;

    cout << vic1 << " " << vic2 << endl;
    for(int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if(vic1 == s1)
        {
            vic1 = s2;
        }
        else
        {
            vic2 = s2;
        }
        cout << vic1 << " " << vic2 << endl;
    }
}
