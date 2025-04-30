#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin >> i;

    while(i--)
    {
        char c[4];
        cin >> c;

        int flag = 1;

        if(c[0] != 'y' && c[0] != 'Y')
        {
            flag = 0;
        }
        if(c[1] != 'e' && c[1] != 'E')
        {
            flag = 0;
        }
        if(c[2] !='s' && c[2] != 'S')
        {
            flag = 0;
        }

        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
