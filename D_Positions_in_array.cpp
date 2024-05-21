//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
//Apr/18/2024 01:33 am UTC+6
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int num[x];
    for(int i=0;i<x;i++){
        cin >> num[i];
        if(num[i]<=10){
            cout <<"A[" <<i<<"] = "<<num[i]<<endl;
        }
    }
}