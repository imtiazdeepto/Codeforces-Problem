//https://codeforces.com/problemset/problem/617/A
//Mar/03/2024 01:35 AM
//handle - ImtiazDeetpo
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int distance, ct = 0, sum = 0;
    cin >> distance;
    if (distance <= 5 and distance >= 1)
        cout << "1" << endl;
    else
    {
        for (int i = 1; sum < distance; ++i)
        {
            sum += 5;
            ct ++;
        }
        cout << ct << endl;
    }
}