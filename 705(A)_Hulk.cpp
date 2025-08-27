#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string s = "I hate";
    for(int i = 2; i <= n; i++)
    {
        if(n % 2 == 0)
        {
            s += " that I love";
        }
        else
        {
            s += " that I hate";
        }
    }
    s += " it";
    cout << s << endl;
}
