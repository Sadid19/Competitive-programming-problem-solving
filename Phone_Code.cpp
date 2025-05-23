#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1;
    int count1 = s1.length();

    for(int i = 1; i < n; i++)
    {
        cin >> s2;
        for(int j = 0; j < count1; j++)
        {
            if(s1[j] != s2[j])
            {
                count1 = j;
                break;
            }
        }
    }
    cout << count1 << endl;
}
