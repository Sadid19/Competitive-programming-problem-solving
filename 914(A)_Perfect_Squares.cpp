#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector <int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxNonsqr = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        bool isPerfect = false;

        if(a[i] >= 0)
        {
            int root = sqrt(a[i]);
            if(root * root == a[i])
            {
                isPerfect = true;
            }
        }

        if(!isPerfect)
        {
            maxNonsqr = max(maxNonsqr, a[i]);
        }
    }
    cout << maxNonsqr << endl;
}
