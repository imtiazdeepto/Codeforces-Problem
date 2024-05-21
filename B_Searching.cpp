//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
//Apr/18/2024 01:22 Am UTC+6
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x,y;
    cin >> x;
    long long int num[x];
    for(int i=0; i<x; i++) cin >> num[i];
    cin >> y;
    bool ok = true;
    for(int i=0; i<x; i++) {
        if(num[i]==y){
            cout << i <<endl;
            ok=false;
            break;
        }
    }
    if(ok==true){
        cout << "-1"<<endl;
    }
}