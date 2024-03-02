//https://codeforces.com/problemset/problem/158/A
//imtiazdeepto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= v[k-1] and v[i] != 0)
            ct++;
    }
    cout << ct << endl;
}