#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int step = 0;
    int a[5] ={100, 20, 10, 5, 1};
    int i = 0;
    while(n>0)
    {
        if(n-a[i]>=0)
        {
            step++;
            n = n-a[i];
        }
        else
        {
            i++;
        }
    }
    cout << step << endl;
}


    /*
    optimize solution:
    #include <bits/stdc++.h>

     using namespace std;

     int main()
     {

    int n, steps = 0;
    cin >> n;
    int a[5] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {
        steps += n / a[i];
        n = n % a[i];
    }
    cout << steps << '\n';
}

*/
