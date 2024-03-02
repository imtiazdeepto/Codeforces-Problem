#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l_1, r_1, l_2, r_2;

    cin >> l_1 >> r_1 >> l_2 >> r_2;
    
    if (r_1 >= l_2 && r_2 >= l_1)
        cout << max(l_1, l_2) << " " << min(r_1, r_2) << endl;
    else
        cout << "-1" << endl;
}