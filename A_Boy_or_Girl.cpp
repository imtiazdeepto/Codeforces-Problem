//https://codeforces.com/problemset/problem/236/A
//imtiazdeepto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    set<char> letter;
    for (char ch : str)
    {
        letter.insert(ch);
    }
    int size = letter.size();
    if (size % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}