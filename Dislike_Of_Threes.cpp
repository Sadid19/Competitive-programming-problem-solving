
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int k;
       cin >> k;
       int cnt = 0;
       for(int i=1; ; i++)
       {
           if(i%3==0 || i%10==3)
           {
               continue;
           }
           cnt++;
           if(cnt==k)
           {
               cout << i << endl;
               break;
           }
       }
   }
}
