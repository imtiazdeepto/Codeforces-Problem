#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    // Vowels are letters "A", "O", "Y", "E", "U", "I",

    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] == 'A' || name[i] == 'O' || name[i] == 'Y' || name[i] == 'E' || name[i] == 'U' || name[i] == 'I' || name[i] == 'a' || name[i] == 'o' || name[i] == 'y' || name[i] == 'e' || name[i] == 'u' || name[i] == 'i')
            continue;
        // if (name[i] == 'A', 'O', 'Y', 'E', 'U', 'I')continue;
        else
        {
            char ch = tolower(name[i]);
            cout << "." << ch;
        }
    }
}