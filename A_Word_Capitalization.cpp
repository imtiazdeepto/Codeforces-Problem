//https://codeforces.com/problemset/problem/281/A
//imtiazdeepto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    if (word[0] >= 'A' && word[0] <= 'Z')
    {
        cout << word << endl;
    }
    else
    {
        word[0] = word[0] - 32;
        cout << word << endl;
    }
}