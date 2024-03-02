//https://codeforces.com/problemset/problem/546/A
//Mar/03/2024 03:56 AM
//handle - ImtiazDeepto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int k, n, w, sum = 0;
    cin >> k >> n >> w;
    for (long int i = 1; i <= w; i++)
    {
        sum += (k * i);
    }
    if (sum < n)
        cout << "0" << endl;
    else
        cout << sum - n << endl;
}