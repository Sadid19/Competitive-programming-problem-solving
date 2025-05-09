#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a[10], n=10;

   for(int i = 0; i<n; i++)
   {
       cin >> a[i];
   }

   for(int j = n-1; j>=0; j--)
   {
       cout << a[j] << endl;
   }

}
