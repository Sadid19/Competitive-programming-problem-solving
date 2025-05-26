#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;
        int year = stoi(s);
        bool found =false;

        for(int i = 0; i*i <= year; i++)
        {
            if(i*i == year)
            {
                int a = i/2;
                int b = i-a;
                cout << a << " " << b << endl;
                found = true;
                break;
            }
        }

    if(!found)
    {
        cout << -1 << endl;
    }
    }
}

