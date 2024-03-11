#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c == a + b)
        {
            cout << "+" << endl;
        }
        else if (c == a - b)
        {
            cout << "-" << endl;
        }
    }
}