// https://codeforces.com/problemset/problem/467/A
//Mar/28/2024 04:59am UTC+6
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = 0;
    while (n--)
    {
        int people, capacity;
        cin >> people >> capacity;
        if (capacity - people >= 2)
        {
            result++;
        }
    }
    cout << result << endl;
}