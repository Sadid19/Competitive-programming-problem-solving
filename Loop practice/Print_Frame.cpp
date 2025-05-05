#include <bits/stdc++.h>
using namespace std;
int main()
{

    while(1)
    {
        int row, column;
        cin >> row >> column;
        if(row == 0  && column == 0)
        {
            break;
        }
        for(int i = 1; i <= row; i++)
        {
            if(i == 1 || i == row)
            {
                for(int j = 1; j <= column; j++)
                {
                    cout << "#";
                }
            }
            else
            {
                cout << "#";
                for(int j = 1; j<= column-2; j++)
                {
                    cout << ".";
                }
                cout << "#";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}
