#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char c;
    while(true)
    {

        cin >> a >> c >> b;
        if(c == '?')
        {
            break;
        }

        else if (c == '+')
        {
            cout << a+b << endl;
        }

        else if(c == '-')
        {
            cout << a-b << endl;
        }

        else if(c == '*')
        {
            cout << a*b << endl;
        }

        else if(c == '/')
        {
            cout << a/b << endl;
        }
    }
}
