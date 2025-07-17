#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
       int n, k;
       cin >> n >> k;

       vector <int> a(n);
       for(int i = 0; i < n; i++)
       {
           cin >> a[i];
       }

       int count1 = 0;
       int i = 0;
       while(i < n)
       {
           if(i + k > n)
           {
               break;
           }
           bool found = true;
           for(int j = 0; j < k; j++)
           {
               if(a[i + j] == 1)
               {
                   found = false;
                   i = i + j + 1;
                   break;
               }
           }
           if(found)
           {
               count1++;
               i = i + k + 1;
           }
       }
       cout << count1 << endl;
    }
}
