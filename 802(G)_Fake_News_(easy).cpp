#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string s1 = "heidi";
    int counter = 0;
    for(char c : s)
    {
        if(c == s1[counter])
        {
            counter++;
        }
    }
    if(counter == s1.length())
    {
        cout << "YES \n";
    }
    else
    {
        cout << "NO \n";
    }
}
