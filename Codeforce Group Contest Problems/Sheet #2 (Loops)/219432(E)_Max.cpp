#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int maxValue = 0;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if(num > maxValue)
        {
            maxValue = num;
        }
    }
    cout << maxValue << endl;
}
