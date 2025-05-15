#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int num1, num2, num3;
        cin >> num1 >> num2 >> num3;

        long long int sum = num1 + num2 + num3;

        if(sum%3!=0)
        {
            cout << "NO" << endl;
        }

        else
        {
            long long int a = sum/3;
            if(a>=num2)
            {
             cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
