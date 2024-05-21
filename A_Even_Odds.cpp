#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int a, b;
    cin >> a >> b;
    long long int mid = ceil(a / 2.0);
    if (b <= mid)
    {
        cout << 2 * b - 1 << endl;
    }
    else if (b > mid)
    {
        cout << (b - mid) * 2 << endl;
    }
}