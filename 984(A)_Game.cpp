#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    int a[100];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }


    for(int j = 0; j<n; j++)
    {
        for(int k = j+1; k<n; k++)
        {
          if(a[j] > a[k])
          {
              temp = a[j];
              a[j] = a[k];
              a[k] = temp;
          }
        }
    }
    int mid = n/2;
    if(n%2 == 0)
    {
        mid--;
    }
    cout << a[mid] << endl;
}
