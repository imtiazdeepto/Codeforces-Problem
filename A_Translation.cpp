// https://codeforces.com/problemset/problem/41/A
#include <bits/stdc++.h>
using namespace std;
void print(string s, string t)
{
    bool ok = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[s.size() - i - 1])
        {
            ok = false;
            break;
        }
        else
            ok = true;
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    string line, s;
    cin >> line >> s;
    print(line, s);
}