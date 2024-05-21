//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
//Apr/18/2024 01:28am UTC+6
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int num[x];
    for(int i=0; i<x; i++){
        cin >> num[i];
        if(num[i]>=1){
            num[i] = 1;
        }
        if(num[i]<0){
            num[i] = 2;
        }
    
    }
    for(int i=0; i<x; i++){
        cout << num[i] << " ";
    }
    
}