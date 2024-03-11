#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int number;
    cin >> number;
    int ct = 0;
    while (number != 0)
    {
        if (number % 10 == 4 || number % 10 == 7)
        {
            ct++;
        }
        number = number / 10;
    }
    if (ct == 4 || ct == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}