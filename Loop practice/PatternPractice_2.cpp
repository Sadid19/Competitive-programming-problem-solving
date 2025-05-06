/*
###
###
...
...
###
###
...
...
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h,w;
    cin >> h >> w;

    int c=0;
    for(int i=1; i<=h; i+=2)
    {
        if(c%2==0)
        {
            for(int j=1; j<=w; j++)
            {
                cout << "#";
            }
            cout << endl;
            if(i!=h)
            {
                for(int j = 1; j<w; j++)
                {
                    cout << "#";
                }
                cout << endl;
            }
        }
        else
    {
        for(int j=1; j<=w; j++)
        {
            cout << ".";
        }
        cout << endl;
        if(i!=h)
        {
            for(int j=1; j<=w; j++)
            {
                cout << ".";
            }
            cout << endl;
        }
    }
     c++;

    }
}
