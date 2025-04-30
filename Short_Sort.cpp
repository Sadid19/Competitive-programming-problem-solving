
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

        int flag = 0;

        if(c[0] == 'a' && c[1] == 'b' && c[2] == 'c')
        {
            flag = 1;
        }

        // 0 1
        char temp = c[1];
        c[1] = c[0];
        c[0] = temp;

        if(c[0] == 'a' && c[1] == 'b' && c[2] == 'c')
        {
            flag = 1;
        }

        temp = c[1];
        c[1] = c[0];
        c[0] = temp;

        //0 2
        temp = c[2];
        c[2] = c[0];
        c[0] = temp;

         if(c[0] == 'a' && c[1] == 'b' && c[2] == 'c')
        {
            flag = 1;
        }

        temp = c[2];
        c[2] = c[0];
        c[0] = temp;

        //1 2
        temp = c[2];
        c[2] = c[1];
        c[1] = temp;

         if(c[0] == 'a' && c[1] == 'b' && c[2] == 'c')
        {
            flag = 1;
        }

        temp = c[2];
        c[2] = c[1];
        c[1] = temp;

        if(flag == 1)
        {
            cout<< "YES" << endl;
        }
        else
        {
            cout<< "NO" << endl;
        }
    }
}
