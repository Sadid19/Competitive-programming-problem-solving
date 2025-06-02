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
        string s;
        cin >> s;


        if(s.back() == 'A')
        {
            cout << "A \n";
        }
        else
        {
            cout << "B \n";
        }
    }
}

//s.back() = gives the last element of the string!
