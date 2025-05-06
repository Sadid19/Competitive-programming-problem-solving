#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;

    for(int i=1; i<=row; i++)
    {
        if(i%2==0)
        {
            for(int j=1; j<=col; j++)
            {
                if(j%2==0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
        else
        {
            for(int j=1; j<=col; j++)
            {
                if(j%2==0)
                {
                    cout << ".";
                }
                else
                {
                    cout << "#";
                }
            }
            cout << endl;
        }
    }
}
