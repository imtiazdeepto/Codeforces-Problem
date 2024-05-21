// https://codeforces.com/problemset/problem/734/A
#include <bits/stdc++.h>
using namespace std;

void result(string ch, int x)
{
    int a = 0, d = 0;

    for (int i = 0; i < x; ++i)
    {
        if (ch[i] == 'A')
            a++;
        else if (ch[i] == 'D')
            d++;
    }

    if (a == d)
        cout << "Friendship" << endl;
    else if (a > d)
        cout << "Anton" << endl;
    else if (a < d)
        cout << "Danik" << endl;
}
int main()
{
    int x;
    cin >> x;
    string ch;
    cin >> ch;
    result(ch, x);

    return 0;
}