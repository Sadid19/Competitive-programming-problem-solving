#include <bits/stdc++.h>
using namespace std;
int main()
{
    string password;
    cin >> password;

    bool upper = false;
    bool lower = false;
    bool digit = false;

    if(password.size() < 5)
    {
        cout << "Too weak \n";
        return 0;
    }
    for(char c : password)
    {
        if(isupper(c))
        {
            upper = true;
        }
        else if(islower(c))
        {
            lower = true;
        }
        else if(isdigit(c))
        {
            digit = true;
        }
    }

    if(upper && lower && digit)
    {
        cout << "Correct \n";
    }
    else
    {
        cout << "Too weak \n";
    }
    return 0;
}
