#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int count1 = 0;
    for(int i = 0; i < n; i++)
    {
        int p, v, t;
        cin >> p >> v >> t;

    int sum = p + v + t;
    if(sum >= 2)
    {
        count1++;
    }
    }
    cout << count1 << endl;

}
