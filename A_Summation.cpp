#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,x;
    long long int sum=0;
    cin >> n;
    while(n--){
        cin >>x;
        sum += x;
    }
    cout << abs(sum) << endl;
}