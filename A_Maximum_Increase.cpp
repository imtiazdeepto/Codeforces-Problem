#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int  x;
    cin >> x;
    long long int  n[x + 1], ct = 0, ct2 = 0;
    for (int i = 1; i <= x; i++)
    {
        cin >> n[i];
        if (n[i - 1] >= n[i])
        {
            if (ct2 < ct)
            {
                ct2 = ct;
            }
            ct = 1;
        }
        else
        {
            ct++;
        }
    }
    if (ct2 < ct)
    {
        cout << ct << endl;
    }
    else
    {
        cout << ct2 << endl;
    }
}