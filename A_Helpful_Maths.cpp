//https://codeforces.com/problemset/problem/339/A
//imtiazdeepto
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num, output;
    cin >> num;
    sort(num.begin(), num.end());
    for (int i = 0; i < num.size(); ++i)
    {
        if (isdigit(num[i]))
        {
            output += num[i];
            if (i != num.size() - 1)
                output += "+";
        }
    }
    cout << output << endl;
}