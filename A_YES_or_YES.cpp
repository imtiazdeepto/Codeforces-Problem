#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        string filename;
        cin >> filename;
        if ((filename[0] == 'Y' || filename[0] == 'y') and (filename[1] == 'E' or filename[1] == 'e') and (filename[2] == 'S' or filename[2] == 's'))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}