#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;

   int arr[n-1];
   for(int i = 0; i<n-1; i++)
   {
       cin >> arr[i];
   }

   int sum1 = 0;
   for(int i = 1; i<=n; i++)
   {
       sum1+=i;
   }

   int sum2 = 0;
   for(int i = 0; i<n-1; i++)
   {
       sum2+=arr[i];
   }

   cout << sum1 - sum2;
}
