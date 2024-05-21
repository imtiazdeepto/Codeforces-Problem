#include<iostream>
using namespace std;

int main() {
    int time;
    cin >> time;
    
    int check ,SUM=0;
    
    for (int i = 0; i < time; i++) {
        cin >> check;
        SUM += check;
    }
    
    if (SUM==0) {
        cout << "EASY" << endl;
    } else {
        cout << "HARD" << endl;
    }
    
    return 0;
}