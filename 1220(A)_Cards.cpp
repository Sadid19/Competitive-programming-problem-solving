//https://codeforces.com/problemset/problem/1220/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;

    int count_one = 0;
    int count_zero = 0;

    for(char c : s)
    {
        if(c == 'n')
        {
            count_one++;
        }
        if(c == 'z')
        {
            count_zero++;
        }
    }

    for(int i = 0; i < count_one; i++)
    {
        cout << "1 ";
    }

    for(int i = 0; i < count_zero; i++)
    {
        cout << "0 ";
    }

    cout << endl;
}
