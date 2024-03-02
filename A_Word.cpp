//https://codeforces.com/problemset/problem/59/A
//Mar/03/2024 04:10AM
//handle ImtiazDeepto
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;
    int ct_upper = 0, ct_lower = 0;
    for (int i = 0; i < name.size(); ++i)
    {
        if (isupper(name[i]))
            ct_upper++;
        else
            ct_lower++;
    }
    if (ct_upper > ct_lower)
    {
        for (int i = 0; i < name.size(); ++i)
        {
            name[i] = toupper(name[i]);
        }
    }
    else
    {
        for (int i = 0; i < name.size(); ++i)
        {
            name[i] = tolower(name[i]);
        }
    }
    cout << name << endl;
    return 0;
}