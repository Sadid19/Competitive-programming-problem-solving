#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count1 = 0, count2 = 0;
    int arr[a];

    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
        if(arr[i] <= b)
        {
            count1++;
        }
        else
        {
            count2+=2;
        }
    }
    cout << count1 + count2;
}
