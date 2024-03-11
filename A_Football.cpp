#include <bits/stdc++.h>
using namespace std;
int main()
{
    string player;
    cin >> player;
    int zero = 0, one = 0;
    for (int i = 0; i < player.size();++i)
    {
        if (player[i] == '0')
        {
            zero++;
            if (zero == 7)
            {
                break;
            }
            one = 0;
        }
        else if (player[i] == '1')
        {
            one++;
            if (one == 7)
                break;

            zero = 0;
        }
    }
    if (one == 7 || zero == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}