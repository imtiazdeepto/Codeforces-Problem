#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int t;
        char ch2 = 'a';

        cin >> t;
        while (t--)
        {
            char ch;
            cin >> ch;

            if (ch2 <= ch)
            {
                ch2 = ch;
            }
        }
        cout << ch2 - '`' << endl;
    }
}