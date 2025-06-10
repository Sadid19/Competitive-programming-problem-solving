#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool last[n];
    for(int i = 0; i < n; i++)
    {
        last[i] = true;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                last[i] = false;
            }
        }
    }

    int count1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(last[i])
        {
            count1++;
        }
    }

    int result[count1];
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        if(last[i])
        {
            result[index++] = arr[i];
        }
    }

    cout << count1 << endl;
    for(int i = 0; i < count1; i++)
    {
        cout << result[i] << " ";
    }

}
