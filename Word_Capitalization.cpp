#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[1000];
    cin >> c;

    if(c[0] >= 'a' && c[0] <= 'z') //if (c[0] >= 97 && c[0] <= 122)
    {
        c[0] = c[0] - 32; //c[0] = c[0] - ('a' - 'A');
    }
    cout << c << endl;

}
