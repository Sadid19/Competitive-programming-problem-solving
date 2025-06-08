#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        int door[15];
        for(int i = 0; i < n; i++)
        {
            cin >> door[i];
        }

        bool buttonUse = false;
        int time = 0;
        bool found = true;

        for(int i = 0; i < n; i++)
        {
            if(door[i] == 0)
            {
                if(buttonUse && time > 0)
                {
                    time--;
                }
            }
            else
            {
                if(!buttonUse)
                {
                    buttonUse = true;
                    time = x - 1;
                }
                else if(time > 0)
                {
                    time--;
                }
                else
                {
                    found = false;
                    break;
                }
            }
        }
        if(found)
        {
            cout << "YES \n";
        }
        else
        {
            cout << "NO \n";
        }
    }
}
