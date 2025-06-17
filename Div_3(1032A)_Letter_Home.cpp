#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, s;
        cin >> n >> s;

        int min_x = 101;
        int max_x = 0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x < min_x)
            {
                min_x = x;
            }
            if(x > max_x)
            {
                max_x = x;
            }
        }

        int step;
        if(s < min_x)
        {
            step = max_x - s;
        }
        else if(s > max_x)
        {
            step = s - min_x;
        }
        else
        {
            step = (max_x - min_x) + min(max_x - s, s- min_x);
        }

        cout << step << endl;
    }
}
