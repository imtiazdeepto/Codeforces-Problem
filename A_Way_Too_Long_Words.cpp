//https://codeforces.com/problemset/problem/71/A
//imtiazDeepto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int size = str.size();
        if (size <= 10)
            cout << str << endl;
        else
            cout << str[0] << size - 2 << str[size - 1] << endl;
    }
}