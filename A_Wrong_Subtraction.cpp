#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;

    while (x--)
    {
        int chek = n % 10;
        if (chek != 0)
            n--;
        else if (chek == 0)
        {
            n = n / 10;
        }
    }
    cout << n << endl;
}