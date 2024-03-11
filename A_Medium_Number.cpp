#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
       int a, b, c;
    cin >> a >> b >> c;
    if ((a > b and a < c) or (a < b and a>c))
        cout << a << endl;
    else if ((c > a and c < b) || (c > b and c < a))
        cout << c << endl;
        else if ((b > a and b < c) or (b < a and b > c))
        cout << b << endl;
    }
    
   
}