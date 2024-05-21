// https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>
using namespace std;
void printResult(int n)
{
    int x, y, z, sumOfX = 0, sumOfY = 0, sumOfZ = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y >> z;
        sumOfX += x;
        sumOfY += y;
        sumOfZ += z;
    }
    if (sumOfX == 0 and sumOfY == 0 and sumOfZ == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printResult(n);
}