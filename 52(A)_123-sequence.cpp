#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector <int> a(n);
    int count1 = 0; int count2 = 0; int count3 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
        {
            count1++;
        }
        else if(a[i] == 2)
        {
            count2++;
        }
        else
        {
            count3++;
        }
    }
    int maxCount = max({count1, count2, count3});
    cout << (n - maxCount) << endl;
}
