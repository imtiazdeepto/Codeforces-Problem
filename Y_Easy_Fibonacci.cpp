//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
//Mar/31/2024 05:39 am UTC+6
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int fib[x];

    for (int i = 0; i < x; i++)
    {
        fib[0] = 0;
        fib[1] = 1;
        if (i >= 2)
            fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << " ";
    }
}
