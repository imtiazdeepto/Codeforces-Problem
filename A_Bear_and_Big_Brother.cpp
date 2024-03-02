//https://codeforces.com/problemset/problem/791/A
//Mar/03/2024 01:06 AM
//handle-ImtiazDeepto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int limak, bob, ct = 0;
    cin >> limak >> bob;
    for (int i = 0; limak <= bob; ++i)
    {
        limak = limak * 3;
        bob = bob * 2;
        ct++;
    }
    cout << ct << endl;
}