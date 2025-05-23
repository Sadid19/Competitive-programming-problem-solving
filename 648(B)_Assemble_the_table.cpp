#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[2000];
    for(int i = 0; i < 2*n; i++)
    {
        cin >> arr[i];
    }

    for(int j = 0; j < 2*n-1; j++)
    {
        for(int k = 0; k < 2*n-1-j; k++)
        {
            if(arr[k] > arr[k+1])
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << arr[2*n-1-i] << endl;
    }
}
