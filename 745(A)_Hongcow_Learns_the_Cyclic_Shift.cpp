#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    unordered_set <string> newString;
    string current = s;

    newString.insert(current);
    for(int i = 0; i < s.length(); i++)
    {
        char lastChar = current.back();
        current.pop_back();
        current.insert(current.begin(), lastChar);
        newString.insert(current);
    }
    cout << newString.size() << endl;

}
