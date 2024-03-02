//https://codeforces.com/problemset/problem/112/A
//imtiazdeepto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, _str;
    cin >> str >> _str;
    for (char &c : str)
    {
        c = tolower(c);
    }
    for (char &d : _str)
    {
        d = tolower(d);
    }

    if (str == _str)
        cout << "0" << endl;
    else if (str > _str)
        cout << "1" << endl;
    else if (str < _str)
        cout << "-1" << endl;

    return 0;
}