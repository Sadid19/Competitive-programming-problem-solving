#include <bits/stdc++.h>
using namespace std;
int main()
{
    string f, m, s;
    cin >> f >> m >> s;

    bool fWin = false;
    bool mWin = false;
    bool sWin = false;

    if((f == "paper" && m == "rock" && s == "rock")
        || (f == "rock" && m == "scissors" && s == "scissors")
        || (f == "scissors" && m == "paper" && s == "paper"))
    {
        fWin = true;
    }
    if((f == "rock" && m == "paper" && s == "rock")
        || (f == "scissors" && m == "rock" && s == "scissors")
        || (f == "paper" && m == "scissors" && s == "paper"))
    {
        mWin = true;
    }
    if((f == "rock" && m == "rock" && s == "paper")
        || (f == "scissors" && m == "scissors" && s == "rock")
        || (f == "paper" && m == "paper" && s == "scissors"))
    {
        sWin = true;
    }

    int count1 = 0;
    if(fWin)
    {
        count1++;
    }
    if(mWin)
    {
        count1++;
    }
    if(sWin)
    {
        count1++;
    }

    if(count1 == 1)
    {
        if(fWin)
        {
            cout << "F \n";
        }
        else if(mWin)
        {
            cout << "M \n";
        }
        else
        {
            cout << "S \n";
        }
    }
    else
    {
        cout << "? \n";
    }
}

