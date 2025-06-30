#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector < int > vec(n);
        for(int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int count1 = 1;

        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                if(vec[i] == count1)
                {
                    count1++;
                }
                continue;
            }
            count1++;
            if(vec[i] ==  count1)
            {
                count1++;
            }
        }
        cout << count1 << endl;
    }
}
