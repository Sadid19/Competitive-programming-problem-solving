#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> num(n);
    vector<int> even, odd;
    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
        if(num[i] % 2 == 0)
        {
            even.push_back(i + 1);
        }
        else
        {
            odd.push_back(i + 1);
        }
    }
    if(even.size() == 1)
    {
        cout << even[0] << endl;
    }
    else
    {
        cout << odd[0] << endl;
    }
}
