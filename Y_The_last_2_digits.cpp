#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    long long int product = a * b * c * d;

    cout << product % 100 << endl;
}