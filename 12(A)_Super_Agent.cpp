#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> grid(3);
    for(int i = 0; i < 3; i++)
    {
        cin >> grid[i];
    }

    bool symmetric = true;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(grid[i][j] == 'X')
            {
                int mirror_i = 2 - i;
                int mirror_j = 2 - j;
                if(grid[mirror_i][mirror_j] != 'X')
                {
                    symmetric = false;
                    break;
                }
            }
        }
        if(!symmetric)
        {
            break;
        }
    }
    if(symmetric)
    {
        cout << "YES \n";
    }
    else
    {
        cout << "NO \n";
    }
}
