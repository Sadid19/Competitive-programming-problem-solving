#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x, p;
    cin >> x >> p;

    float discountRate = x/100;
    float val = 1 - discountRate;
    double orginalPrice = p / val;

    cout << orginalPrice << endl;
}
