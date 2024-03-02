//https://codeforces.com/problemset/problem/282/A
//imtiazdeepto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, A = 0;
    cin >> a;
    string increment;
    while (a--)
    {
        cin >> increment;
        if (increment == "++X")
            ++A;
        else if (increment == "--X")
            --A;
        else if (increment == "X++")
            A++;
        else if (increment == "X--")
            A--;
    }
    cout << A << endl;
}