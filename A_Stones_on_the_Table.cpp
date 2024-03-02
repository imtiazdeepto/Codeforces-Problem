//https://codeforces.com/problemset/problem/266/A
//Mar/03/2024 00:53 AM
//handle-ImtiazDeepto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    string l;
        cin >> l;
    for (int i = 0; i < n; i++)
    {
        if (l[i] == l[i + 1])
            count++;
    }
    cout << count  << endl;
}