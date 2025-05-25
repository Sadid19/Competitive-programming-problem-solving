#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int count1 = 0;
    cin >> s;
    int length = s.length();

    for(int i = 0; i < length; i++)
    {
        if(s[i] == 'a')
        {
            count1 += i;
            //count1 ++;
        }
    }

    cout << min(length, 2*count1-1) << endl;
}
