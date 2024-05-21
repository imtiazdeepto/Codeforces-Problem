//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
//Mar/31/2024 05:18am UTC+6
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int y, mx = -1;
    while (x--)
    {
        cin >> y;
        mx = max(mx, y);
    }
    cout << mx << endl;
}