#include <bits/stdc++.h>
using namespace std;
int main()
{
    int g,c,l;
    int n = 3;
    cin >> g >> c >> l;

    int maxNum = max({g, c, l});
    int minNum = min({g, c, l});
    int diff = maxNum - minNum;
    int x = g + c + l - maxNum - minNum;

    if(diff >= 10)
    {
        cout << "check again \n";
    }
    else
    {
        cout << "final " << x <<endl;
    }
}
