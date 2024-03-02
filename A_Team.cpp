//https://codeforces.com/problemset/problem/231/A
//imtiazdeepto

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c, yes = 0;
    while (n--)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
            yes++;
    }
    cout << yes << endl;
}