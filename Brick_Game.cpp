#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;

    cin >> test_case;
    for (int i = 1; i <= test_case; ++i)
    {
        int total_player;
        cin >> total_player;
        int player_age[total_player];

        int middle_player = ceil(total_player / 2.0);
        for (int i = 0; i < total_player; i++)
        {
            cin >> player_age[i];
        }
        cout << "Case " << i << ": " << player_age[middle_player - 1] << endl;
    }
}