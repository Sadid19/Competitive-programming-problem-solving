#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char ch;
    bool found = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> ch;
            if(ch == 'C' || ch == 'M' || ch == 'Y')
            {
                found = true;
            }
        }
    }
    if(found)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }
}
